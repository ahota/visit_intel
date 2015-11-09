/****************************************************************************
** Meta object code from reading C++ file 'SharedDaemon.h'
**
** Created: Wed Nov 4 16:21:19 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "SharedDaemon.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SharedDaemon.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SharedDaemon[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   20,   20,   20, 0x0a,
      21,   20,   20,   20, 0x09,
      40,   68,   20,   20, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_SharedDaemon[] = {
    "SharedDaemon\0init()\0\0handleConnection()\0"
    "getPasswordMessage(QString)\0message\0"
};

void SharedDaemon::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SharedDaemon *_t = static_cast<SharedDaemon *>(_o);
        switch (_id) {
        case 0: _t->init(); break;
        case 1: _t->handleConnection(); break;
        case 2: _t->getPasswordMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SharedDaemon::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SharedDaemon::staticMetaObject = {
    { &QTcpServer::staticMetaObject, qt_meta_stringdata_SharedDaemon,
      qt_meta_data_SharedDaemon, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SharedDaemon::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SharedDaemon::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SharedDaemon::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SharedDaemon))
        return static_cast<void*>(const_cast< SharedDaemon*>(this));
    return QTcpServer::qt_metacast(_clname);
}

int SharedDaemon::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpServer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
