/****************************************************************************
** Meta object code from reading C++ file 'mykeystorelist.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mykeystorelist.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mykeystorelist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_gpgQCAPlugin__MyKeyStoreList_t {
    QByteArrayData data[5];
    char stringdata[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_gpgQCAPlugin__MyKeyStoreList_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_gpgQCAPlugin__MyKeyStoreList_t qt_meta_stringdata_gpgQCAPlugin__MyKeyStoreList = {
    {
QT_MOC_LITERAL(0, 0, 28),
QT_MOC_LITERAL(1, 29, 12),
QT_MOC_LITERAL(2, 42, 0),
QT_MOC_LITERAL(3, 43, 12),
QT_MOC_LITERAL(4, 56, 8)
    },
    "gpgQCAPlugin::MyKeyStoreList\0gpg_finished\0"
    "\0ring_changed\0filePath\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gpgQCAPlugin__MyKeyStoreList[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08,
       3,    1,   25,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

       0        // eod
};

void gpgQCAPlugin::MyKeyStoreList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MyKeyStoreList *_t = static_cast<MyKeyStoreList *>(_o);
        switch (_id) {
        case 0: _t->gpg_finished(); break;
        case 1: _t->ring_changed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject gpgQCAPlugin::MyKeyStoreList::staticMetaObject = {
    { &QCA::KeyStoreListContext::staticMetaObject, qt_meta_stringdata_gpgQCAPlugin__MyKeyStoreList.data,
      qt_meta_data_gpgQCAPlugin__MyKeyStoreList,  qt_static_metacall, 0, 0}
};


const QMetaObject *gpgQCAPlugin::MyKeyStoreList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gpgQCAPlugin::MyKeyStoreList::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_gpgQCAPlugin__MyKeyStoreList.stringdata))
        return static_cast<void*>(const_cast< MyKeyStoreList*>(this));
    return QCA::KeyStoreListContext::qt_metacast(_clname);
}

int gpgQCAPlugin::MyKeyStoreList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCA::KeyStoreListContext::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
