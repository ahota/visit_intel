/****************************************************************************
** Meta object code from reading C++ file 'QvisPlotManagerWidget.h'
**
** Created: Wed Nov 4 16:17:57 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisPlotManagerWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisPlotManagerWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisPlotManagerWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      35,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   45,   45,   45, 0x05,
      46,   45,   45,   45, 0x05,
      80,   45,   45,   45, 0x05,
     104,   45,   45,   45, 0x05,
     132,  153,   45,   45, 0x05,
     155,   45,   45,   45, 0x05,

 // slots: signature, parameters, type, tag, flags
     172,   45,   45,   45, 0x0a,
     189,   45,   45,   45, 0x08,
     204,   45,   45,   45, 0x08,
     221,   45,   45,   45, 0x08,
     236,   45,   45,   45, 0x08,
     252,   45,   45,   45, 0x08,
     268,   45,   45,   45, 0x08,
     285,   45,   45,   45, 0x08,
     316,   45,   45,   45, 0x08,
     332,   45,   45,   45, 0x08,
     349,   45,   45,   45, 0x08,
     361,   45,   45,   45, 0x08,
     375,   45,   45,   45, 0x08,
     387,  415,   45,   45, 0x08,
     424,  445,   45,   45, 0x08,
     459,  445,   45,   45, 0x08,
     479,  445,   45,   45, 0x08,
     499,   45,   45,   45, 0x08,
     528,   45,   45,   45, 0x08,
     561,  153,   45,   45, 0x08,
     593,   45,   45,   45, 0x08,
     619,   45,   45,   45, 0x08,
     644,   45,   45,   45, 0x08,
     664,   45,   45,   45, 0x08,
     683,  710,   45,   45, 0x08,
     727,   45,   45,   45, 0x08,
     752,  776,   45,   45, 0x08,
     780,  776,   45,   45, 0x08,
     807,  776,   45,   45, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisPlotManagerWidget[] = {
    "QvisPlotManagerWidget\0activateSubsetWindow()\0"
    "\0activateSelectionsWindow(QString)\0"
    "activatePlotWindow(int)\0"
    "activateOperatorWindow(int)\0"
    "addPlot(int,QString)\0,\0addOperator(int)\0"
    "UpdatePlotList()\0hideThisPlot()\0"
    "deleteThisPlot()\0drawThisPlot()\0"
    "clearThisPlot()\0cloneThisPlot()\0"
    "redrawThisPlot()\0followTimeSliderThisPlot(bool)\0"
    "setActivePlot()\0setActivePlots()\0"
    "hidePlots()\0deletePlots()\0drawPlots()\0"
    "changeVariable(int,QString)\0,varName\0"
    "promoteOperator(int)\0operatorIndex\0"
    "demoteOperator(int)\0removeOperator(int)\0"
    "activatePlotWindow(QAction*)\0"
    "activateOperatorWindow(QAction*)\0"
    "setPlotDescription(int,QString)\0"
    "moveThisPlotTowardFirst()\0"
    "moveThisPlotTowardLast()\0makeThisPlotFirst()\0"
    "makeThisPlotLast()\0addPlotHelper(int,QString)\0"
    "plotType,varName\0operatorAction(QAction*)\0"
    "applyWindowChanged(int)\0val\0"
    "applyOperatorToggled(bool)\0"
    "applySelectionToggled(bool)\0"
};

void QvisPlotManagerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisPlotManagerWidget *_t = static_cast<QvisPlotManagerWidget *>(_o);
        switch (_id) {
        case 0: _t->activateSubsetWindow(); break;
        case 1: _t->activateSelectionsWindow((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->activatePlotWindow((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->activateOperatorWindow((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->addPlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->addOperator((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->UpdatePlotList(); break;
        case 7: _t->hideThisPlot(); break;
        case 8: _t->deleteThisPlot(); break;
        case 9: _t->drawThisPlot(); break;
        case 10: _t->clearThisPlot(); break;
        case 11: _t->cloneThisPlot(); break;
        case 12: _t->redrawThisPlot(); break;
        case 13: _t->followTimeSliderThisPlot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->setActivePlot(); break;
        case 15: _t->setActivePlots(); break;
        case 16: _t->hidePlots(); break;
        case 17: _t->deletePlots(); break;
        case 18: _t->drawPlots(); break;
        case 19: _t->changeVariable((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 20: _t->promoteOperator((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->demoteOperator((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->removeOperator((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->activatePlotWindow((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 24: _t->activateOperatorWindow((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 25: _t->setPlotDescription((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 26: _t->moveThisPlotTowardFirst(); break;
        case 27: _t->moveThisPlotTowardLast(); break;
        case 28: _t->makeThisPlotFirst(); break;
        case 29: _t->makeThisPlotLast(); break;
        case 30: _t->addPlotHelper((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 31: _t->operatorAction((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 32: _t->applyWindowChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 33: _t->applyOperatorToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 34: _t->applySelectionToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisPlotManagerWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisPlotManagerWidget::staticMetaObject = {
    { &QGroupBox::staticMetaObject, qt_meta_stringdata_QvisPlotManagerWidget,
      qt_meta_data_QvisPlotManagerWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisPlotManagerWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisPlotManagerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisPlotManagerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisPlotManagerWidget))
        return static_cast<void*>(const_cast< QvisPlotManagerWidget*>(this));
    if (!strcmp(_clname, "GUIBase"))
        return static_cast< GUIBase*>(const_cast< QvisPlotManagerWidget*>(this));
    if (!strcmp(_clname, "SimpleObserver"))
        return static_cast< SimpleObserver*>(const_cast< QvisPlotManagerWidget*>(this));
    return QGroupBox::qt_metacast(_clname);
}

int QvisPlotManagerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    }
    return _id;
}

// SIGNAL 0
void QvisPlotManagerWidget::activateSubsetWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QvisPlotManagerWidget::activateSelectionsWindow(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QvisPlotManagerWidget::activatePlotWindow(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QvisPlotManagerWidget::activateOperatorWindow(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QvisPlotManagerWidget::addPlot(int _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QvisPlotManagerWidget::addOperator(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
