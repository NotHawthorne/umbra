/****************************************************************************
** Meta object code from reading C++ file 'ringwatch.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ringwatch.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ringwatch.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_gpgQCAPlugin__RingWatch_t {
    QByteArrayData data[6];
    char stringdata[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_gpgQCAPlugin__RingWatch_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_gpgQCAPlugin__RingWatch_t qt_meta_stringdata_gpgQCAPlugin__RingWatch = {
    {
QT_MOC_LITERAL(0, 0, 23),
QT_MOC_LITERAL(1, 24, 7),
QT_MOC_LITERAL(2, 32, 0),
QT_MOC_LITERAL(3, 33, 8),
QT_MOC_LITERAL(4, 42, 10),
QT_MOC_LITERAL(5, 53, 13)
    },
    "gpgQCAPlugin::RingWatch\0changed\0\0"
    "filePath\0dirChanged\0handleChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gpgQCAPlugin__RingWatch[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       4,    0,   32,    2, 0x08,
       5,    0,   33,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void gpgQCAPlugin::RingWatch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RingWatch *_t = static_cast<RingWatch *>(_o);
        switch (_id) {
        case 0: _t->changed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->dirChanged(); break;
        case 2: _t->handleChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (RingWatch::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RingWatch::changed)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject gpgQCAPlugin::RingWatch::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_gpgQCAPlugin__RingWatch.data,
      qt_meta_data_gpgQCAPlugin__RingWatch,  qt_static_metacall, 0, 0}
};


const QMetaObject *gpgQCAPlugin::RingWatch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gpgQCAPlugin::RingWatch::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_gpgQCAPlugin__RingWatch.stringdata))
        return static_cast<void*>(const_cast< RingWatch*>(this));
    return QObject::qt_metacast(_clname);
}

int gpgQCAPlugin::RingWatch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void gpgQCAPlugin::RingWatch::changed(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
