/****************************************************************************
** Meta object code from reading C++ file 'cat.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../05-01-QtTest/cat.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cat.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Cat_t {
    QByteArrayData data[7];
    char stringdata0[33];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cat_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cat_t qt_meta_stringdata_Cat = {
    {
QT_MOC_LITERAL(0, 0, 3), // "Cat"
QT_MOC_LITERAL(1, 4, 4), // "test"
QT_MOC_LITERAL(2, 9, 0), // ""
QT_MOC_LITERAL(3, 10, 4), // "meow"
QT_MOC_LITERAL(4, 15, 5), // "sleep"
QT_MOC_LITERAL(5, 21, 5), // "speak"
QT_MOC_LITERAL(6, 27, 5) // "value"

    },
    "Cat\0test\0\0meow\0sleep\0speak\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cat[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    1,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

void Cat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Cat *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->test(); break;
        case 1: _t->meow(); break;
        case 2: _t->sleep(); break;
        case 3: _t->speak((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Cat::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Cat.data,
    qt_meta_data_Cat,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Cat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cat::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cat.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Cat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
