/****************************************************************************
** Meta object code from reading C++ file 'QvisScreenPositioner.h'
**
** Created: Wed Nov 4 16:17:58 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisScreenPositioner.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisScreenPositioner.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisScreenPositioner[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   52,   62,   62, 0x05,
      63,   52,   62,   62, 0x05,
     100,   52,   62,   62, 0x05,
     143,   52,   62,   62, 0x05,

 // slots: signature, parameters, type, tag, flags
     192,   62,   62,   62, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QvisScreenPositioner[] = {
    "QvisScreenPositioner\0"
    "screenPositionChanged(int,int)\0newX,newY\0"
    "\0screenPositionChanged(double,double)\0"
    "intermediateScreenPositionChanged(int,int)\0"
    "intermediateScreenPositionChanged(double,double)\0"
    "popupShow()\0"
};

void QvisScreenPositioner::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisScreenPositioner *_t = static_cast<QvisScreenPositioner *>(_o);
        switch (_id) {
        case 0: _t->screenPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->screenPositionChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 2: _t->intermediateScreenPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->intermediateScreenPositionChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 4: _t->popupShow(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisScreenPositioner::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisScreenPositioner::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QvisScreenPositioner,
      qt_meta_data_QvisScreenPositioner, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisScreenPositioner::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisScreenPositioner::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisScreenPositioner::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisScreenPositioner))
        return static_cast<void*>(const_cast< QvisScreenPositioner*>(this));
    return QWidget::qt_metacast(_clname);
}

int QvisScreenPositioner::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void QvisScreenPositioner::screenPositionChanged(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QvisScreenPositioner::screenPositionChanged(double _t1, double _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QvisScreenPositioner::intermediateScreenPositionChanged(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QvisScreenPositioner::intermediateScreenPositionChanged(double _t1, double _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
