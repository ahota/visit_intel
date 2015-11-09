/****************************************************************************
** Meta object code from reading C++ file 'QvisCreateBondsWindow.h'
**
** Created: Wed Nov 4 16:18:49 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisCreateBondsWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisCreateBondsWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisCreateBondsWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   47,   47,   47, 0x08,
      48,   80,   47,   47, 0x08,
      88,   47,   47,   47, 0x08,
     103,   47,   47,   47, 0x08,
     118,   47,   47,   47, 0x08,
     132,   47,   47,   47, 0x08,
     148,   47,   47,   47, 0x08,
     176,   47,   47,   47, 0x08,
     204,   47,   47,   47, 0x08,
     227,   47,   47,   47, 0x08,
     250,   47,   47,   47, 0x08,
     274,   47,   47,   47, 0x08,
     299,   47,   47,   47, 0x08,
     325,   47,   47,   47, 0x08,
     355,   47,   47,   47, 0x08,
     387,   47,   47,   47, 0x08,
     410,   47,   47,   47, 0x08,
     433,   47,   47,   47, 0x08,
     456,   47,   47,   47, 0x08,
     477,   47,   47,   47, 0x08,
     498,   47,   47,   47, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisCreateBondsWindow[] = {
    "QvisCreateBondsWindow\0UpdateWindowSingleItem()\0"
    "\0elementVariableChanged(QString)\0"
    "varName\0bondsTreeNew()\0bondsTreeDel()\0"
    "bondsTreeUp()\0bondsTreeDown()\0"
    "minDistTextChanged(QString)\0"
    "maxDistTextChanged(QString)\0"
    "minDistReturnPressed()\0maxDistReturnPressed()\0"
    "maxBondsReturnPressed()\0"
    "firstElementChanged(int)\0"
    "secondElementChanged(int)\0"
    "addPeriodicBondsToggled(bool)\0"
    "useUnitCellVectorsChanged(bool)\0"
    "xPeriodicToggled(bool)\0yPeriodicToggled(bool)\0"
    "zPeriodicToggled(bool)\0xVectorProcessText()\0"
    "yVectorProcessText()\0zVectorProcessText()\0"
};

void QvisCreateBondsWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisCreateBondsWindow *_t = static_cast<QvisCreateBondsWindow *>(_o);
        switch (_id) {
        case 0: _t->UpdateWindowSingleItem(); break;
        case 1: _t->elementVariableChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->bondsTreeNew(); break;
        case 3: _t->bondsTreeDel(); break;
        case 4: _t->bondsTreeUp(); break;
        case 5: _t->bondsTreeDown(); break;
        case 6: _t->minDistTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->maxDistTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->minDistReturnPressed(); break;
        case 9: _t->maxDistReturnPressed(); break;
        case 10: _t->maxBondsReturnPressed(); break;
        case 11: _t->firstElementChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->secondElementChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->addPeriodicBondsToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->useUnitCellVectorsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->xPeriodicToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->yPeriodicToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->zPeriodicToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->xVectorProcessText(); break;
        case 19: _t->yVectorProcessText(); break;
        case 20: _t->zVectorProcessText(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisCreateBondsWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisCreateBondsWindow::staticMetaObject = {
    { &QvisOperatorWindow::staticMetaObject, qt_meta_stringdata_QvisCreateBondsWindow,
      qt_meta_data_QvisCreateBondsWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisCreateBondsWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisCreateBondsWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisCreateBondsWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisCreateBondsWindow))
        return static_cast<void*>(const_cast< QvisCreateBondsWindow*>(this));
    return QvisOperatorWindow::qt_metacast(_clname);
}

int QvisCreateBondsWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisOperatorWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
