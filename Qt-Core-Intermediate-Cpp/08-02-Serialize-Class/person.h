#ifndef PERSON_H
#define PERSON_H
#include <QObject>
#include <QDebug>
#include <QMap>
#include <QDataStream>


class Person : public QObject
{
    Q_OBJECT
public:
    explicit Person(QObject *parent = nullptr);

    void fill();
    QString name();
    void setName(QString value);
    QMap<QString, QString> map();

    friend QDataStream& operator <<(QDataStream &stream, const Person &testObject) {
        qInfo() << "Operload <<";
        stream << testObject.m_name;
        stream << testObject.m_map;
        return stream;
    }

    friend QDataStream& operator >>(QDataStream &stream, Person &testObject) {
        qInfo() << "Operload >>";
        stream >> testObject.m_name;
        stream >> testObject.m_map;
        return stream;
    }

signals:

public slots:

private:
    QString m_name;
    QMap<QString, QString> m_map;
};


#endif // PERSON_H
