/****************************************************************************
** Meta object code from reading C++ file 'QvisCMap2Widget.h'
**
** Created: Wed Nov 4 16:18:49 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisCMap2Widget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisCMap2Widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisCMap2Widget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   36,   36,   36, 0x05,
      37,   62,   36,   36, 0x05,
      65,   62,   36,   36, 0x05,

 // slots: signature, parameters, type, tag, flags
      89,   36,   36,   36, 0x08,
     102,   36,   36,   36, 0x08,
     119,   36,   36,   36, 0x08,
     137,   36,   36,   36, 0x08,
     155,   36,   36,   36, 0x08,
     174,   36,   36,   36, 0x08,
     189,   36,   36,   36, 0x08,
     209,   36,   36,   36, 0x08,
     226,   36,   36,   36, 0x08,
     249,   36,   36,   36, 0x08,
     272,  294,   36,   36, 0x08,
     298,   36,   36,   36, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisCMap2Widget[] = {
    "QvisCMap2Widget\0widgetListChanged()\0"
    "\0selectedWidget(WidgetID)\0id\0"
    "widgetChanged(WidgetID)\0updateList()\0"
    "addNewTriangle()\0addNewRectangle()\0"
    "addNewEllipsoid()\0addNewParaboloid()\0"
    "deleteWidget()\0showProperties(int)\0"
    "selectLastItem()\0updateWidget(WidgetID)\0"
    "setWidgetColor(QColor)\0setWidgetOpacity(int)\0"
    "val\0setSizeLoc()\0"
};

void QvisCMap2Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisCMap2Widget *_t = static_cast<QvisCMap2Widget *>(_o);
        switch (_id) {
        case 0: _t->widgetListChanged(); break;
        case 1: _t->selectedWidget((*reinterpret_cast< WidgetID(*)>(_a[1]))); break;
        case 2: _t->widgetChanged((*reinterpret_cast< WidgetID(*)>(_a[1]))); break;
        case 3: _t->updateList(); break;
        case 4: _t->addNewTriangle(); break;
        case 5: _t->addNewRectangle(); break;
        case 6: _t->addNewEllipsoid(); break;
        case 7: _t->addNewParaboloid(); break;
        case 8: _t->deleteWidget(); break;
        case 9: _t->showProperties((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->selectLastItem(); break;
        case 11: _t->updateWidget((*reinterpret_cast< WidgetID(*)>(_a[1]))); break;
        case 12: _t->setWidgetColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 13: _t->setWidgetOpacity((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->setSizeLoc(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisCMap2Widget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisCMap2Widget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QvisCMap2Widget,
      qt_meta_data_QvisCMap2Widget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisCMap2Widget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisCMap2Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisCMap2Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisCMap2Widget))
        return static_cast<void*>(const_cast< QvisCMap2Widget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QvisCMap2Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void QvisCMap2Widget::widgetListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QvisCMap2Widget::selectedWidget(WidgetID _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QvisCMap2Widget::widgetChanged(WidgetID _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
