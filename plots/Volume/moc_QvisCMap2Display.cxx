/****************************************************************************
** Meta object code from reading C++ file 'QvisCMap2Display.h'
**
** Created: Wed Nov 4 16:18:50 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisCMap2Display.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisCMap2Display.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisCMap2Display[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   37,   37,   37, 0x05,
      38,   61,   37,   37, 0x05,
      64,   61,   37,   37, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QvisCMap2Display[] = {
    "QvisCMap2Display\0widgetListChanged()\0"
    "\0selectWidget(WidgetID)\0id\0"
    "widgetChanged(WidgetID)\0"
};

void QvisCMap2Display::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisCMap2Display *_t = static_cast<QvisCMap2Display *>(_o);
        switch (_id) {
        case 0: _t->widgetListChanged(); break;
        case 1: _t->selectWidget((*reinterpret_cast< WidgetID(*)>(_a[1]))); break;
        case 2: _t->widgetChanged((*reinterpret_cast< WidgetID(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisCMap2Display::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisCMap2Display::staticMetaObject = {
    { &QGLWidget::staticMetaObject, qt_meta_stringdata_QvisCMap2Display,
      qt_meta_data_QvisCMap2Display, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisCMap2Display::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisCMap2Display::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisCMap2Display::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisCMap2Display))
        return static_cast<void*>(const_cast< QvisCMap2Display*>(this));
    return QGLWidget::qt_metacast(_clname);
}

int QvisCMap2Display::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QvisCMap2Display::widgetListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QvisCMap2Display::selectWidget(WidgetID _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QvisCMap2Display::widgetChanged(WidgetID _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
