/****************************************************************************
** Meta object code from reading C++ file 'QvisAxisAttributesWidget.h'
**
** Created: Wed Nov 4 16:17:56 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisAxisAttributesWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisAxisAttributesWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisAxisAttributesWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   53,   53,   53, 0x05,

 // slots: signature, parameters, type, tag, flags
      54,   53,   53,   53, 0x08,
      62,   53,   53,   53, 0x08,
      81,   53,   53,   53, 0x08,
     106,   53,   53,   53, 0x08,
     131,   53,   53,   53, 0x08,
     164,   53,   53,   53, 0x08,
     183,   53,   53,   53, 0x08,
     208,   53,   53,   53, 0x08,
     241,   53,   53,   53, 0x08,
     259,   53,   53,   53, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisAxisAttributesWidget[] = {
    "QvisAxisAttributesWidget\0"
    "axisChanged(AxisAttributes)\0\0Apply()\0"
    "titleToggled(bool)\0customTitleToggled(bool)\0"
    "customUnitsToggled(bool)\0"
    "titleFontChanged(FontAttributes)\0"
    "labelToggled(bool)\0labelScalingChanged(int)\0"
    "labelFontChanged(FontAttributes)\0"
    "tickToggled(bool)\0gridToggled(bool)\0"
};

void QvisAxisAttributesWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisAxisAttributesWidget *_t = static_cast<QvisAxisAttributesWidget *>(_o);
        switch (_id) {
        case 0: _t->axisChanged((*reinterpret_cast< const AxisAttributes(*)>(_a[1]))); break;
        case 1: _t->Apply(); break;
        case 2: _t->titleToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->customTitleToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->customUnitsToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->titleFontChanged((*reinterpret_cast< const FontAttributes(*)>(_a[1]))); break;
        case 6: _t->labelToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->labelScalingChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->labelFontChanged((*reinterpret_cast< const FontAttributes(*)>(_a[1]))); break;
        case 9: _t->tickToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->gridToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisAxisAttributesWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisAxisAttributesWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QvisAxisAttributesWidget,
      qt_meta_data_QvisAxisAttributesWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisAxisAttributesWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisAxisAttributesWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisAxisAttributesWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisAxisAttributesWidget))
        return static_cast<void*>(const_cast< QvisAxisAttributesWidget*>(this));
    if (!strcmp(_clname, "GUIBase"))
        return static_cast< GUIBase*>(const_cast< QvisAxisAttributesWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QvisAxisAttributesWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void QvisAxisAttributesWidget::axisChanged(const AxisAttributes & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
