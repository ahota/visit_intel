/****************************************************************************
** Meta object code from reading C++ file 'QvisCurvePlotWindow.h'
**
** Created: Wed Nov 4 16:18:49 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisCurvePlotWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisCurvePlotWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisCurvePlotWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      32,   14, // methods
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
      78,  100,   28,   28, 0x08,
     106,  100,   28,   28, 0x08,
     128,   74,   28,   28, 0x08,
     148,   74,   28,   28, 0x08,
     168,   74,   28,   28, 0x08,
     192,   28,   28,   28, 0x08,
     215,   28,   28,   28, 0x08,
     239,   74,   28,   28, 0x08,
     262,  288,   28,   28, 0x08,
     294,   28,   28,   28, 0x08,
     315,  288,   28,   28, 0x08,
     341,  383,   28,   28, 0x08,
     392,  288,   28,   28, 0x08,
     418,  383,   28,   28, 0x08,
     460,   28,   28,   28, 0x08,
     483,   28,   28,   28, 0x08,
     509,   28,   28,   28, 0x08,
     536,   74,   28,   28, 0x08,
     563,  288,   28,   28, 0x08,
     595,   28,   28,   28, 0x08,
     624,   74,   28,   28, 0x08,
     651,  288,   28,   28, 0x08,
     683,   28,   28,   28, 0x08,
     712,   74,   28,   28, 0x08,
     739,   28,   28,   28, 0x08,
     767,   74,   28,   28, 0x08,
     786,   28,   28,   28, 0x08,
     809,   28,   28,   28, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisCurvePlotWindow[] = {
    "QvisCurvePlotWindow\0apply()\0\0makeDefault()\0"
    "reset()\0showLinesChanged(bool)\0val\0"
    "lineStyleChanged(int)\0style\0"
    "lineWidthChanged(int)\0labelsToggled(bool)\0"
    "legendToggled(bool)\0showPointsChanged(bool)\0"
    "processPointSizeText()\0pointStrideChanged(int)\0"
    "curveColorClicked(int)\0curveColorChanged(QColor)\0"
    "color\0fillModeChanged(int)\0"
    "fillColor1Changed(QColor)\0"
    "fillColor1OpacityChanged(int,const void*)\0"
    "opacity,\0fillColor2Changed(QColor)\0"
    "fillColor2OpacityChanged(int,const void*)\0"
    "symbolTypeChanged(int)\0symbolDensityChanged(int)\0"
    "symbolFillModeChanged(int)\0"
    "doBallTimeCueChanged(bool)\0"
    "ballTimeCueColorChanged(QColor)\0"
    "timeCueBallSizeProcessText()\0"
    "doLineTimeCueChanged(bool)\0"
    "lineTimeCueColorChanged(QColor)\0"
    "lineTimeCueWidthChanged(int)\0"
    "doCropTimeCueChanged(bool)\0"
    "timeForTimeCueProcessText()\0"
    "polarToggled(bool)\0polarOrderChanged(int)\0"
    "angleUnitsChanged(int)\0"
};

void QvisCurvePlotWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisCurvePlotWindow *_t = static_cast<QvisCurvePlotWindow *>(_o);
        switch (_id) {
        case 0: _t->apply(); break;
        case 1: _t->makeDefault(); break;
        case 2: _t->reset(); break;
        case 3: _t->showLinesChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->lineStyleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->lineWidthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->labelsToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->legendToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->showPointsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->processPointSizeText(); break;
        case 10: _t->pointStrideChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->curveColorClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->curveColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 13: _t->fillModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->fillColor1Changed((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 15: _t->fillColor1OpacityChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const void*(*)>(_a[2]))); break;
        case 16: _t->fillColor2Changed((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 17: _t->fillColor2OpacityChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const void*(*)>(_a[2]))); break;
        case 18: _t->symbolTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->symbolDensityChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->symbolFillModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->doBallTimeCueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->ballTimeCueColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 23: _t->timeCueBallSizeProcessText(); break;
        case 24: _t->doLineTimeCueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->lineTimeCueColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 26: _t->lineTimeCueWidthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->doCropTimeCueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->timeForTimeCueProcessText(); break;
        case 29: _t->polarToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: _t->polarOrderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: _t->angleUnitsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisCurvePlotWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisCurvePlotWindow::staticMetaObject = {
    { &QvisPostableWindowObserver::staticMetaObject, qt_meta_stringdata_QvisCurvePlotWindow,
      qt_meta_data_QvisCurvePlotWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisCurvePlotWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisCurvePlotWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisCurvePlotWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisCurvePlotWindow))
        return static_cast<void*>(const_cast< QvisCurvePlotWindow*>(this));
    return QvisPostableWindowObserver::qt_metacast(_clname);
}

int QvisCurvePlotWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisPostableWindowObserver::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
