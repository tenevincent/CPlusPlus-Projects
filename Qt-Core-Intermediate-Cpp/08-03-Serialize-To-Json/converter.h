#ifndef CONVERTER_H
#define CONVERTER_H

#include <QObject>
#include <QObject>
#include <QDebug>
#include <QFile>
#include <QDir>
#include <QVariant>
#include <QVariantMap>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <QMap>
#include <QXmlStreamReader>
#include <QXmlStreamWriter>

#include "person.h"
#include "employee.h"


class converter : public QObject
{
    Q_OBJECT
public:
    explicit converter(QObject *parent = nullptr);

    static void writeEmployeeJson(Employee &employee, QString path);

    static Employee* readEmployeeJson(QString path);


    static void writeEmployeeXml(Employee &obj, QString path);

    static Employee *readEmployeeXml(QString path);


    static void writeXml(Person *obj, QString path);
    static Person* readXml(QString path);


    static void writeJson(Person *obj, QString path);

    static Person* readJson(QString path);

signals:

public slots:
};

#endif // CONVERTER_H
