/****************************************************************************
** Meta object code from reading C++ file 'QvisSelectionsWindow.h'
**
** Created: Wed Nov 4 16:17:58 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisSelectionsWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisSelectionsWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisSelectionsWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   49,   49,   49, 0x0a,
      50,   49,   49,   49, 0x08,
      77,   49,   49,   49, 0x08,
     104,  136,   49,   49, 0x08,
     140,   49,   49,   49, 0x08,
     165,   49,   49,   49, 0x08,
     180,   49,   49,   49, 0x08,
     198,   49,   49,   49, 0x08,
     214,   49,   49,   49, 0x08,
     230,   49,   49,   49, 0x08,
     248,   49,   49,   49, 0x08,
     262,   49,   49,   49, 0x08,
     291,   49,   49,   49, 0x08,
     312,  350,   49,   49, 0x08,
     353,   49,   49,   49, 0x08,
     377,   49,   49,   49, 0x08,
     402,   49,   49,   49, 0x08,
     419,   49,   49,   49, 0x08,
     436,   49,   49,   49, 0x08,
     456,  482,   49,   49, 0x08,
     488,   49,   49,   49, 0x08,
     510,   49,   49,   49, 0x08,
     544,   49,   49,   49, 0x08,
     573,   49,   49,   49, 0x08,
     600,   49,   49,   49, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisSelectionsWindow[] = {
    "QvisSelectionsWindow\0highlightSelection(QString)\0"
    "\0idVariableTypeChanged(int)\0"
    "idVariableChanged(QString)\0"
    "automaticallyApplyChanged(bool)\0val\0"
    "UpdateWindowSingleItem()\0addSelection()\0"
    "deleteSelection()\0saveSelection()\0"
    "loadSelection()\0updateSelection()\0"
    "updateQuery()\0cumulativeQueryClicked(bool)\0"
    "addVariable(QString)\0"
    "setVariableRange(QString,float,float)\0"
    ",,\0deleteVariable(QString)\0"
    "initializeVariableList()\0processTimeMin()\0"
    "processTimeMax()\0processTimeStride()\0"
    "histogramTypeChanged(int)\0value\0"
    "summationChanged(int)\0"
    "histogramVariableChanged(QString)\0"
    "histogramNumBinsChanged(int)\0"
    "histogramStartChanged(int)\0"
    "histogramEndChanged(int)\0"
};

void QvisSelectionsWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisSelectionsWindow *_t = static_cast<QvisSelectionsWindow *>(_o);
        switch (_id) {
        case 0: _t->highlightSelection((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->idVariableTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->idVariableChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->automaticallyApplyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->UpdateWindowSingleItem(); break;
        case 5: _t->addSelection(); break;
        case 6: _t->deleteSelection(); break;
        case 7: _t->saveSelection(); break;
        case 8: _t->loadSelection(); break;
        case 9: _t->updateSelection(); break;
        case 10: _t->updateQuery(); break;
        case 11: _t->cumulativeQueryClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->addVariable((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->setVariableRange((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 14: _t->deleteVariable((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->initializeVariableList(); break;
        case 16: _t->processTimeMin(); break;
        case 17: _t->processTimeMax(); break;
        case 18: _t->processTimeStride(); break;
        case 19: _t->histogramTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->summationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->histogramVariableChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 22: _t->histogramNumBinsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->histogramStartChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->histogramEndChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisSelectionsWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisSelectionsWindow::staticMetaObject = {
    { &QvisPostableWindowSimpleObserver::staticMetaObject, qt_meta_stringdata_QvisSelectionsWindow,
      qt_meta_data_QvisSelectionsWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisSelectionsWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisSelectionsWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisSelectionsWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisSelectionsWindow))
        return static_cast<void*>(const_cast< QvisSelectionsWindow*>(this));
    return QvisPostableWindowSimpleObserver::qt_metacast(_clname);
}

int QvisSelectionsWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisPostableWindowSimpleObserver::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
