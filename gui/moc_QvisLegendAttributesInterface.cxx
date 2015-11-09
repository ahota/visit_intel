/****************************************************************************
** Meta object code from reading C++ file 'QvisLegendAttributesInterface.h'
**
** Created: Wed Nov 4 16:17:58 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisLegendAttributesInterface.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisLegendAttributesInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisLegendAttributesInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      30,   50,   50,   50, 0x08,
      51,   82,   50,   50, 0x08,
      84,   50,   50,   50, 0x08,
     102,   50,   50,   50, 0x08,
     121,   50,   50,   50, 0x08,
     145,   50,   50,   50, 0x08,
     159,   50,   50,   50, 0x08,
     179,   50,   50,   50, 0x08,
     204,   50,   50,   50, 0x08,
     228,   50,   50,   50, 0x08,
     251,   50,   50,   50, 0x08,
     269,   50,   50,   50, 0x08,
     289,   50,   50,   50, 0x08,
     309,   50,   50,   50, 0x08,
     341,   50,   50,   50, 0x08,
     365,   50,   50,   50, 0x08,
     394,   50,   50,   50, 0x08,
     426,   50,   50,   50, 0x08,
     457,   50,   50,   50, 0x08,
     480,   50,   50,   50, 0x08,
     505,   50,   50,   50, 0x08,
     526,   50,   50,   50, 0x08,
     546,   50,   50,   50, 0x08,
     569,   50,   50,   50, 0x08,
     592,   50,   50,   50, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisLegendAttributesInterface[] = {
    "QvisLegendAttributesInterface\0"
    "layoutChanged(bool)\0\0"
    "positionChanged(double,double)\0,\0"
    "widthChanged(int)\0heightChanged(int)\0"
    "orientationChanged(int)\0textChanged()\0"
    "fontHeightChanged()\0textColorChanged(QColor)\0"
    "textOpacityChanged(int)\0fontFamilyChanged(int)\0"
    "boldToggled(bool)\0italicToggled(bool)\0"
    "shadowToggled(bool)\0useForegroundColorToggled(bool)\0"
    "drawMinmaxToggled(bool)\0"
    "drawBoundingBoxToggled(bool)\0"
    "boundingBoxColorChanged(QColor)\0"
    "boundingBoxOpacityChanged(int)\0"
    "drawTitleToggled(bool)\0tickControlToggled(bool)\0"
    "numTicksChanged(int)\0minMaxToggled(bool)\0"
    "drawLabelsChanged(int)\0addSuppliedLabelsRow()\0"
    "deleteSelectedRow()\0"
};

void QvisLegendAttributesInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisLegendAttributesInterface *_t = static_cast<QvisLegendAttributesInterface *>(_o);
        switch (_id) {
        case 0: _t->layoutChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->positionChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 2: _t->widthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->heightChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->orientationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->textChanged(); break;
        case 6: _t->fontHeightChanged(); break;
        case 7: _t->textColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 8: _t->textOpacityChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->fontFamilyChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->boldToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->italicToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->shadowToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->useForegroundColorToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->drawMinmaxToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->drawBoundingBoxToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->boundingBoxColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 17: _t->boundingBoxOpacityChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->drawTitleToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->tickControlToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->numTicksChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->minMaxToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->drawLabelsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->addSuppliedLabelsRow(); break;
        case 24: _t->deleteSelectedRow(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisLegendAttributesInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisLegendAttributesInterface::staticMetaObject = {
    { &QvisAnnotationObjectInterface::staticMetaObject, qt_meta_stringdata_QvisLegendAttributesInterface,
      qt_meta_data_QvisLegendAttributesInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisLegendAttributesInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisLegendAttributesInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisLegendAttributesInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisLegendAttributesInterface))
        return static_cast<void*>(const_cast< QvisLegendAttributesInterface*>(this));
    return QvisAnnotationObjectInterface::qt_metacast(_clname);
}

int QvisLegendAttributesInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisAnnotationObjectInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
