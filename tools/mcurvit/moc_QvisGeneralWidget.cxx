/****************************************************************************
** Meta object code from reading C++ file 'QvisGeneralWidget.h'
**
** Created: Wed Nov 4 16:32:39 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisGeneralWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisGeneralWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisGeneralWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   47,   47,   47, 0x05,
      48,   47,   47,   47, 0x05,

 // slots: signature, parameters, type, tag, flags
      92,   47,   47,   47, 0x08,
     117,  139,   47,   47, 0x08,
     143,  165,   47,   47, 0x08,
     169,  139,   47,   47, 0x08,
     190,  165,   47,   47, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisGeneralWidget[] = {
    "QvisGeneralWidget\0variableTextChanged(QString)\0"
    "\0indexSelectChanged(const AttributeSubject*)\0"
    "variableChanged(QString)\0domainMinChanged(int)\0"
    "min\0domainMaxChanged(int)\0max\0"
    "rangeMinChanged(int)\0rangeMaxChanged(int)\0"
};

void QvisGeneralWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisGeneralWidget *_t = static_cast<QvisGeneralWidget *>(_o);
        switch (_id) {
        case 0: _t->variableTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->indexSelectChanged((*reinterpret_cast< const AttributeSubject*(*)>(_a[1]))); break;
        case 2: _t->variableChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->domainMinChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->domainMaxChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->rangeMinChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->rangeMaxChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisGeneralWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisGeneralWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QvisGeneralWidget,
      qt_meta_data_QvisGeneralWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisGeneralWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisGeneralWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisGeneralWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisGeneralWidget))
        return static_cast<void*>(const_cast< QvisGeneralWidget*>(this));
    if (!strcmp(_clname, "SimpleObserver"))
        return static_cast< SimpleObserver*>(const_cast< QvisGeneralWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QvisGeneralWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void QvisGeneralWidget::variableTextChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QvisGeneralWidget::indexSelectChanged(const AttributeSubject * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
