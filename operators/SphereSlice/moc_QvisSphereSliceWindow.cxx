/****************************************************************************
** Meta object code from reading C++ file 'QvisSphereSliceWindow.h'
**
** Created: Wed Nov 4 16:19:20 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisSphereSliceWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisSphereSliceWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisSphereSliceWindow[] = {

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
      22,   42,   42,   42, 0x08,
      43,   42,   42,   42, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisSphereSliceWindow[] = {
    "QvisSphereSliceWindow\0originProcessText()\0"
    "\0radiusProcessText()\0"
};

void QvisSphereSliceWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisSphereSliceWindow *_t = static_cast<QvisSphereSliceWindow *>(_o);
        switch (_id) {
        case 0: _t->originProcessText(); break;
        case 1: _t->radiusProcessText(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QvisSphereSliceWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisSphereSliceWindow::staticMetaObject = {
    { &QvisOperatorWindow::staticMetaObject, qt_meta_stringdata_QvisSphereSliceWindow,
      qt_meta_data_QvisSphereSliceWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisSphereSliceWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisSphereSliceWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisSphereSliceWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisSphereSliceWindow))
        return static_cast<void*>(const_cast< QvisSphereSliceWindow*>(this));
    return QvisOperatorWindow::qt_metacast(_clname);
}

int QvisSphereSliceWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
