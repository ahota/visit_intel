/****************************************************************************
** Meta object code from reading C++ file 'QvisImageAnnotationInterface.h'
**
** Created: Wed Nov 4 16:17:57 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisImageAnnotationInterface.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisImageAnnotationInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisImageAnnotationInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      29,   57,   57,   57, 0x08,
      58,   94,   57,   57, 0x08,
      96,   57,   57,   57, 0x08,
     114,   57,   57,   57, 0x08,
     133,   57,   57,   57, 0x08,
     159,   57,   57,   57, 0x08,
     184,   57,   57,   57, 0x08,
     212,   57,   57,   57, 0x08,
     232,   57,   57,   57, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisImageAnnotationInterface[] = {
    "QvisImageAnnotationInterface\0"
    "imageSourceChanged(QString)\0\0"
    "positionStartChanged(double,double)\0"
    ",\0widthChanged(int)\0heightChanged(int)\0"
    "maintainAspectRatio(bool)\0"
    "toggleOpacityColor(bool)\0"
    "opacityColorChanged(QColor)\0"
    "opacityChanged(int)\0visibilityToggled(bool)\0"
};

void QvisImageAnnotationInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisImageAnnotationInterface *_t = static_cast<QvisImageAnnotationInterface *>(_o);
        switch (_id) {
        case 0: _t->imageSourceChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->positionStartChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 2: _t->widthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->heightChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->maintainAspectRatio((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->toggleOpacityColor((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->opacityColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 7: _t->opacityChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->visibilityToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisImageAnnotationInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisImageAnnotationInterface::staticMetaObject = {
    { &QvisAnnotationObjectInterface::staticMetaObject, qt_meta_stringdata_QvisImageAnnotationInterface,
      qt_meta_data_QvisImageAnnotationInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisImageAnnotationInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisImageAnnotationInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisImageAnnotationInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisImageAnnotationInterface))
        return static_cast<void*>(const_cast< QvisImageAnnotationInterface*>(this));
    return QvisAnnotationObjectInterface::qt_metacast(_clname);
}

int QvisImageAnnotationInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisAnnotationObjectInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
