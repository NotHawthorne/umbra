/****************************************************************************
** Meta object code from reading C++ file 'qca_securelayer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../include/QtCrypto/qca_securelayer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qca_securelayer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QCA__SecureLayer_t {
    QByteArrayData data[6];
    char stringdata[60];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QCA__SecureLayer_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QCA__SecureLayer_t qt_meta_stringdata_QCA__SecureLayer = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 9),
QT_MOC_LITERAL(2, 27, 0),
QT_MOC_LITERAL(3, 28, 17),
QT_MOC_LITERAL(4, 46, 6),
QT_MOC_LITERAL(5, 53, 5)
    },
    "QCA::SecureLayer\0readyRead\0\0"
    "readyReadOutgoing\0closed\0error\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCA__SecureLayer[] = {

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
       3,    0,   35,    2, 0x06,
       4,    0,   36,    2, 0x06,
       5,    0,   37,    2, 0x06,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QCA::SecureLayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SecureLayer *_t = static_cast<SecureLayer *>(_o);
        switch (_id) {
        case 0: _t->readyRead(); break;
        case 1: _t->readyReadOutgoing(); break;
        case 2: _t->closed(); break;
        case 3: _t->error(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SecureLayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SecureLayer::readyRead)) {
                *result = 0;
            }
        }
        {
            typedef void (SecureLayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SecureLayer::readyReadOutgoing)) {
                *result = 1;
            }
        }
        {
            typedef void (SecureLayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SecureLayer::closed)) {
                *result = 2;
            }
        }
        {
            typedef void (SecureLayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SecureLayer::error)) {
                *result = 3;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QCA::SecureLayer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QCA__SecureLayer.data,
      qt_meta_data_QCA__SecureLayer,  qt_static_metacall, 0, 0}
};


const QMetaObject *QCA::SecureLayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCA::SecureLayer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCA__SecureLayer.stringdata))
        return static_cast<void*>(const_cast< SecureLayer*>(this));
    return QObject::qt_metacast(_clname);
}

int QCA::SecureLayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QCA::SecureLayer::readyRead()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QCA::SecureLayer::readyReadOutgoing()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QCA::SecureLayer::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void QCA::SecureLayer::error()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
struct qt_meta_stringdata_QCA__TLS_t {
    QByteArrayData data[6];
    char stringdata[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QCA__TLS_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QCA__TLS_t qt_meta_stringdata_QCA__TLS = {
    {
QT_MOC_LITERAL(0, 0, 8),
QT_MOC_LITERAL(1, 9, 16),
QT_MOC_LITERAL(2, 26, 0),
QT_MOC_LITERAL(3, 27, 20),
QT_MOC_LITERAL(4, 48, 24),
QT_MOC_LITERAL(5, 73, 10)
    },
    "QCA::TLS\0hostNameReceived\0\0"
    "certificateRequested\0peerCertificateAvailable\0"
    "handshaken\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCA__TLS[] = {

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
       3,    0,   35,    2, 0x06,
       4,    0,   36,    2, 0x06,
       5,    0,   37,    2, 0x06,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QCA::TLS::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TLS *_t = static_cast<TLS *>(_o);
        switch (_id) {
        case 0: _t->hostNameReceived(); break;
        case 1: _t->certificateRequested(); break;
        case 2: _t->peerCertificateAvailable(); break;
        case 3: _t->handshaken(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TLS::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TLS::hostNameReceived)) {
                *result = 0;
            }
        }
        {
            typedef void (TLS::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TLS::certificateRequested)) {
                *result = 1;
            }
        }
        {
            typedef void (TLS::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TLS::peerCertificateAvailable)) {
                *result = 2;
            }
        }
        {
            typedef void (TLS::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TLS::handshaken)) {
                *result = 3;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QCA::TLS::staticMetaObject = {
    { &SecureLayer::staticMetaObject, qt_meta_stringdata_QCA__TLS.data,
      qt_meta_data_QCA__TLS,  qt_static_metacall, 0, 0}
};


const QMetaObject *QCA::TLS::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCA::TLS::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCA__TLS.stringdata))
        return static_cast<void*>(const_cast< TLS*>(this));
    if (!strcmp(_clname, "Algorithm"))
        return static_cast< Algorithm*>(const_cast< TLS*>(this));
    return SecureLayer::qt_metacast(_clname);
}

int QCA::TLS::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SecureLayer::qt_metacall(_c, _id, _a);
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
void QCA::TLS::hostNameReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QCA::TLS::certificateRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QCA::TLS::peerCertificateAvailable()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void QCA::TLS::handshaken()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
struct qt_meta_stringdata_QCA__SASL_t {
    QByteArrayData data[15];
    char stringdata[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QCA__SASL_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QCA__SASL_t qt_meta_stringdata_QCA__SASL = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 13),
QT_MOC_LITERAL(2, 24, 0),
QT_MOC_LITERAL(3, 25, 10),
QT_MOC_LITERAL(4, 36, 14),
QT_MOC_LITERAL(5, 51, 13),
QT_MOC_LITERAL(6, 65, 8),
QT_MOC_LITERAL(7, 74, 8),
QT_MOC_LITERAL(8, 83, 10),
QT_MOC_LITERAL(9, 94, 17),
QT_MOC_LITERAL(10, 112, 6),
QT_MOC_LITERAL(11, 119, 9),
QT_MOC_LITERAL(12, 129, 4),
QT_MOC_LITERAL(13, 134, 7),
QT_MOC_LITERAL(14, 142, 13)
    },
    "QCA::SASL\0clientStarted\0\0clientInit\0"
    "clientInitData\0serverStarted\0nextStep\0"
    "stepData\0needParams\0QCA::SASL::Params\0"
    "params\0authCheck\0user\0authzid\0"
    "authenticated\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCA__SASL[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06,
       5,    0,   49,    2, 0x06,
       6,    1,   50,    2, 0x06,
       8,    1,   53,    2, 0x06,
      11,    2,   56,    2, 0x06,
      14,    0,   61,    2, 0x06,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::QByteArray,    3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   12,   13,
    QMetaType::Void,

       0        // eod
};

void QCA::SASL::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SASL *_t = static_cast<SASL *>(_o);
        switch (_id) {
        case 0: _t->clientStarted((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 1: _t->serverStarted(); break;
        case 2: _t->nextStep((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 3: _t->needParams((*reinterpret_cast< const QCA::SASL::Params(*)>(_a[1]))); break;
        case 4: _t->authCheck((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->authenticated(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SASL::*_t)(bool , const QByteArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SASL::clientStarted)) {
                *result = 0;
            }
        }
        {
            typedef void (SASL::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SASL::serverStarted)) {
                *result = 1;
            }
        }
        {
            typedef void (SASL::*_t)(const QByteArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SASL::nextStep)) {
                *result = 2;
            }
        }
        {
            typedef void (SASL::*_t)(const QCA::SASL::Params & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SASL::needParams)) {
                *result = 3;
            }
        }
        {
            typedef void (SASL::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SASL::authCheck)) {
                *result = 4;
            }
        }
        {
            typedef void (SASL::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SASL::authenticated)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject QCA::SASL::staticMetaObject = {
    { &SecureLayer::staticMetaObject, qt_meta_stringdata_QCA__SASL.data,
      qt_meta_data_QCA__SASL,  qt_static_metacall, 0, 0}
};


const QMetaObject *QCA::SASL::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCA::SASL::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCA__SASL.stringdata))
        return static_cast<void*>(const_cast< SASL*>(this));
    if (!strcmp(_clname, "Algorithm"))
        return static_cast< Algorithm*>(const_cast< SASL*>(this));
    return SecureLayer::qt_metacast(_clname);
}

int QCA::SASL::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SecureLayer::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QCA::SASL::clientStarted(bool _t1, const QByteArray & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QCA::SASL::serverStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QCA::SASL::nextStep(const QByteArray & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QCA::SASL::needParams(const QCA::SASL::Params & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QCA::SASL::authCheck(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QCA::SASL::authenticated()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}
QT_END_MOC_NAMESPACE
