/****************************************************************************
** Meta object code from reading C++ file 'QvisHistogramPlotWindow.h'
**
** Created: Wed Nov 4 16:18:49 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisHistogramPlotWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisHistogramPlotWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisHistogramPlotWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   32,   32,   32, 0x0a,
      33,   32,   32,   32, 0x0a,
      47,   32,   32,   32, 0x0a,
      55,   75,   32,   32, 0x08,
      79,   75,   32,   32, 0x08,
     105,   75,   32,   32, 0x08,
     128,  159,   32,   32, 0x08,
     167,   75,   32,   32, 0x08,
     189,   75,   32,   32, 0x08,
     210,   32,   32,   32, 0x08,
     235,  252,   32,   32, 0x08,
     255,  252,   32,   32, 0x08,
     272,   32,   32,   32, 0x08,
     289,   32,   32,   32, 0x08,
     306,   75,   32,   32, 0x08,
     326,   32,   32,   32, 0x08,
     346,   32,   32,   32, 0x08,
     364,   75,   32,   32, 0x08,
     390,   75,   32,   32, 0x08,
     413,  435,   32,   32, 0x08,
     441,  435,   32,   32, 0x08,
     463,  484,   32,   32, 0x08,
     490,   75,   32,   32, 0x08,
     513,   75,   32,   32, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisHistogramPlotWindow[] = {
    "QvisHistogramPlotWindow\0apply()\0\0"
    "makeDefault()\0reset()\0basedOnChanged(int)\0"
    "val\0histogramTypeChanged(int)\0"
    "weightTypeChanged(int)\0"
    "weightVariableChanged(QString)\0varName\0"
    "dataScaleChanged(int)\0binScaleChanged(int)\0"
    "limitsSelectChanged(int)\0minToggled(bool)\0"
    "on\0maxToggled(bool)\0minProcessText()\0"
    "maxProcessText()\0numBinsChanged(int)\0"
    "domainProcessText()\0zoneProcessText()\0"
    "useBinWidthsChanged(bool)\0"
    "outputTypeChanged(int)\0lineStyleChanged(int)\0"
    "style\0lineWidthChanged(int)\0"
    "colorChanged(QColor)\0color\0"
    "normalizeChanged(bool)\0computeCdfChanged(bool)\0"
};

void QvisHistogramPlotWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisHistogramPlotWindow *_t = static_cast<QvisHistogramPlotWindow *>(_o);
        switch (_id) {
        case 0: _t->apply(); break;
        case 1: _t->makeDefault(); break;
        case 2: _t->reset(); break;
        case 3: _t->basedOnChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->histogramTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->weightTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->weightVariableChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->dataScaleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->binScaleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->limitsSelectChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->minToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->maxToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->minProcessText(); break;
        case 13: _t->maxProcessText(); break;
        case 14: _t->numBinsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->domainProcessText(); break;
        case 16: _t->zoneProcessText(); break;
        case 17: _t->useBinWidthsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->outputTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->lineStyleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->lineWidthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->colorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 22: _t->normalizeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->computeCdfChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisHistogramPlotWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisHistogramPlotWindow::staticMetaObject = {
    { &QvisPostableWindowObserver::staticMetaObject, qt_meta_stringdata_QvisHistogramPlotWindow,
      qt_meta_data_QvisHistogramPlotWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisHistogramPlotWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisHistogramPlotWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisHistogramPlotWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisHistogramPlotWindow))
        return static_cast<void*>(const_cast< QvisHistogramPlotWindow*>(this));
    return QvisPostableWindowObserver::qt_metacast(_clname);
}

int QvisHistogramPlotWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisPostableWindowObserver::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
