/****************************************************************************
** Meta object code from reading C++ file 'dog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../05-18-QtBasicUnitTests/dog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dog_t {
    QByteArrayData data[8];
    char stringdata0[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dog_t qt_meta_stringdata_Dog = {
    {
QT_MOC_LITERAL(0, 0, 3), // "Dog"
QT_MOC_LITERAL(1, 4, 12), // "initTestCase"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 4), // "init"
QT_MOC_LITERAL(4, 23, 7), // "cleanup"
QT_MOC_LITERAL(5, 31, 15), // "cleanupTestCase"
QT_MOC_LITERAL(6, 47, 4), // "bark"
QT_MOC_LITERAL(7, 52, 8) // "rollover"

    },
    "Dog\0initTestCase\0\0init\0cleanup\0"
    "cleanupTestCase\0bark\0rollover"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Dog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Dog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initTestCase(); break;
        case 1: _t->init(); break;
        case 2: _t->cleanup(); break;
        case 3: _t->cleanupTestCase(); break;
        case 4: _t->bark(); break;
        case 5: _t->rollover(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Dog::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Dog.data,
    qt_meta_data_Dog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Dog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dog.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Dog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
