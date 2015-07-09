/****************************************************************************
** Meta object code from reading C++ file 'gpgproc_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "gpgproc_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gpgproc_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_gpgQCAPlugin__QProcessSignalRelay_t {
    QByteArrayData data[16];
    char stringdata[257];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_gpgQCAPlugin__QProcessSignalRelay_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_gpgQCAPlugin__QProcessSignalRelay_t qt_meta_stringdata_gpgQCAPlugin__QProcessSignalRelay = {
    {
QT_MOC_LITERAL(0, 0, 33),
QT_MOC_LITERAL(1, 34, 7),
QT_MOC_LITERAL(2, 42, 0),
QT_MOC_LITERAL(3, 43, 23),
QT_MOC_LITERAL(4, 67, 22),
QT_MOC_LITERAL(5, 90, 12),
QT_MOC_LITERAL(6, 103, 8),
QT_MOC_LITERAL(7, 112, 5),
QT_MOC_LITERAL(8, 118, 22),
QT_MOC_LITERAL(9, 141, 12),
QT_MOC_LITERAL(10, 154, 28),
QT_MOC_LITERAL(11, 183, 27),
QT_MOC_LITERAL(12, 211, 17),
QT_MOC_LITERAL(13, 229, 1),
QT_MOC_LITERAL(14, 231, 13),
QT_MOC_LITERAL(15, 245, 10)
    },
    "gpgQCAPlugin::QProcessSignalRelay\0"
    "started\0\0readyReadStandardOutput\0"
    "readyReadStandardError\0bytesWritten\0"
    "finished\0error\0QProcess::ProcessError\0"
    "proc_started\0proc_readyReadStandardOutput\0"
    "proc_readyReadStandardError\0"
    "proc_bytesWritten\0x\0proc_finished\0"
    "proc_error\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gpgQCAPlugin__QProcessSignalRelay[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06,
       3,    0,   75,    2, 0x06,
       4,    0,   76,    2, 0x06,
       5,    1,   77,    2, 0x06,
       6,    1,   80,    2, 0x06,
       7,    1,   83,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       9,    0,   86,    2, 0x0a,
      10,    0,   87,    2, 0x0a,
      11,    0,   88,    2, 0x0a,
      12,    1,   89,    2, 0x0a,
      14,    1,   92,    2, 0x0a,
      15,    1,   95,    2, 0x0a,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 8,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, 0x80000000 | 8,   13,

       0        // eod
};

void gpgQCAPlugin::QProcessSignalRelay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QProcessSignalRelay *_t = static_cast<QProcessSignalRelay *>(_o);
        switch (_id) {
        case 0: _t->started(); break;
        case 1: _t->readyReadStandardOutput(); break;
        case 2: _t->readyReadStandardError(); break;
        case 3: _t->bytesWritten((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 4: _t->finished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->error((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 6: _t->proc_started(); break;
        case 7: _t->proc_readyReadStandardOutput(); break;
        case 8: _t->proc_readyReadStandardError(); break;
        case 9: _t->proc_bytesWritten((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 10: _t->proc_finished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->proc_error((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QProcessSignalRelay::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QProcessSignalRelay::started)) {
                *result = 0;
            }
        }
        {
            typedef void (QProcessSignalRelay::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QProcessSignalRelay::readyReadStandardOutput)) {
                *result = 1;
            }
        }
        {
            typedef void (QProcessSignalRelay::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QProcessSignalRelay::readyReadStandardError)) {
                *result = 2;
            }
        }
        {
            typedef void (QProcessSignalRelay::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QProcessSignalRelay::bytesWritten)) {
                *result = 3;
            }
        }
        {
            typedef void (QProcessSignalRelay::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QProcessSignalRelay::finished)) {
                *result = 4;
            }
        }
        {
            typedef void (QProcessSignalRelay::*_t)(QProcess::ProcessError );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QProcessSignalRelay::error)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject gpgQCAPlugin::QProcessSignalRelay::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_gpgQCAPlugin__QProcessSignalRelay.data,
      qt_meta_data_gpgQCAPlugin__QProcessSignalRelay,  qt_static_metacall, 0, 0}
};


const QMetaObject *gpgQCAPlugin::QProcessSignalRelay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gpgQCAPlugin::QProcessSignalRelay::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_gpgQCAPlugin__QProcessSignalRelay.stringdata))
        return static_cast<void*>(const_cast< QProcessSignalRelay*>(this));
    return QObject::qt_metacast(_clname);
}

int gpgQCAPlugin::QProcessSignalRelay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void gpgQCAPlugin::QProcessSignalRelay::started()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void gpgQCAPlugin::QProcessSignalRelay::readyReadStandardOutput()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void gpgQCAPlugin::QProcessSignalRelay::readyReadStandardError()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void gpgQCAPlugin::QProcessSignalRelay::bytesWritten(qint64 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void gpgQCAPlugin::QProcessSignalRelay::finished(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void gpgQCAPlugin::QProcessSignalRelay::error(QProcess::ProcessError _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
struct qt_meta_stringdata_gpgQCAPlugin__GPGProc__Private_t {
    QByteArrayData data[21];
    char stringdata[292];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_gpgQCAPlugin__GPGProc__Private_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_gpgQCAPlugin__GPGProc__Private_t qt_meta_stringdata_gpgQCAPlugin__GPGProc__Private = {
    {
QT_MOC_LITERAL(0, 0, 30),
QT_MOC_LITERAL(1, 31, 7),
QT_MOC_LITERAL(2, 39, 0),
QT_MOC_LITERAL(3, 40, 11),
QT_MOC_LITERAL(4, 52, 1),
QT_MOC_LITERAL(5, 54, 9),
QT_MOC_LITERAL(6, 64, 20),
QT_MOC_LITERAL(7, 85, 15),
QT_MOC_LITERAL(8, 101, 13),
QT_MOC_LITERAL(9, 115, 11),
QT_MOC_LITERAL(10, 127, 12),
QT_MOC_LITERAL(11, 140, 1),
QT_MOC_LITERAL(12, 142, 12),
QT_MOC_LITERAL(13, 155, 28),
QT_MOC_LITERAL(14, 184, 27),
QT_MOC_LITERAL(15, 212, 17),
QT_MOC_LITERAL(16, 230, 2),
QT_MOC_LITERAL(17, 233, 13),
QT_MOC_LITERAL(18, 247, 10),
QT_MOC_LITERAL(19, 258, 22),
QT_MOC_LITERAL(20, 281, 9)
    },
    "gpgQCAPlugin::GPGProc::Private\0doStart\0"
    "\0aux_written\0x\0aux_error\0QCA::QPipeEnd::Error\0"
    "command_written\0command_error\0status_read\0"
    "status_error\0e\0proc_started\0"
    "proc_readyReadStandardOutput\0"
    "proc_readyReadStandardError\0"
    "proc_bytesWritten\0lx\0proc_finished\0"
    "proc_error\0QProcess::ProcessError\0"
    "doTryDone\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gpgQCAPlugin__GPGProc__Private[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x0a,
       3,    1,   85,    2, 0x0a,
       5,    1,   88,    2, 0x0a,
       7,    1,   91,    2, 0x0a,
       8,    1,   94,    2, 0x0a,
       9,    0,   97,    2, 0x0a,
      10,    1,   98,    2, 0x0a,
      12,    0,  101,    2, 0x0a,
      13,    0,  102,    2, 0x0a,
      14,    0,  103,    2, 0x0a,
      15,    1,  104,    2, 0x0a,
      17,    1,  107,    2, 0x0a,
      18,    1,  110,    2, 0x0a,
      20,    0,  113,    2, 0x0a,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,   16,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, 0x80000000 | 19,    4,
    QMetaType::Void,

       0        // eod
};

void gpgQCAPlugin::GPGProc::Private::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Private *_t = static_cast<Private *>(_o);
        switch (_id) {
        case 0: _t->doStart(); break;
        case 1: _t->aux_written((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->aux_error((*reinterpret_cast< QCA::QPipeEnd::Error(*)>(_a[1]))); break;
        case 3: _t->command_written((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->command_error((*reinterpret_cast< QCA::QPipeEnd::Error(*)>(_a[1]))); break;
        case 5: _t->status_read(); break;
        case 6: _t->status_error((*reinterpret_cast< QCA::QPipeEnd::Error(*)>(_a[1]))); break;
        case 7: _t->proc_started(); break;
        case 8: _t->proc_readyReadStandardOutput(); break;
        case 9: _t->proc_readyReadStandardError(); break;
        case 10: _t->proc_bytesWritten((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 11: _t->proc_finished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->proc_error((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 13: _t->doTryDone(); break;
        default: ;
        }
    }
}

const QMetaObject gpgQCAPlugin::GPGProc::Private::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_gpgQCAPlugin__GPGProc__Private.data,
      qt_meta_data_gpgQCAPlugin__GPGProc__Private,  qt_static_metacall, 0, 0}
};


const QMetaObject *gpgQCAPlugin::GPGProc::Private::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gpgQCAPlugin::GPGProc::Private::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_gpgQCAPlugin__GPGProc__Private.stringdata))
        return static_cast<void*>(const_cast< Private*>(this));
    return QObject::qt_metacast(_clname);
}

int gpgQCAPlugin::GPGProc::Private::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
