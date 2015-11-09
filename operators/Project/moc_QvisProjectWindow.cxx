/****************************************************************************
** Meta object code from reading C++ file 'QvisProjectWindow.h'
**
** Created: Wed Nov 4 16:19:16 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisProjectWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisProjectWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisProjectWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   45,   49,   49, 0x08,
      50,   49,   49,   49, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisProjectWindow[] = {
    "QvisProjectWindow\0projectionTypeChanged(int)\0"
    "val\0\0vectorMethodChanged(int)\0"
};

void QvisProjectWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisProjectWindow *_t = static_cast<QvisProjectWindow *>(_o);
        switch (_id) {
        case 0: _t->projectionTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->vectorMethodChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisProjectWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisProjectWindow::staticMetaObject = {
    { &QvisOperatorWindow::staticMetaObject, qt_meta_stringdata_QvisProjectWindow,
      qt_meta_data_QvisProjectWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisProjectWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisProjectWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisProjectWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisProjectWindow))
        return static_cast<void*>(const_cast< QvisProjectWindow*>(this));
    return QvisOperatorWindow::qt_metacast(_clname);
}

int QvisProjectWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisOperatorWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
