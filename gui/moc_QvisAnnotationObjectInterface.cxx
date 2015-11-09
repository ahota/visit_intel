/****************************************************************************
** Meta object code from reading C++ file 'QvisAnnotationObjectInterface.h'
**
** Created: Wed Nov 4 16:17:56 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisAnnotationObjectInterface.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisAnnotationObjectInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisAnnotationObjectInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   45,   45,   45, 0x05,
      46,   45,   45,   45, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QvisAnnotationObjectInterface[] = {
    "QvisAnnotationObjectInterface\0"
    "applyChanges()\0\0setUpdateForWindow(bool)\0"
};

void QvisAnnotationObjectInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisAnnotationObjectInterface *_t = static_cast<QvisAnnotationObjectInterface *>(_o);
        switch (_id) {
        case 0: _t->applyChanges(); break;
        case 1: _t->setUpdateForWindow((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisAnnotationObjectInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisAnnotationObjectInterface::staticMetaObject = {
    { &QGroupBox::staticMetaObject, qt_meta_stringdata_QvisAnnotationObjectInterface,
      qt_meta_data_QvisAnnotationObjectInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisAnnotationObjectInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisAnnotationObjectInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisAnnotationObjectInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisAnnotationObjectInterface))
        return static_cast<void*>(const_cast< QvisAnnotationObjectInterface*>(this));
    if (!strcmp(_clname, "GUIBase"))
        return static_cast< GUIBase*>(const_cast< QvisAnnotationObjectInterface*>(this));
    return QGroupBox::qt_metacast(_clname);
}

int QvisAnnotationObjectInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QvisAnnotationObjectInterface::applyChanges()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QvisAnnotationObjectInterface::setUpdateForWindow(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
