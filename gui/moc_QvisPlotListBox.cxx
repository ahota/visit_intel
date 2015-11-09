/****************************************************************************
** Meta object code from reading C++ file 'QvisPlotListBox.h'
**
** Created: Wed Nov 4 16:17:57 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisPlotListBox.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisPlotListBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisPlotListBox[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      22,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   39,   39,   39, 0x05,
      40,   39,   39,   39, 0x05,
      63,   39,   39,   39, 0x05,
      97,  121,   39,   39, 0x05,
     130,  158,   39,   39, 0x05,
     171,  192,   39,   39, 0x05,
     206,  192,   39,   39, 0x05,
     226,  192,   39,   39, 0x05,
     246,   39,   39,   39, 0x05,
     261,   39,   39,   39, 0x05,
     278,   39,   39,   39, 0x05,
     293,   39,   39,   39, 0x05,
     309,   39,   39,   39, 0x05,
     325,   39,   39,   39, 0x05,
     345,   39,   39,   39, 0x05,
     362,   39,   39,   39, 0x05,
     393,   39,   39,   39, 0x05,
     409,  433,   39,   39, 0x05,
     438,   39,   39,   39, 0x05,
     458,   39,   39,   39, 0x05,
     484,   39,   39,   39, 0x05,
     509,   39,   39,   39, 0x05,

 // slots: signature, parameters, type, tag, flags
     528,   39,   39,   39, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisPlotListBox[] = {
    "QvisPlotListBox\0itemExpansionChanged()\0"
    "\0activateSubsetWindow()\0"
    "activateSelectionsWindow(QString)\0"
    "activatePlotWindow(int)\0plotType\0"
    "activateOperatorWindow(int)\0operatorType\0"
    "promoteOperator(int)\0operatorIndex\0"
    "demoteOperator(int)\0removeOperator(int)\0"
    "hideThisPlot()\0deleteThisPlot()\0"
    "drawThisPlot()\0clearThisPlot()\0"
    "cloneThisPlot()\0copyToWinThisPlot()\0"
    "redrawThisPlot()\0followTimeSliderThisPlot(bool)\0"
    "setActivePlot()\0renamePlot(int,QString)\0"
    "row,\0makeThisPlotFirst()\0"
    "moveThisPlotTowardFirst()\0"
    "moveThisPlotTowardLast()\0makeThisPlotLast()\0"
    "setPlotDescription()\0"
};

void QvisPlotListBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisPlotListBox *_t = static_cast<QvisPlotListBox *>(_o);
        switch (_id) {
        case 0: _t->itemExpansionChanged(); break;
        case 1: _t->activateSubsetWindow(); break;
        case 2: _t->activateSelectionsWindow((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->activatePlotWindow((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->activateOperatorWindow((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->promoteOperator((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->demoteOperator((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->removeOperator((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->hideThisPlot(); break;
        case 9: _t->deleteThisPlot(); break;
        case 10: _t->drawThisPlot(); break;
        case 11: _t->clearThisPlot(); break;
        case 12: _t->cloneThisPlot(); break;
        case 13: _t->copyToWinThisPlot(); break;
        case 14: _t->redrawThisPlot(); break;
        case 15: _t->followTimeSliderThisPlot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->setActivePlot(); break;
        case 17: _t->renamePlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 18: _t->makeThisPlotFirst(); break;
        case 19: _t->moveThisPlotTowardFirst(); break;
        case 20: _t->moveThisPlotTowardLast(); break;
        case 21: _t->makeThisPlotLast(); break;
        case 22: _t->setPlotDescription(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisPlotListBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisPlotListBox::staticMetaObject = {
    { &QListWidget::staticMetaObject, qt_meta_stringdata_QvisPlotListBox,
      qt_meta_data_QvisPlotListBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisPlotListBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisPlotListBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisPlotListBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisPlotListBox))
        return static_cast<void*>(const_cast< QvisPlotListBox*>(this));
    return QListWidget::qt_metacast(_clname);
}

int QvisPlotListBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void QvisPlotListBox::itemExpansionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QvisPlotListBox::activateSubsetWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QvisPlotListBox::activateSelectionsWindow(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QvisPlotListBox::activatePlotWindow(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QvisPlotListBox::activateOperatorWindow(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QvisPlotListBox::promoteOperator(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QvisPlotListBox::demoteOperator(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QvisPlotListBox::removeOperator(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QvisPlotListBox::hideThisPlot()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}

// SIGNAL 9
void QvisPlotListBox::deleteThisPlot()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}

// SIGNAL 10
void QvisPlotListBox::drawThisPlot()
{
    QMetaObject::activate(this, &staticMetaObject, 10, 0);
}

// SIGNAL 11
void QvisPlotListBox::clearThisPlot()
{
    QMetaObject::activate(this, &staticMetaObject, 11, 0);
}

// SIGNAL 12
void QvisPlotListBox::cloneThisPlot()
{
    QMetaObject::activate(this, &staticMetaObject, 12, 0);
}

// SIGNAL 13
void QvisPlotListBox::copyToWinThisPlot()
{
    QMetaObject::activate(this, &staticMetaObject, 13, 0);
}

// SIGNAL 14
void QvisPlotListBox::redrawThisPlot()
{
    QMetaObject::activate(this, &staticMetaObject, 14, 0);
}

// SIGNAL 15
void QvisPlotListBox::followTimeSliderThisPlot(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void QvisPlotListBox::setActivePlot()
{
    QMetaObject::activate(this, &staticMetaObject, 16, 0);
}

// SIGNAL 17
void QvisPlotListBox::renamePlot(int _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void QvisPlotListBox::makeThisPlotFirst()
{
    QMetaObject::activate(this, &staticMetaObject, 18, 0);
}

// SIGNAL 19
void QvisPlotListBox::moveThisPlotTowardFirst()
{
    QMetaObject::activate(this, &staticMetaObject, 19, 0);
}

// SIGNAL 20
void QvisPlotListBox::moveThisPlotTowardLast()
{
    QMetaObject::activate(this, &staticMetaObject, 20, 0);
}

// SIGNAL 21
void QvisPlotListBox::makeThisPlotLast()
{
    QMetaObject::activate(this, &staticMetaObject, 21, 0);
}
QT_END_MOC_NAMESPACE
