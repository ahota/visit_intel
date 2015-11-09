/****************************************************************************
** Meta object code from reading C++ file 'QvisLabelPlotWindow.h'
**
** Created: Wed Nov 4 16:18:49 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisLabelPlotWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisLabelPlotWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisLabelPlotWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   28,   28,   28, 0x0a,
      29,   28,   28,   28, 0x0a,
      43,   28,   28,   28, 0x0a,
      51,   74,   28,   28, 0x08,
      78,   74,   28,   28, 0x08,
     101,   74,   28,   28, 0x08,
     137,   74,   28,   28, 0x08,
     164,   74,   28,   28, 0x08,
     193,   28,   28,   28, 0x08,
     226,   74,   28,   28, 0x08,
     257,   74,   28,   28, 0x08,
     288,  314,   28,   28, 0x08,
     320,   74,   28,   28, 0x08,
     347,   74,   28,   28, 0x08,
     378,  314,   28,   28, 0x08,
     404,   74,   28,   28, 0x08,
     431,   74,   28,   28, 0x08,
     467,   74,   28,   28, 0x08,
     501,   28,   28,   28, 0x08,
     525,   74,   28,   28, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisLabelPlotWindow[] = {
    "QvisLabelPlotWindow\0apply()\0\0makeDefault()\0"
    "reset()\0showNodesToggled(bool)\0val\0"
    "showCellsToggled(bool)\0"
    "restrictNumberOfLabelsToggled(bool)\0"
    "numberOfLabelsChanged(int)\0"
    "drawLabelsFacingChanged(int)\0"
    "depthTestButtonGroupChanged(int)\0"
    "labelDisplayFormatChanged(int)\0"
    "specifyTextColor1Toggled(bool)\0"
    "textColor1Changed(QColor)\0color\0"
    "textHeight1Changed(double)\0"
    "specifyTextColor2Toggled(bool)\0"
    "textColor2Changed(QColor)\0"
    "textHeight2Changed(double)\0"
    "horizontalJustificationChanged(int)\0"
    "verticalJustificationChanged(int)\0"
    "formatTemplateChanged()\0legendToggled(bool)\0"
};

void QvisLabelPlotWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisLabelPlotWindow *_t = static_cast<QvisLabelPlotWindow *>(_o);
        switch (_id) {
        case 0: _t->apply(); break;
        case 1: _t->makeDefault(); break;
        case 2: _t->reset(); break;
        case 3: _t->showNodesToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->showCellsToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->restrictNumberOfLabelsToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->numberOfLabelsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->drawLabelsFacingChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->depthTestButtonGroupChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->labelDisplayFormatChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->specifyTextColor1Toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->textColor1Changed((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 12: _t->textHeight1Changed((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 13: _t->specifyTextColor2Toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->textColor2Changed((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 15: _t->textHeight2Changed((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 16: _t->horizontalJustificationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->verticalJustificationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->formatTemplateChanged(); break;
        case 19: _t->legendToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisLabelPlotWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisLabelPlotWindow::staticMetaObject = {
    { &QvisPostableWindowObserver::staticMetaObject, qt_meta_stringdata_QvisLabelPlotWindow,
      qt_meta_data_QvisLabelPlotWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisLabelPlotWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisLabelPlotWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisLabelPlotWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisLabelPlotWindow))
        return static_cast<void*>(const_cast< QvisLabelPlotWindow*>(this));
    return QvisPostableWindowObserver::qt_metacast(_clname);
}

int QvisLabelPlotWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisPostableWindowObserver::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
