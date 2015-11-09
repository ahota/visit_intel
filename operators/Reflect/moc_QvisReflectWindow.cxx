/****************************************************************************
** Meta object code from reading C++ file 'QvisReflectWindow.h'
**
** Created: Wed Nov 4 16:19:16 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisReflectWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisReflectWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisReflectWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   37,   41,   41, 0x08,
      42,   37,   41,   41, 0x08,
      64,   37,   41,   41, 0x08,
      86,   37,   41,   41, 0x08,
     108,   41,   41,   41, 0x08,
     132,   41,   41,   41, 0x08,
     156,   41,   41,   41, 0x08,
     180,  201,   41,   41, 0x08,
     209,   41,   41,   41, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisReflectWindow[] = {
    "QvisReflectWindow\0octantChanged(int)\0"
    "val\0\0xBoundaryChanged(int)\0"
    "yBoundaryChanged(int)\0zBoundaryChanged(int)\0"
    "specifiedXProcessText()\0specifiedYProcessText()\0"
    "specifiedZProcessText()\0selectOctants(bool*)\0"
    "octants\0selectMode(int)\0"
};

void QvisReflectWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisReflectWindow *_t = static_cast<QvisReflectWindow *>(_o);
        switch (_id) {
        case 0: _t->octantChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->xBoundaryChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->yBoundaryChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->zBoundaryChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->specifiedXProcessText(); break;
        case 5: _t->specifiedYProcessText(); break;
        case 6: _t->specifiedZProcessText(); break;
        case 7: _t->selectOctants((*reinterpret_cast< bool*(*)>(_a[1]))); break;
        case 8: _t->selectMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisReflectWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisReflectWindow::staticMetaObject = {
    { &QvisOperatorWindow::staticMetaObject, qt_meta_stringdata_QvisReflectWindow,
      qt_meta_data_QvisReflectWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisReflectWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisReflectWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisReflectWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisReflectWindow))
        return static_cast<void*>(const_cast< QvisReflectWindow*>(this));
    return QvisOperatorWindow::qt_metacast(_clname);
}

int QvisReflectWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisOperatorWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
