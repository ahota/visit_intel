/****************************************************************************
** Meta object code from reading C++ file 'ViewerSubjectProxy.h'
**
** Created: Wed Nov 4 16:32:42 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ViewerSubjectProxy.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ViewerSubjectProxy.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ViewerSubjectProxy[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   43,   43,   43, 0x0a,
      44,   43,   43,   43, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ViewerSubjectProxy[] = {
    "ViewerSubjectProxy\0windowDeleted(QObject*)\0"
    "\0viewerWindowCreated(ViewerWindow*)\0"
};

void ViewerSubjectProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ViewerSubjectProxy *_t = static_cast<ViewerSubjectProxy *>(_o);
        switch (_id) {
        case 0: _t->windowDeleted((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 1: _t->viewerWindowCreated((*reinterpret_cast< ViewerWindow*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ViewerSubjectProxy::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ViewerSubjectProxy::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ViewerSubjectProxy,
      qt_meta_data_ViewerSubjectProxy, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ViewerSubjectProxy::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ViewerSubjectProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ViewerSubjectProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ViewerSubjectProxy))
        return static_cast<void*>(const_cast< ViewerSubjectProxy*>(this));
    if (!strcmp(_clname, "ViewerProxy"))
        return static_cast< ViewerProxy*>(const_cast< ViewerSubjectProxy*>(this));
    return QObject::qt_metacast(_clname);
}

int ViewerSubjectProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
