/****************************************************************************
** Meta object code from reading C++ file 'QvisParallelCoordinatesPlotWindow.h'
**
** Created: Wed Nov 4 16:18:50 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisParallelCoordinatesPlotWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisParallelCoordinatesPlotWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisParallelCoordinatesPlotWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      31,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      34,   42,   42,   42, 0x0a,
      43,   42,   42,   42, 0x0a,
      57,   42,   42,   42, 0x0a,
      65,   88,   42,   42, 0x08,
      92,  118,   42,   42, 0x08,
     124,   42,   42,   42, 0x08,
     156,   88,   42,   42, 0x08,
     193,   42,   42,   42, 0x08,
     228,   88,   42,   42, 0x08,
     253,   42,   42,   42, 0x08,
     279,   88,   42,   42, 0x08,
     310,   42,   42,   42, 0x08,
     339,   42,   42,   42, 0x08,
     373,   88,   42,   42, 0x08,
     412,   42,   42,   42, 0x08,
     449,  118,   42,   42, 0x08,
     477,   42,   42,   42, 0x08,
     508,  525,   42,   42, 0x08,
     535,   42,   42,   42, 0x08,
     545,   42,   42,   42, 0x08,
     558,   42,   42,   42, 0x08,
     573,   42,   42,   42, 0x08,
     592,   42,   42,   42, 0x08,
     624,   42,   42,   42, 0x08,
     654,   42,   42,   42, 0x08,
     678,   88,   42,   42, 0x08,
     707,   42,   42,   42, 0x08,
     734,   42,   42,   42, 0x08,
     758,   88,   42,   42, 0x08,
     785,   88,   42,   42, 0x08,
     812,   42,   42,   42, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisParallelCoordinatesPlotWindow[] = {
    "QvisParallelCoordinatesPlotWindow\0"
    "apply()\0\0makeDefault()\0reset()\0"
    "drawLinesChanged(bool)\0val\0"
    "linesColorChanged(QColor)\0color\0"
    "linesNumPartitionsProcessText()\0"
    "linesNumPartitionsSliderChanged(int)\0"
    "linesNumPartitionsSliderReleased()\0"
    "drawContextChanged(bool)\0"
    "contextGammaProcessText()\0"
    "contextGammaSliderChanged(int)\0"
    "contextGammaSliderReleased()\0"
    "contextNumPartitionsProcessText()\0"
    "contextNumPartitionsSliderChanged(int)\0"
    "contextNumPartitionsSliderReleased()\0"
    "contextColorChanged(QColor)\0"
    "axisSelected(QTreeWidgetItem*)\0"
    "addAxis(QString)\0axisToAdd\0delAxis()\0"
    "moveAxisUp()\0moveAxisDown()\0"
    "resetAxisExtents()\0linesOnlyIfExtentsToggled(bool)\0"
    "unifyAxisExtentsToggled(bool)\0"
    "focusGammaProcessText()\0"
    "focusGammaSliderChanged(int)\0"
    "focusGammaSliderReleased()\0"
    "drawFocusAsChanged(int)\0"
    "axisMinValChanged(QString)\0"
    "axisMaxValChanged(QString)\0"
    "axisMinOrMaxValProcessText()\0"
};

void QvisParallelCoordinatesPlotWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisParallelCoordinatesPlotWindow *_t = static_cast<QvisParallelCoordinatesPlotWindow *>(_o);
        switch (_id) {
        case 0: _t->apply(); break;
        case 1: _t->makeDefault(); break;
        case 2: _t->reset(); break;
        case 3: _t->drawLinesChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->linesColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 5: _t->linesNumPartitionsProcessText(); break;
        case 6: _t->linesNumPartitionsSliderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->linesNumPartitionsSliderReleased(); break;
        case 8: _t->drawContextChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->contextGammaProcessText(); break;
        case 10: _t->contextGammaSliderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->contextGammaSliderReleased(); break;
        case 12: _t->contextNumPartitionsProcessText(); break;
        case 13: _t->contextNumPartitionsSliderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->contextNumPartitionsSliderReleased(); break;
        case 15: _t->contextColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 16: _t->axisSelected((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 17: _t->addAxis((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->delAxis(); break;
        case 19: _t->moveAxisUp(); break;
        case 20: _t->moveAxisDown(); break;
        case 21: _t->resetAxisExtents(); break;
        case 22: _t->linesOnlyIfExtentsToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->unifyAxisExtentsToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->focusGammaProcessText(); break;
        case 25: _t->focusGammaSliderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->focusGammaSliderReleased(); break;
        case 27: _t->drawFocusAsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->axisMinValChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 29: _t->axisMaxValChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 30: _t->axisMinOrMaxValProcessText(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisParallelCoordinatesPlotWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisParallelCoordinatesPlotWindow::staticMetaObject = {
    { &QvisPostableWindowObserver::staticMetaObject, qt_meta_stringdata_QvisParallelCoordinatesPlotWindow,
      qt_meta_data_QvisParallelCoordinatesPlotWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisParallelCoordinatesPlotWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisParallelCoordinatesPlotWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisParallelCoordinatesPlotWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisParallelCoordinatesPlotWindow))
        return static_cast<void*>(const_cast< QvisParallelCoordinatesPlotWindow*>(this));
    return QvisPostableWindowObserver::qt_metacast(_clname);
}

int QvisParallelCoordinatesPlotWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisPostableWindowObserver::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
