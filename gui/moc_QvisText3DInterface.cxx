/****************************************************************************
** Meta object code from reading C++ file 'QvisText3DInterface.h'
**
** Created: Wed Nov 4 16:17:58 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisText3DInterface.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisText3DInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisText3DInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   34,   34,   34, 0x08,
      35,   34,   34,   34, 0x08,
      53,   34,   34,   34, 0x08,
      76,   34,   34,   34, 0x08,
     103,   34,   34,   34, 0x08,
     124,   34,   34,   34, 0x08,
     149,   34,   34,   34, 0x08,
     169,   34,   34,   34, 0x08,
     189,   34,   34,   34, 0x08,
     209,   34,   34,   34, 0x08,
     234,   34,   34,   34, 0x08,
     258,   34,   34,   34, 0x08,
     290,   34,   34,   34, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisText3DInterface[] = {
    "QvisText3DInterface\0textChanged()\0\0"
    "positionChanged()\0heightModeChanged(int)\0"
    "relativeHeightChanged(int)\0"
    "fixedHeightChanged()\0facesCameraToggled(bool)\0"
    "rotateZChanged(int)\0rotateXChanged(int)\0"
    "rotateYChanged(int)\0textColorChanged(QColor)\0"
    "textOpacityChanged(int)\0"
    "useForegroundColorToggled(bool)\0"
    "visibilityToggled(bool)\0"
};

void QvisText3DInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisText3DInterface *_t = static_cast<QvisText3DInterface *>(_o);
        switch (_id) {
        case 0: _t->textChanged(); break;
        case 1: _t->positionChanged(); break;
        case 2: _t->heightModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->relativeHeightChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->fixedHeightChanged(); break;
        case 5: _t->facesCameraToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->rotateZChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->rotateXChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->rotateYChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->textColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 10: _t->textOpacityChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->useForegroundColorToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->visibilityToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisText3DInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisText3DInterface::staticMetaObject = {
    { &QvisAnnotationObjectInterface::staticMetaObject, qt_meta_stringdata_QvisText3DInterface,
      qt_meta_data_QvisText3DInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisText3DInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisText3DInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisText3DInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisText3DInterface))
        return static_cast<void*>(const_cast< QvisText3DInterface*>(this));
    return QvisAnnotationObjectInterface::qt_metacast(_clname);
}

int QvisText3DInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisAnnotationObjectInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
