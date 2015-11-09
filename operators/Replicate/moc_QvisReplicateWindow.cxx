/****************************************************************************
** Meta object code from reading C++ file 'QvisReplicateWindow.h'
**
** Created: Wed Nov 4 16:19:16 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisReplicateWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisReplicateWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisReplicateWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   52,   56,   56, 0x08,
      57,   56,   56,   56, 0x08,
      78,   56,   56,   56, 0x08,
      99,   56,   56,   56, 0x08,
     120,   56,   56,   56, 0x08,
     147,   56,   56,   56, 0x08,
     174,   56,   56,   56, 0x08,
     201,   52,   56,   56, 0x08,
     227,   52,   56,   56, 0x08,
     263,   52,   56,   56, 0x08,
     300,   56,   56,   56, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisReplicateWindow[] = {
    "QvisReplicateWindow\0useUnitCellVectorsChanged(bool)\0"
    "val\0\0xVectorProcessText()\0"
    "yVectorProcessText()\0zVectorProcessText()\0"
    "xReplicationsProcessText()\0"
    "yReplicationsProcessText()\0"
    "zReplicationsProcessText()\0"
    "mergeResultsChanged(bool)\0"
    "replicateUnitCellAtomsChanged(bool)\0"
    "shiftPeriodicAtomOriginChanged(bool)\0"
    "newPeriodicOriginProcessText()\0"
};

void QvisReplicateWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisReplicateWindow *_t = static_cast<QvisReplicateWindow *>(_o);
        switch (_id) {
        case 0: _t->useUnitCellVectorsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->xVectorProcessText(); break;
        case 2: _t->yVectorProcessText(); break;
        case 3: _t->zVectorProcessText(); break;
        case 4: _t->xReplicationsProcessText(); break;
        case 5: _t->yReplicationsProcessText(); break;
        case 6: _t->zReplicationsProcessText(); break;
        case 7: _t->mergeResultsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->replicateUnitCellAtomsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->shiftPeriodicAtomOriginChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->newPeriodicOriginProcessText(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisReplicateWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisReplicateWindow::staticMetaObject = {
    { &QvisOperatorWindow::staticMetaObject, qt_meta_stringdata_QvisReplicateWindow,
      qt_meta_data_QvisReplicateWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisReplicateWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisReplicateWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisReplicateWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisReplicateWindow))
        return static_cast<void*>(const_cast< QvisReplicateWindow*>(this));
    return QvisOperatorWindow::qt_metacast(_clname);
}

int QvisReplicateWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisOperatorWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
