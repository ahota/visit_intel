/****************************************************************************
** Meta object code from reading C++ file 'QvisHistogram.h'
**
** Created: Wed Nov 4 16:17:57 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisHistogram.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisHistogram.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisHistogram[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   48,   50,   50, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QvisHistogram[] = {
    "QvisHistogram\0selectedRangeChanged(float,float)\0"
    ",\0\0"
};

void QvisHistogram::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisHistogram *_t = static_cast<QvisHistogram *>(_o);
        switch (_id) {
        case 0: _t->selectedRangeChanged((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisHistogram::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisHistogram::staticMetaObject = {
    { &QvisAbstractOpacityBar::staticMetaObject, qt_meta_stringdata_QvisHistogram,
      qt_meta_data_QvisHistogram, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisHistogram::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisHistogram::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisHistogram::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisHistogram))
        return static_cast<void*>(const_cast< QvisHistogram*>(this));
    return QvisAbstractOpacityBar::qt_metacast(_clname);
}

int QvisHistogram::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisAbstractOpacityBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QvisHistogram::selectedRangeChanged(float _t1, float _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
