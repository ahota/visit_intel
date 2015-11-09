/****************************************************************************
** Meta object code from reading C++ file 'QvisFontAttributesWidget.h'
**
** Created: Wed Nov 4 16:17:57 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisFontAttributesWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisFontAttributesWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisFontAttributesWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
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
      87,   53,   53,   53, 0x08,
     111,   53,   53,   53, 0x08,
     134,   53,   53,   53, 0x08,
     152,   53,   53,   53, 0x08,
     172,   53,   53,   53, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisFontAttributesWidget[] = {
    "QvisFontAttributesWidget\0"
    "fontChanged(FontAttributes)\0\0Apply()\0"
    "textColorChanged(QColor)\0"
    "textOpacityChanged(int)\0fontFamilyChanged(int)\0"
    "boldToggled(bool)\0italicToggled(bool)\0"
    "useForegroundColorToggled(bool)\0"
};

void QvisFontAttributesWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisFontAttributesWidget *_t = static_cast<QvisFontAttributesWidget *>(_o);
        switch (_id) {
        case 0: _t->fontChanged((*reinterpret_cast< const FontAttributes(*)>(_a[1]))); break;
        case 1: _t->Apply(); break;
        case 2: _t->textColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 3: _t->textOpacityChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->fontFamilyChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->boldToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->italicToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->useForegroundColorToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisFontAttributesWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisFontAttributesWidget::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_QvisFontAttributesWidget,
      qt_meta_data_QvisFontAttributesWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisFontAttributesWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisFontAttributesWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisFontAttributesWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisFontAttributesWidget))
        return static_cast<void*>(const_cast< QvisFontAttributesWidget*>(this));
    return QFrame::qt_metacast(_clname);
}

int QvisFontAttributesWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void QvisFontAttributesWidget::fontChanged(const FontAttributes & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
