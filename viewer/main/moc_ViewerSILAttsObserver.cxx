/****************************************************************************
** Meta object code from reading C++ file 'ViewerSILAttsObserver.h'
**
** Created: Wed Nov 4 16:21:19 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ViewerSILAttsObserver.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ViewerSILAttsObserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ViewerSILAttsObserver[] = {

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
      22,   83,   90,   90, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_ViewerSILAttsObserver[] = {
    "ViewerSILAttsObserver\0"
    "silAttsUpdated(std::string,std::string,const SILAttributes*)\0"
    "h,f,sa\0\0"
};

void ViewerSILAttsObserver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ViewerSILAttsObserver *_t = static_cast<ViewerSILAttsObserver *>(_o);
        switch (_id) {
        case 0: _t->silAttsUpdated((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2])),(*reinterpret_cast< const SILAttributes*(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ViewerSILAttsObserver::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ViewerSILAttsObserver::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ViewerSILAttsObserver,
      qt_meta_data_ViewerSILAttsObserver, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ViewerSILAttsObserver::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ViewerSILAttsObserver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ViewerSILAttsObserver::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ViewerSILAttsObserver))
        return static_cast<void*>(const_cast< ViewerSILAttsObserver*>(this));
    if (!strcmp(_clname, "Observer"))
        return static_cast< Observer*>(const_cast< ViewerSILAttsObserver*>(this));
    return QObject::qt_metacast(_clname);
}

int ViewerSILAttsObserver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void ViewerSILAttsObserver::silAttsUpdated(const std::string & _t1, const std::string & _t2, const SILAttributes * _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
