/****************************************************************************
** Meta object code from reading C++ file 'QvisHistogramLimits.h'
**
** Created: Wed Nov 4 16:17:57 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisHistogramLimits.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisHistogramLimits.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisHistogramLimits[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   54,   56,   56, 0x05,
      57,   99,   56,   56, 0x05,
     102,   56,   56,   56, 0x05,

 // slots: signature, parameters, type, tag, flags
     117,   56,   56,   56, 0x08,
     130,   56,   56,   56, 0x08,
     143,   54,   56,   56, 0x08,
     169,   56,   56,   56, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisHistogramLimits[] = {
    "QvisHistogramLimits\0"
    "selectedRangeChanged(float,float)\0,\0"
    "\0selectedRangeChanged(QString,float,float)\0"
    ",,\0closeClicked()\0minChanged()\0"
    "maxChanged()\0rangeChanged(float,float)\0"
    "updateSelectedText()\0"
};

void QvisHistogramLimits::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisHistogramLimits *_t = static_cast<QvisHistogramLimits *>(_o);
        switch (_id) {
        case 0: _t->selectedRangeChanged((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 1: _t->selectedRangeChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 2: _t->closeClicked(); break;
        case 3: _t->minChanged(); break;
        case 4: _t->maxChanged(); break;
        case 5: _t->rangeChanged((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 6: _t->updateSelectedText(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisHistogramLimits::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisHistogramLimits::staticMetaObject = {
    { &QGroupBox::staticMetaObject, qt_meta_stringdata_QvisHistogramLimits,
      qt_meta_data_QvisHistogramLimits, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisHistogramLimits::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisHistogramLimits::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisHistogramLimits::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisHistogramLimits))
        return static_cast<void*>(const_cast< QvisHistogramLimits*>(this));
    return QGroupBox::qt_metacast(_clname);
}

int QvisHistogramLimits::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void QvisHistogramLimits::selectedRangeChanged(float _t1, float _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QvisHistogramLimits::selectedRangeChanged(QString _t1, float _t2, float _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QvisHistogramLimits::closeClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
