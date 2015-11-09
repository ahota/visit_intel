/****************************************************************************
** Meta object code from reading C++ file 'QvisColorManagerWidget.h'
**
** Created: Wed Nov 4 16:32:39 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisColorManagerWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisColorManagerWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisColorManagerWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   48,   60,   60, 0x05,
      61,   85,   60,   60, 0x05,

 // slots: signature, parameters, type, tag, flags
      99,  133,   60,   60, 0x08,
     148,  180,   60,   60, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisColorManagerWidget[] = {
    "QvisColorManagerWidget\0colorChanged(QColor,int)\0"
    "color,index\0\0opacityChanged(int,int)\0"
    "opacity,index\0selectedColor(QColor,const void*)\0"
    "color,userData\0changedOpacity(int,const void*)\0"
    "opacity,userData\0"
};

void QvisColorManagerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisColorManagerWidget *_t = static_cast<QvisColorManagerWidget *>(_o);
        switch (_id) {
        case 0: _t->colorChanged((*reinterpret_cast< const QColor(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->opacityChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->selectedColor((*reinterpret_cast< const QColor(*)>(_a[1])),(*reinterpret_cast< const void*(*)>(_a[2]))); break;
        case 3: _t->changedOpacity((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const void*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisColorManagerWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisColorManagerWidget::staticMetaObject = {
    { &QScrollArea::staticMetaObject, qt_meta_stringdata_QvisColorManagerWidget,
      qt_meta_data_QvisColorManagerWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisColorManagerWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisColorManagerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisColorManagerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisColorManagerWidget))
        return static_cast<void*>(const_cast< QvisColorManagerWidget*>(this));
    return QScrollArea::qt_metacast(_clname);
}

int QvisColorManagerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QvisColorManagerWidget::colorChanged(const QColor & _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QvisColorManagerWidget::opacityChanged(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
