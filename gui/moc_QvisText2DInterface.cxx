/****************************************************************************
** Meta object code from reading C++ file 'QvisText2DInterface.h'
**
** Created: Wed Nov 4 16:17:58 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisText2DInterface.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisText2DInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisText2DInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   51,   53,   53, 0x08,
      54,   53,   53,   53, 0x08,
      73,   53,   53,   53, 0x08,
      87,   53,   53,   53, 0x08,
     112,   53,   53,   53, 0x08,
     136,   53,   53,   53, 0x08,
     159,   53,   53,   53, 0x08,
     177,   53,   53,   53, 0x08,
     197,   53,   53,   53, 0x08,
     217,   53,   53,   53, 0x08,
     249,   53,   53,   53, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisText2DInterface[] = {
    "QvisText2DInterface\0positionChanged(double,double)\0"
    ",\0\0heightChanged(int)\0textChanged()\0"
    "textColorChanged(QColor)\0"
    "textOpacityChanged(int)\0fontFamilyChanged(int)\0"
    "boldToggled(bool)\0italicToggled(bool)\0"
    "shadowToggled(bool)\0useForegroundColorToggled(bool)\0"
    "visibilityToggled(bool)\0"
};

void QvisText2DInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisText2DInterface *_t = static_cast<QvisText2DInterface *>(_o);
        switch (_id) {
        case 0: _t->positionChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 1: _t->heightChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->textChanged(); break;
        case 3: _t->textColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 4: _t->textOpacityChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->fontFamilyChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->boldToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->italicToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->shadowToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->useForegroundColorToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->visibilityToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisText2DInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisText2DInterface::staticMetaObject = {
    { &QvisAnnotationObjectInterface::staticMetaObject, qt_meta_stringdata_QvisText2DInterface,
      qt_meta_data_QvisText2DInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisText2DInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisText2DInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisText2DInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisText2DInterface))
        return static_cast<void*>(const_cast< QvisText2DInterface*>(this));
    return QvisAnnotationObjectInterface::qt_metacast(_clname);
}

int QvisText2DInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisAnnotationObjectInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
