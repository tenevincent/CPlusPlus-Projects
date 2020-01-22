#include "converter.h"

converter::converter(QObject *parent) : QObject(parent)
{

}

void converter::writeEmployeeJson(Employee &employee, QString path)
{

    QVariantMap map;

    map["firstName"] = employee.FirstName();
    map["lastName"] = employee.LastName();
    map["department"] = employee.Department();
    map["employeeId"] = employee.EmployeeId();

    QJsonDocument document = QJsonDocument::fromVariant(map);

    QFile file(path);
    if(!file.open(QIODevice::WriteOnly)) {
        qCritical() << "Could not write file!";
        qCritical() << file.errorString();
        return;
    }

    file.write(document.toJson());
    file.close();

}

Employee *converter::readEmployeeJson(QString path)
{
    QFile file(path);
    if(!file.open(QIODevice::ReadOnly)) {
        qCritical() << "Could not read file!";
        qCritical() << file.errorString();
        return nullptr;
    }

    QByteArray data = file.readAll();
    file.close();

    QJsonDocument document = QJsonDocument::fromJson(data);
    Employee *employee = new Employee();
    employee->setFirstName(document["firstName"].toString());
    employee->setLastName(document["lastName"].toString());
    employee->setDepartment(document["department"].toString());
    employee->setEmployeeId(document["employeeId"].toInt());


    return  employee;



}

void converter::writeEmployeeXml(Employee &employee, QString path)
{
    QFile file(path);
    if(!file.open(QIODevice::WriteOnly)) {
        qCritical() << "Could not write file!";
        qCritical() << file.errorString();
        return;
    }

    QXmlStreamWriter stream(&file);
    stream.setAutoFormatting(true);

    stream.writeStartDocument();
    stream.writeStartElement("Employee");


    stream.writeTextElement("FirstName",employee.FirstName());
    stream.writeTextElement("LastName",employee.LastName());
    stream.writeTextElement("Department",employee.Department());
    stream.writeTextElement("EmployeeId",QString::number(employee.EmployeeId()));


    stream.writeEndElement();
}

Employee *converter::readEmployeeXml(QString path)
{
    QFile file(path);
    if(!file.open(QIODevice::ReadOnly)) {
        qCritical() << "Could not read file!";
        qCritical() << file.errorString();
        return nullptr;
    }

    QByteArray data = file.readAll();
    file.close();

    QXmlStreamReader stream(data);

    Employee *employee = new Employee();
    //QMap<QString, QString> map;

    while (!stream.atEnd()) {
        QXmlStreamReader::TokenType token = stream.readNext();
        switch (token) {
        case QXmlStreamReader::Comment:
            break;
        case QXmlStreamReader::DTD:
            break;
        case QXmlStreamReader::Characters:
            break;
        case QXmlStreamReader::ProcessingInstruction:
            break;
        case QXmlStreamReader::EntityReference:
            break;
        case QXmlStreamReader::NoToken:
            break;
        case QXmlStreamReader::Invalid:
            break;
        case QXmlStreamReader::StartDocument:
            break;
        case QXmlStreamReader::EndDocument:
            // t->setMap(map);
            break;
        case QXmlStreamReader::StartElement:
            if(stream.name() == "FirstName") {
                QString name = stream.readElementText();
                employee->setFirstName(name);
            }
            else if(stream.name() == "LastName") {
                QString name = stream.readElementText();
                employee->setLastName(name);
            }
            else if(stream.name() == "Department") {
                QString name = stream.readElementText();
                employee->setDepartment(name);
            }
            else if(stream.name() == "EmployeeId") {
                QString name = stream.readElementText();
                employee->setEmployeeId(name.toInt());
            }

            break;
        case QXmlStreamReader::EndElement:
            break;
        }
    }

    return employee;
}



void converter::writeXml(Person *person, QString path)
{
    QFile file(path);
    if(!file.open(QIODevice::WriteOnly)) {
        qCritical() << "Could not write file!";
        qCritical() << file.errorString();
        return;
    }

    QXmlStreamWriter stream(&file);
    stream.setAutoFormatting(true);

    stream.writeStartDocument();
    stream.writeStartElement("test");
    stream.writeAttribute("name", person->name());

    stream.writeStartElement("items");
    foreach(QString key, person->map().keys()) {
        stream.writeStartElement("item");
        stream.writeAttribute("key",key);
        stream.writeAttribute("value", person->map().value(key));
        stream.writeEndElement();
    }
    stream.writeEndElement();

    stream.writeEndElement();
    stream.writeEndDocument();

    file.flush();
    file.close();
}

Person *converter::readXml(QString path)
{
    QFile file(path);
    if(!file.open(QIODevice::ReadOnly)) {
        qCritical() << "Could not read file!";
        qCritical() << file.errorString();
        return nullptr;
    }

    QByteArray data = file.readAll();
    file.close();

    QXmlStreamReader stream(data);

    Person *t = new Person();
    QMap<QString, QString> map;

    while (!stream.atEnd()) {
        QXmlStreamReader::TokenType token = stream.readNext();
        switch (token) {
        case QXmlStreamReader::Comment:
            break;
        case QXmlStreamReader::DTD:
            break;
        case QXmlStreamReader::Characters:
            break;
        case QXmlStreamReader::ProcessingInstruction:
            break;
        case QXmlStreamReader::EntityReference:
            break;
        case QXmlStreamReader::NoToken:
            break;
        case QXmlStreamReader::Invalid:
            break;
        case QXmlStreamReader::StartDocument:
            break;
        case QXmlStreamReader::EndDocument:
            t->setMap(map);
            break;
        case QXmlStreamReader::StartElement:
            if(stream.name() == "test") {
                QString name = stream.attributes().value("name").toString();
                t->setName(name);
            }
            if(stream.name() == "item") {
                QString key = stream.attributes().value("key").toString();
                QString value = stream.attributes().value("value").toString();
                map.insert(key,value);
            }
            break;
        case QXmlStreamReader::EndElement:
            break;
        }
    }

    return t;
}

void converter::writeJson(Person *obj, QString path)
{
    QVariantMap map;
    QVariantMap items;
    map["name"] = obj->name();

    foreach(QString key, obj->map().keys()) {
        items.insert(key, QVariant(obj->map().value(key)));
    }

    map["items"] = QVariant(items);

    QJsonDocument document = QJsonDocument::fromVariant(map);

    QFile file(path);
    if(!file.open(QIODevice::WriteOnly)) {
        qCritical() << "Could not write file!";
        qCritical() << file.errorString();
        return;
    }

    file.write(document.toJson());
    file.close();

}

Person *converter::readJson(QString path)
{
    QFile file(path);
    if(!file.open(QIODevice::ReadOnly)) {
        qCritical() << "Could not read file!";
        qCritical() << file.errorString();
        return nullptr;
    }

    QByteArray data = file.readAll();
    file.close();

    QJsonDocument document = QJsonDocument::fromJson(data);
    Person *t = new Person();
    t->setName(document["name"].toString());
    QVariantMap vmap = qvariant_cast<QVariantMap>(document["items"]);

    QMap<QString,QString> map;
    foreach(QString key, vmap.keys()) {
        map.insert(key,vmap[key].toString());
    }
    t->setMap(map);

    return  t;

}
