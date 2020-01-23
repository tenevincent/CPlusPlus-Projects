#ifndef TEST_H
#define TEST_H

#include <QObject>
#include <QString>

class TestClass : public QObject
{
    Q_OBJECT

    Q_DISABLE_COPY(TestClass)

    Q_PROPERTY(QString firstName READ getFirstName WRITE setFirstName)
    Q_PROPERTY(QString lastName READ getLastName WRITE setLastName)
    Q_PROPERTY(QString departement READ getDepartement WRITE setDepartement)

public:
    explicit TestClass(QObject *parent = nullptr);

    void dostuff();
    void dostuff(QString param);

    QString getFirstName() const;
    void setFirstName(const QString &value);

    QString getLastName() const;
    void setLastName(const QString &value);

    QString getDepartement() const;
    void setDepartement(const QString &value);

signals:
    void mysignal();
public slots:
    void myslot();


private:
    QString _firstName;
    QString _lastName;
    QString _departement;

};


#endif // TEST_H
