/****************************************************************************
** Meta object code from reading C++ file 'qpipe.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../include/QtCrypto/qpipe.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qpipe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QCA__QPipeDevice_t {
    QByteArrayData data[3];
    char stringdata[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QCA__QPipeDevice_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QCA__QPipeDevice_t qt_meta_stringdata_QCA__QPipeDevice = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 6),
QT_MOC_LITERAL(2, 24, 0)
    },
    "QCA::QPipeDevice\0notify\0\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCA__QPipeDevice[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void QCA::QPipeDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QPipeDevice *_t = static_cast<QPipeDevice *>(_o);
        switch (_id) {
        case 0: _t->notify(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QPipeDevice::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QPipeDevice::notify)) {
                *result = 0;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QCA::QPipeDevice::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QCA__QPipeDevice.data,
      qt_meta_data_QCA__QPipeDevice,  qt_static_metacall, 0, 0}
};


const QMetaObject *QCA::QPipeDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCA::QPipeDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCA__QPipeDevice.stringdata))
        return static_cast<void*>(const_cast< QPipeDevice*>(this));
    return QObject::qt_metacast(_clname);
}

int QCA::QPipeDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QCA::QPipeDevice::notify()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
struct qt_meta_stringdata_QCA__QPipeEnd_t {
    QByteArrayData data[9];
    char stringdata[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QCA__QPipeEnd_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QCA__QPipeEnd_t qt_meta_stringdata_QCA__QPipeEnd = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 9),
QT_MOC_LITERAL(2, 24, 0),
QT_MOC_LITERAL(3, 25, 12),
QT_MOC_LITERAL(4, 38, 5),
QT_MOC_LITERAL(5, 44, 6),
QT_MOC_LITERAL(6, 51, 5),
QT_MOC_LITERAL(7, 57, 20),
QT_MOC_LITERAL(8, 78, 1)
    },
    "QCA::QPipeEnd\0readyRead\0\0bytesWritten\0"
    "bytes\0closed\0error\0QCA::QPipeEnd::Error\0"
    "e\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCA__QPipeEnd[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06,
       3,    1,   35,    2, 0x06,
       5,    0,   38,    2, 0x06,
       6,    1,   39,    2, 0x06,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void QCA::QPipeEnd::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QPipeEnd *_t = static_cast<QPipeEnd *>(_o);
        switch (_id) {
        case 0: _t->readyRead(); break;
        case 1: _t->bytesWritten((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->closed(); break;
        case 3: _t->error((*reinterpret_cast< QCA::QPipeEnd::Error(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QPipeEnd::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QPipeEnd::readyRead)) {
                *result = 0;
            }
        }
        {
            typedef void (QPipeEnd::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QPipeEnd::bytesWritten)) {
                *result = 1;
            }
        }
        {
            typedef void (QPipeEnd::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QPipeEnd::closed)) {
                *result = 2;
            }
        }
        {
            typedef void (QPipeEnd::*_t)(QCA::QPipeEnd::Error );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QPipeEnd::error)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject QCA::QPipeEnd::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QCA__QPipeEnd.data,
      qt_meta_data_QCA__QPipeEnd,  qt_static_metacall, 0, 0}
};


const QMetaObject *QCA::QPipeEnd::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCA::QPipeEnd::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCA__QPipeEnd.stringdata))
        return static_cast<void*>(const_cast< QPipeEnd*>(this));
    return QObject::qt_metacast(_clname);
}

int QCA::QPipeEnd::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void QCA::QPipeEnd::readyRead()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QCA::QPipeEnd::bytesWritten(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QCA::QPipeEnd::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void QCA::QPipeEnd::error(QCA::QPipeEnd::Error _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
