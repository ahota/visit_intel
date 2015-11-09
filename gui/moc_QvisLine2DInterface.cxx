/****************************************************************************
** Meta object code from reading C++ file 'QvisLine2DInterface.h'
**
** Created: Wed Nov 4 16:17:58 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisLine2DInterface.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisLine2DInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisLine2DInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   56,   58,   58, 0x08,
      59,   56,   58,   58, 0x08,
      93,   58,   58,   58, 0x08,
     116,   58,   58,   58, 0x08,
     137,   58,   58,   58, 0x08,
     155,   58,   58,   58, 0x08,
     176,   58,   58,   58, 0x08,
     196,   58,   58,   58, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisLine2DInterface[] = {
    "QvisLine2DInterface\0"
    "positionStartChanged(double,double)\0"
    ",\0\0positionEndChanged(double,double)\0"
    "beginArrowChanged(int)\0endArrowChanged(int)\0"
    "widthChanged(int)\0colorChanged(QColor)\0"
    "opacityChanged(int)\0visibilityToggled(bool)\0"
};

void QvisLine2DInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisLine2DInterface *_t = static_cast<QvisLine2DInterface *>(_o);
        switch (_id) {
        case 0: _t->positionStartChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 1: _t->positionEndChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 2: _t->beginArrowChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->endArrowChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->widthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->colorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 6: _t->opacityChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->visibilityToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisLine2DInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisLine2DInterface::staticMetaObject = {
    { &QvisAnnotationObjectInterface::staticMetaObject, qt_meta_stringdata_QvisLine2DInterface,
      qt_meta_data_QvisLine2DInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisLine2DInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisLine2DInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisLine2DInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisLine2DInterface))
        return static_cast<void*>(const_cast< QvisLine2DInterface*>(this));
    return QvisAnnotationObjectInterface::qt_metacast(_clname);
}

int QvisLine2DInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisAnnotationObjectInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
