/****************************************************************************
** Meta object code from reading C++ file 'QvisAppearanceWidget.h'
**
** Created: Wed Nov 4 16:32:39 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisAppearanceWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisAppearanceWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisAppearanceWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   64,   64,   64, 0x05,

 // slots: signature, parameters, type, tag, flags
      65,   87,   64,   64, 0x08,
      93,  120,   64,   64, 0x08,
     126,  157,   64,   64, 0x08,
     165,  198,   64,   64, 0x08,
     210,  234,   64,   64, 0x08,
     248,  270,   64,   64, 0x08,
     276,  270,   64,   64, 0x08,
     298,   64,   64,   64, 0x08,
     328,  361,   64,   64, 0x08,
     365,   64,   64,   64, 0x08,
     395,  361,   64,   64, 0x08,
     423,  361,   64,   64, 0x08,
     447,  361,   64,   64, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisAppearanceWidget[] = {
    "QvisAppearanceWidget\0"
    "multiCurveChanged(const AttributeSubject*)\0"
    "\0colorModeChanged(int)\0index\0"
    "singleColorChanged(QColor)\0color\0"
    "singleColorOpacityChanged(int)\0opacity\0"
    "multipleColorChanged(QColor,int)\0"
    "color,index\0opacityChanged(int,int)\0"
    "opacity,index\0lineStyleChanged(int)\0"
    "style\0lineWidthChanged(int)\0"
    "yAxisTitleFormatProcessText()\0"
    "useYAxisTickSpacingChanged(bool)\0val\0"
    "yAxisTickSpacingProcessText()\0"
    "displayMarkersChanged(bool)\0"
    "displayIdsChanged(bool)\0legendChanged(bool)\0"
};

void QvisAppearanceWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisAppearanceWidget *_t = static_cast<QvisAppearanceWidget *>(_o);
        switch (_id) {
        case 0: _t->multiCurveChanged((*reinterpret_cast< const AttributeSubject*(*)>(_a[1]))); break;
        case 1: _t->colorModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->singleColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 3: _t->singleColorOpacityChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->multipleColorChanged((*reinterpret_cast< const QColor(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->opacityChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->lineStyleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->lineWidthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->yAxisTitleFormatProcessText(); break;
        case 9: _t->useYAxisTickSpacingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->yAxisTickSpacingProcessText(); break;
        case 11: _t->displayMarkersChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->displayIdsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->legendChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisAppearanceWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisAppearanceWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QvisAppearanceWidget,
      qt_meta_data_QvisAppearanceWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisAppearanceWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisAppearanceWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisAppearanceWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisAppearanceWidget))
        return static_cast<void*>(const_cast< QvisAppearanceWidget*>(this));
    if (!strcmp(_clname, "SimpleObserver"))
        return static_cast< SimpleObserver*>(const_cast< QvisAppearanceWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QvisAppearanceWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void QvisAppearanceWidget::multiCurveChanged(const AttributeSubject * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
