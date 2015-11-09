/****************************************************************************
** Meta object code from reading C++ file 'ViewerActionBase.h'
**
** Created: Wed Nov 4 16:21:19 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ViewerActionBase.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ViewerActionBase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ViewerActionBase[] = {

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
      17,   28,   28,   28, 0x0a,
      29,   44,   28,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ViewerActionBase[] = {
    "ViewerActionBase\0Activate()\0\0"
    "Activate(bool)\0setup\0"
};

void ViewerActionBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ViewerActionBase *_t = static_cast<ViewerActionBase *>(_o);
        switch (_id) {
        case 0: _t->Activate(); break;
        case 1: _t->Activate((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ViewerActionBase::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ViewerActionBase::staticMetaObject = {
    { &ViewerBase::staticMetaObject, qt_meta_stringdata_ViewerActionBase,
      qt_meta_data_ViewerActionBase, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ViewerActionBase::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ViewerActionBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ViewerActionBase::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ViewerActionBase))
        return static_cast<void*>(const_cast< ViewerActionBase*>(this));
    return ViewerBase::qt_metacast(_clname);
}

int ViewerActionBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ViewerBase::qt_metacall(_c, _id, _a);
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
