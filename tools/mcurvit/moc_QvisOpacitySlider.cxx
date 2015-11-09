/****************************************************************************
** Meta object code from reading C++ file 'QvisOpacitySlider.h'
**
** Created: Wed Nov 4 16:32:39 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisOpacitySlider.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisOpacitySlider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisOpacitySlider[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       2,   54, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   48,   59,   59, 0x05,

 // slots: signature, parameters, type, tag, flags
      60,   59,   59,   59, 0x0a,
      74,   59,   59,   59, 0x0a,
      91,   59,   59,   59, 0x0a,
     101,   59,   59,   59, 0x0a,
     116,  141,   59,   59, 0x0a,
     147,   59,   59,   59, 0x08,
     163,   59,   59,   59, 0x08,

 // properties: name, type, flags
     188,  197, 0x02095103,
     201,  197, 0x02095103,

       0        // eod
};

static const char qt_meta_stringdata_QvisOpacitySlider[] = {
    "QvisOpacitySlider\0valueChanged(int,const void*)\0"
    "value,data\0\0setValue(int)\0setEnabled(bool)\0"
    "addStep()\0subtractStep()\0"
    "setGradientColor(QColor)\0color\0"
    "repeatTimeout()\0handle_valueChanged(int)\0"
    "pageStep\0int\0tickInterval\0"
};

void QvisOpacitySlider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisOpacitySlider *_t = static_cast<QvisOpacitySlider *>(_o);
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const void*(*)>(_a[2]))); break;
        case 1: _t->setValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->addStep(); break;
        case 4: _t->subtractStep(); break;
        case 5: _t->setGradientColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 6: _t->repeatTimeout(); break;
        case 7: _t->handle_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisOpacitySlider::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisOpacitySlider::staticMetaObject = {
    { &QAbstractSlider::staticMetaObject, qt_meta_stringdata_QvisOpacitySlider,
      qt_meta_data_QvisOpacitySlider, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisOpacitySlider::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisOpacitySlider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisOpacitySlider::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisOpacitySlider))
        return static_cast<void*>(const_cast< QvisOpacitySlider*>(this));
    return QAbstractSlider::qt_metacast(_clname);
}

int QvisOpacitySlider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractSlider::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = pageStep(); break;
        case 1: *reinterpret_cast< int*>(_v) = tickInterval(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setPageStep(*reinterpret_cast< int*>(_v)); break;
        case 1: setTickInterval(*reinterpret_cast< int*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QvisOpacitySlider::valueChanged(int _t1, const void * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
