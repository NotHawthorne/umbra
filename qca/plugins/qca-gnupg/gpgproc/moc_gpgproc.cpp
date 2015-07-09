/****************************************************************************
** Meta object code from reading C++ file 'gpgproc.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "gpgproc.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gpgproc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_gpgQCAPlugin__GPGProc_t {
    QByteArrayData data[15];
    char stringdata[200];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_gpgQCAPlugin__GPGProc_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_gpgQCAPlugin__GPGProc_t qt_meta_stringdata_gpgQCAPlugin__GPGProc = {
    {
QT_MOC_LITERAL(0, 0, 21),
QT_MOC_LITERAL(1, 22, 5),
QT_MOC_LITERAL(2, 28, 0),
QT_MOC_LITERAL(3, 29, 28),
QT_MOC_LITERAL(4, 58, 8),
QT_MOC_LITERAL(5, 67, 8),
QT_MOC_LITERAL(6, 76, 15),
QT_MOC_LITERAL(7, 92, 15),
QT_MOC_LITERAL(8, 108, 20),
QT_MOC_LITERAL(9, 129, 17),
QT_MOC_LITERAL(10, 147, 5),
QT_MOC_LITERAL(11, 153, 15),
QT_MOC_LITERAL(12, 169, 19),
QT_MOC_LITERAL(13, 189, 5),
QT_MOC_LITERAL(14, 195, 3)
    },
    "gpgQCAPlugin::GPGProc\0error\0\0"
    "gpgQCAPlugin::GPGProc::Error\0finished\0"
    "exitCode\0readyReadStdout\0readyReadStderr\0"
    "readyReadStatusLines\0bytesWrittenStdin\0"
    "bytes\0bytesWrittenAux\0bytesWrittenCommand\0"
    "debug\0str\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gpgQCAPlugin__GPGProc[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06,
       4,    1,   62,    2, 0x06,
       6,    0,   65,    2, 0x06,
       7,    0,   66,    2, 0x06,
       8,    0,   67,    2, 0x06,
       9,    1,   68,    2, 0x06,
      11,    1,   71,    2, 0x06,
      12,    1,   74,    2, 0x06,
      13,    1,   77,    2, 0x06,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    1,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::QString,   14,

       0        // eod
};

void gpgQCAPlugin::GPGProc::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GPGProc *_t = static_cast<GPGProc *>(_o);
        switch (_id) {
        case 0: _t->error((*reinterpret_cast< gpgQCAPlugin::GPGProc::Error(*)>(_a[1]))); break;
        case 1: _t->finished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->readyReadStdout(); break;
        case 3: _t->readyReadStderr(); break;
        case 4: _t->readyReadStatusLines(); break;
        case 5: _t->bytesWrittenStdin((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->bytesWrittenAux((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->bytesWrittenCommand((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->debug((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GPGProc::*_t)(gpgQCAPlugin::GPGProc::Error );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GPGProc::error)) {
                *result = 0;
            }
        }
        {
            typedef void (GPGProc::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GPGProc::finished)) {
                *result = 1;
            }
        }
        {
            typedef void (GPGProc::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GPGProc::readyReadStdout)) {
                *result = 2;
            }
        }
        {
            typedef void (GPGProc::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GPGProc::readyReadStderr)) {
                *result = 3;
            }
        }
        {
            typedef void (GPGProc::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GPGProc::readyReadStatusLines)) {
                *result = 4;
            }
        }
        {
            typedef void (GPGProc::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GPGProc::bytesWrittenStdin)) {
                *result = 5;
            }
        }
        {
            typedef void (GPGProc::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GPGProc::bytesWrittenAux)) {
                *result = 6;
            }
        }
        {
            typedef void (GPGProc::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GPGProc::bytesWrittenCommand)) {
                *result = 7;
            }
        }
        {
            typedef void (GPGProc::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GPGProc::debug)) {
                *result = 8;
            }
        }
    }
}

const QMetaObject gpgQCAPlugin::GPGProc::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_gpgQCAPlugin__GPGProc.data,
      qt_meta_data_gpgQCAPlugin__GPGProc,  qt_static_metacall, 0, 0}
};


const QMetaObject *gpgQCAPlugin::GPGProc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gpgQCAPlugin::GPGProc::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_gpgQCAPlugin__GPGProc.stringdata))
        return static_cast<void*>(const_cast< GPGProc*>(this));
    return QObject::qt_metacast(_clname);
}

int gpgQCAPlugin::GPGProc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void gpgQCAPlugin::GPGProc::error(gpgQCAPlugin::GPGProc::Error _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void gpgQCAPlugin::GPGProc::finished(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void gpgQCAPlugin::GPGProc::readyReadStdout()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void gpgQCAPlugin::GPGProc::readyReadStderr()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void gpgQCAPlugin::GPGProc::readyReadStatusLines()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void gpgQCAPlugin::GPGProc::bytesWrittenStdin(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void gpgQCAPlugin::GPGProc::bytesWrittenAux(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void gpgQCAPlugin::GPGProc::bytesWrittenCommand(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void gpgQCAPlugin::GPGProc::debug(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_END_MOC_NAMESPACE
