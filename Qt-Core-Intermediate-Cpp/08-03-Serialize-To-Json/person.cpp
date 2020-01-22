#include "person.h"

Person::Person(QObject *parent) : QObject(parent)
{

}

void Person::fill()
{
    m_name = "test object";
    for(int i = 0; i < 10; i++) {
        QString num = QString::number(i);
        QString key = "Key: " + num;
        QString value = "Value: " + num;
        m_map.insert(key,value);
    }
}

QString Person::name() {
    return m_name;
}

void Person::setName(QString value){
    m_name = value;
}

QMap<QString,QString> Person::map() {
    return  m_map;
}

void Person::setMap(const QMap<QString, QString> &map)
{
    m_map = map;
}
