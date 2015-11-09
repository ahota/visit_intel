/****************************************************************************
** Meta object code from reading C++ file 'QvisTimeSliderInterface.h'
**
** Created: Wed Nov 4 16:17:58 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisTimeSliderInterface.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisTimeSliderInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisTimeSliderInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   55,   57,   57, 0x08,
      58,   57,   57,   57, 0x08,
      76,   57,   57,   57, 0x08,
      95,   57,   57,   57, 0x08,
     110,   57,   57,   57, 0x08,
     130,   57,   57,   57, 0x08,
     156,   57,   57,   57, 0x08,
     181,   57,   57,   57, 0x08,
     205,   57,   57,   57, 0x08,
     228,   57,   57,   57, 0x08,
     253,   57,   57,   57, 0x08,
     277,   57,   57,   57, 0x08,
     301,   57,   57,   57, 0x08,
     322,   57,   57,   57, 0x08,
     342,   57,   57,   57, 0x08,
     366,   57,   57,   57, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisTimeSliderInterface[] = {
    "QvisTimeSliderInterface\0"
    "positionChanged(double,double)\0,\0\0"
    "widthChanged(int)\0heightChanged(int)\0"
    "labelChanged()\0timeFormatChanged()\0"
    "startColorChanged(QColor)\0"
    "startOpacityChanged(int)\0"
    "endColorChanged(QColor)\0endOpacityChanged(int)\0"
    "textColorChanged(QColor)\0"
    "textOpacityChanged(int)\0visibilityToggled(bool)\0"
    "roundedToggled(bool)\0shadedToggled(bool)\0"
    "timeDisplayChanged(int)\0"
    "useForegroundColorToggled(bool)\0"
};

void QvisTimeSliderInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisTimeSliderInterface *_t = static_cast<QvisTimeSliderInterface *>(_o);
        switch (_id) {
        case 0: _t->positionChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 1: _t->widthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->heightChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->labelChanged(); break;
        case 4: _t->timeFormatChanged(); break;
        case 5: _t->startColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 6: _t->startOpacityChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->endColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 8: _t->endOpacityChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->textColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 10: _t->textOpacityChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->visibilityToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->roundedToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->shadedToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->timeDisplayChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->useForegroundColorToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisTimeSliderInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisTimeSliderInterface::staticMetaObject = {
    { &QvisAnnotationObjectInterface::staticMetaObject, qt_meta_stringdata_QvisTimeSliderInterface,
      qt_meta_data_QvisTimeSliderInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisTimeSliderInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisTimeSliderInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisTimeSliderInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisTimeSliderInterface))
        return static_cast<void*>(const_cast< QvisTimeSliderInterface*>(this));
    return QvisAnnotationObjectInterface::qt_metacast(_clname);
}

int QvisTimeSliderInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisAnnotationObjectInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
