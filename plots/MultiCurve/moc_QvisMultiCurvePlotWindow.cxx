/****************************************************************************
** Meta object code from reading C++ file 'QvisMultiCurvePlotWindow.h'
**
** Created: Wed Nov 4 16:18:49 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisMultiCurvePlotWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisMultiCurvePlotWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisMultiCurvePlotWindow[] = {

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
      25,   33,   33,   33, 0x0a,
      34,   33,   33,   33, 0x0a,
      48,   33,   33,   33, 0x0a,
      56,   78,   33,   33, 0x08,
      84,  111,   33,   33, 0x08,
     117,  148,   33,   33, 0x08,
     156,  189,   33,   33, 0x08,
     201,  225,   33,   33, 0x08,
     239,  261,   33,   33, 0x08,
     267,  261,   33,   33, 0x08,
     289,   33,   33,   33, 0x08,
     319,  352,   33,   33, 0x08,
     356,   33,   33,   33, 0x08,
     386,  352,   33,   33, 0x08,
     414,   33,   33,   33, 0x08,
     439,  261,   33,   33, 0x08,
     467,   33,   33,   33, 0x08,
     495,  352,   33,   33, 0x08,
     519,   33,   33,   33, 0x08,
     543,  352,   33,   33, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisMultiCurvePlotWindow[] = {
    "QvisMultiCurvePlotWindow\0apply()\0\0"
    "makeDefault()\0reset()\0colorModeChanged(int)\0"
    "index\0singleColorChanged(QColor)\0color\0"
    "singleColorOpacityChanged(int)\0opacity\0"
    "multipleColorChanged(QColor,int)\0"
    "color,index\0opacityChanged(int,int)\0"
    "opacity,index\0lineStyleChanged(int)\0"
    "style\0lineWidthChanged(int)\0"
    "yAxisTitleFormatProcessText()\0"
    "useYAxisTickSpacingChanged(bool)\0val\0"
    "yAxisTickSpacingProcessText()\0"
    "displayMarkersChanged(bool)\0"
    "markerScaleProcessText()\0"
    "markerLineWidthChanged(int)\0"
    "markerVariableProcessText()\0"
    "displayIdsChanged(bool)\0idVariableProcessText()\0"
    "displayLegendChanged(bool)\0"
};

void QvisMultiCurvePlotWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisMultiCurvePlotWindow *_t = static_cast<QvisMultiCurvePlotWindow *>(_o);
        switch (_id) {
        case 0: _t->apply(); break;
        case 1: _t->makeDefault(); break;
        case 2: _t->reset(); break;
        case 3: _t->colorModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->singleColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 5: _t->singleColorOpacityChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->multipleColorChanged((*reinterpret_cast< const QColor(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->opacityChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->lineStyleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->lineWidthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->yAxisTitleFormatProcessText(); break;
        case 11: _t->useYAxisTickSpacingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->yAxisTickSpacingProcessText(); break;
        case 13: _t->displayMarkersChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->markerScaleProcessText(); break;
        case 15: _t->markerLineWidthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->markerVariableProcessText(); break;
        case 17: _t->displayIdsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->idVariableProcessText(); break;
        case 19: _t->displayLegendChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisMultiCurvePlotWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisMultiCurvePlotWindow::staticMetaObject = {
    { &QvisPostableWindowObserver::staticMetaObject, qt_meta_stringdata_QvisMultiCurvePlotWindow,
      qt_meta_data_QvisMultiCurvePlotWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisMultiCurvePlotWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisMultiCurvePlotWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisMultiCurvePlotWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisMultiCurvePlotWindow))
        return static_cast<void*>(const_cast< QvisMultiCurvePlotWindow*>(this));
    return QvisPostableWindowObserver::qt_metacast(_clname);
}

int QvisMultiCurvePlotWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
