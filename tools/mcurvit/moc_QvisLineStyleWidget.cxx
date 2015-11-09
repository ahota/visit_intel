/****************************************************************************
** Meta object code from reading C++ file 'QvisLineStyleWidget.h'
**
** Created: Wed Nov 4 16:32:39 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisLineStyleWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisLineStyleWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisLineStyleWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   42,   42,   42, 0x05,

 // slots: signature, parameters, type, tag, flags
      43,   60,   42,   42, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QvisLineStyleWidget[] = {
    "QvisLineStyleWidget\0lineStyleChanged(int)\0"
    "\0setEnabled(bool)\0val\0"
};

void QvisLineStyleWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisLineStyleWidget *_t = static_cast<QvisLineStyleWidget *>(_o);
        switch (_id) {
        case 0: _t->lineStyleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisLineStyleWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisLineStyleWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QvisLineStyleWidget,
      qt_meta_data_QvisLineStyleWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisLineStyleWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisLineStyleWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisLineStyleWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisLineStyleWidget))
        return static_cast<void*>(const_cast< QvisLineStyleWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QvisLineStyleWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QvisLineStyleWidget::lineStyleChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
