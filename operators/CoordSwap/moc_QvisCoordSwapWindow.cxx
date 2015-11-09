/****************************************************************************
** Meta object code from reading C++ file 'QvisCoordSwapWindow.h'
**
** Created: Wed Nov 4 16:18:49 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisCoordSwapWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisCoordSwapWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisCoordSwapWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   42,   46,   46, 0x08,
      47,   42,   46,   46, 0x08,
      69,   42,   46,   46, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisCoordSwapWindow[] = {
    "QvisCoordSwapWindow\0newCoord1Changed(int)\0"
    "val\0\0newCoord2Changed(int)\0"
    "newCoord3Changed(int)\0"
};

void QvisCoordSwapWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisCoordSwapWindow *_t = static_cast<QvisCoordSwapWindow *>(_o);
        switch (_id) {
        case 0: _t->newCoord1Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->newCoord2Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->newCoord3Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisCoordSwapWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisCoordSwapWindow::staticMetaObject = {
    { &QvisOperatorWindow::staticMetaObject, qt_meta_stringdata_QvisCoordSwapWindow,
      qt_meta_data_QvisCoordSwapWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisCoordSwapWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisCoordSwapWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisCoordSwapWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisCoordSwapWindow))
        return static_cast<void*>(const_cast< QvisCoordSwapWindow*>(this));
    return QvisOperatorWindow::qt_metacast(_clname);
}

int QvisCoordSwapWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisOperatorWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
