#ifndef CATPRIVATE_H
#define CATPRIVATE_H


#include <QObject>
#include <QDebug>

class Cat;
class CatPrivate
{
    Q_DECLARE_PUBLIC(Cat)
    Q_Q(Cat);

    CatPrivate(Cat *q) : q_ptr(q) {}
    ~CatPrivate() {}
    Cat *q_ptr;

    void meow();
    void hiss();
};
#endif // CATPRIVATE_H
