/****************************************************************************
** Meta object code from reading C++ file 'QvisReflectWidget.h'
**
** Created: Wed Nov 4 16:19:16 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisReflectWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisReflectWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisReflectWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   37,   37,   37, 0x05,
      38,   58,   37,   37, 0x05,

 // slots: signature, parameters, type, tag, flags
      66,   58,   37,   37, 0x0a,
      83,  106,   37,   37, 0x0a,
     113,   37,   37,   37, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QvisReflectWidget[] = {
    "QvisReflectWidget\0octantChanged(int)\0"
    "\0valueChanged(bool*)\0octants\0"
    "setValues(bool*)\0setOriginalOctant(int)\0"
    "octant\0handleTimer()\0"
};

void QvisReflectWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisReflectWidget *_t = static_cast<QvisReflectWidget *>(_o);
        switch (_id) {
        case 0: _t->octantChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->valueChanged((*reinterpret_cast< bool*(*)>(_a[1]))); break;
        case 2: _t->setValues((*reinterpret_cast< bool*(*)>(_a[1]))); break;
        case 3: _t->setOriginalOctant((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->handleTimer(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisReflectWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisReflectWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QvisReflectWidget,
      qt_meta_data_QvisReflectWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisReflectWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisReflectWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisReflectWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisReflectWidget))
        return static_cast<void*>(const_cast< QvisReflectWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QvisReflectWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QvisReflectWidget::octantChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QvisReflectWidget::valueChanged(bool * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
