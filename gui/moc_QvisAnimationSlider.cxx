/****************************************************************************
** Meta object code from reading C++ file 'QvisAnimationSlider.h'
**
** Created: Wed Nov 4 16:17:56 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisAnimationSlider.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisAnimationSlider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisAnimationSlider[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   44,   44,   44, 0x05,
      45,   44,   44,   44, 0x05,

 // slots: signature, parameters, type, tag, flags
      65,   44,   44,   44, 0x09,
      89,   44,   44,   44, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QvisAnimationSlider[] = {
    "QvisAnimationSlider\0sliderValueChanged(int)\0"
    "\0sliderWasReleased()\0handleValueChanged(int)\0"
    "handleSliderReleased()\0"
};

void QvisAnimationSlider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisAnimationSlider *_t = static_cast<QvisAnimationSlider *>(_o);
        switch (_id) {
        case 0: _t->sliderValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->sliderWasReleased(); break;
        case 2: _t->handleValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->handleSliderReleased(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisAnimationSlider::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisAnimationSlider::staticMetaObject = {
    { &QSlider::staticMetaObject, qt_meta_stringdata_QvisAnimationSlider,
      qt_meta_data_QvisAnimationSlider, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisAnimationSlider::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisAnimationSlider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisAnimationSlider::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisAnimationSlider))
        return static_cast<void*>(const_cast< QvisAnimationSlider*>(this));
    return QSlider::qt_metacast(_clname);
}

int QvisAnimationSlider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSlider::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QvisAnimationSlider::sliderValueChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QvisAnimationSlider::sliderWasReleased()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
