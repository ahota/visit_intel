/****************************************************************************
** Meta object code from reading C++ file 'ViewerMetaDataObserver.h'
**
** Created: Wed Nov 4 16:21:19 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ViewerMetaDataObserver.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ViewerMetaDataObserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ViewerMetaDataObserver[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   91,   98,   98, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_ViewerMetaDataObserver[] = {
    "ViewerMetaDataObserver\0"
    "metaDataUpdated(std::string,std::string,const avtDatabaseMetaData*)\0"
    "h,f,md\0\0"
};

void ViewerMetaDataObserver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ViewerMetaDataObserver *_t = static_cast<ViewerMetaDataObserver *>(_o);
        switch (_id) {
        case 0: _t->metaDataUpdated((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2])),(*reinterpret_cast< const avtDatabaseMetaData*(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ViewerMetaDataObserver::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ViewerMetaDataObserver::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ViewerMetaDataObserver,
      qt_meta_data_ViewerMetaDataObserver, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ViewerMetaDataObserver::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ViewerMetaDataObserver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ViewerMetaDataObserver::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ViewerMetaDataObserver))
        return static_cast<void*>(const_cast< ViewerMetaDataObserver*>(this));
    if (!strcmp(_clname, "Observer"))
        return static_cast< Observer*>(const_cast< ViewerMetaDataObserver*>(this));
    return QObject::qt_metacast(_clname);
}

int ViewerMetaDataObserver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void ViewerMetaDataObserver::metaDataUpdated(const std::string & _t1, const std::string & _t2, const avtDatabaseMetaData * _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE