/****************************************************************************
** Meta object code from reading C++ file 'test.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../01-16-QFutureWatcher/test.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'test.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TestObject_t {
    QByteArrayData data[19];
    char stringdata0[213];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TestObject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TestObject_t qt_meta_stringdata_TestObject = {
    {
QT_MOC_LITERAL(0, 0, 10), // "TestObject"
QT_MOC_LITERAL(1, 11, 8), // "canceled"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 8), // "finished"
QT_MOC_LITERAL(4, 30, 6), // "paused"
QT_MOC_LITERAL(5, 37, 20), // "progressRangeChanged"
QT_MOC_LITERAL(6, 58, 7), // "minimum"
QT_MOC_LITERAL(7, 66, 7), // "maximum"
QT_MOC_LITERAL(8, 74, 19), // "progressTextChanged"
QT_MOC_LITERAL(9, 94, 12), // "progressText"
QT_MOC_LITERAL(10, 107, 20), // "progressValueChanged"
QT_MOC_LITERAL(11, 128, 13), // "progressValue"
QT_MOC_LITERAL(12, 142, 13), // "resultReadyAt"
QT_MOC_LITERAL(13, 156, 5), // "index"
QT_MOC_LITERAL(14, 162, 14), // "resultsReadyAt"
QT_MOC_LITERAL(15, 177, 10), // "beginIndex"
QT_MOC_LITERAL(16, 188, 8), // "endIndex"
QT_MOC_LITERAL(17, 197, 7), // "resumed"
QT_MOC_LITERAL(18, 205, 7) // "started"

    },
    "TestObject\0canceled\0\0finished\0paused\0"
    "progressRangeChanged\0minimum\0maximum\0"
    "progressTextChanged\0progressText\0"
    "progressValueChanged\0progressValue\0"
    "resultReadyAt\0index\0resultsReadyAt\0"
    "beginIndex\0endIndex\0resumed\0started"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestObject[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x0a /* Public */,
       3,    0,   65,    2, 0x0a /* Public */,
       4,    0,   66,    2, 0x0a /* Public */,
       5,    2,   67,    2, 0x0a /* Public */,
       8,    1,   72,    2, 0x0a /* Public */,
      10,    1,   75,    2, 0x0a /* Public */,
      12,    1,   78,    2, 0x0a /* Public */,
      14,    2,   81,    2, 0x0a /* Public */,
      17,    0,   86,    2, 0x0a /* Public */,
      18,    0,   87,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   15,   16,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TestObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TestObject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->canceled(); break;
        case 1: _t->finished(); break;
        case 2: _t->paused(); break;
        case 3: _t->progressRangeChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->progressTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->progressValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->resultReadyAt((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->resultsReadyAt((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->resumed(); break;
        case 9: _t->started(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TestObject::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_TestObject.data,
    qt_meta_data_TestObject,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TestObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestObject::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TestObject.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TestObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
