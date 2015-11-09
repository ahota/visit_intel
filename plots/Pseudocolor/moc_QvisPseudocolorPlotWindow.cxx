/****************************************************************************
** Meta object code from reading C++ file 'QvisPseudocolorPlotWindow.h'
**
** Created: Wed Nov 4 16:18:49 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisPseudocolorPlotWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisPseudocolorPlotWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisPseudocolorPlotWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      45,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      26,   34,   34,   34, 0x0a,
      35,   34,   34,   34, 0x0a,
      49,   34,   34,   34, 0x0a,
      57,   75,   34,   34, 0x08,
      81,   34,   34,   34, 0x08,
      99,   34,   34,   34, 0x08,
     124,  141,   34,   34, 0x08,
     144,  141,   34,   34, 0x08,
     161,   34,   34,   34, 0x08,
     183,   34,   34,   34, 0x08,
     205,  227,   34,   34, 0x08,
     234,  266,   34,   34, 0x08,
     284,  314,   34,   34, 0x08,
     318,  314,   34,   34, 0x08,
     342,  374,   34,   34, 0x08,
     378,  410,   34,   34, 0x08,
     419,   34,   34,   34, 0x08,
     443,   34,   34,   34, 0x08,
     467,   34,   34,   34, 0x08,
     490,   34,   34,   34, 0x08,
     513,  535,   34,   34, 0x08,
     541,  566,   34,   34, 0x08,
     568,  596,   34,   34, 0x08,
     601,  141,   34,   34, 0x08,
     627,   34,   34,   34, 0x08,
     656,  677,   34,   34, 0x08,
     685,  707,   34,   34, 0x08,
     716,  738,   34,   34, 0x08,
     747,  314,   34,   34, 0x08,
     778,  809,   34,   34, 0x08,
     811,   34,   34,   34, 0x08,
     835,  314,   34,   34, 0x08,
     863,  374,   34,   34, 0x08,
     902,   34,   34,   34, 0x08,
     936,  677,   34,   34, 0x08,
     961,  707,   34,   34, 0x08,
     987,  809,   34,   34, 0x08,
    1022,   34,   34,   34, 0x08,
    1050,   34,   34,   34, 0x08,
    1077,  535,   34,   34, 0x08,
    1104,   34,   34,   34, 0x08,
    1132,   34,   34,   34, 0x08,
    1161,   34,   34,   34, 0x08,
    1187,  141,   34,   34, 0x08,
    1207,  141,   34,   34, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisPseudocolorPlotWindow[] = {
    "QvisPseudocolorPlotWindow\0apply()\0\0"
    "makeDefault()\0reset()\0scaleClicked(int)\0"
    "scale\0processSkewText()\0"
    "limitsSelectChanged(int)\0minToggled(bool)\0"
    "on\0maxToggled(bool)\0processMaxLimitText()\0"
    "processMinLimitText()\0centeringClicked(int)\0"
    "button\0colorTableClicked(bool,QString)\0"
    "useDefault,ctName\0invertColorTableToggled(bool)\0"
    "val\0opacityTypeChanged(int)\0"
    "opacityVariableChanged(QString)\0var\0"
    "opacityChanged(int,const void*)\0"
    "opacity,\0opacityMinToggled(bool)\0"
    "opacityMaxToggled(bool)\0processOpacityVarMin()\0"
    "processOpacityVarMax()\0pointTypeChanged(int)\0"
    "index\0pointSizeChanged(double)\0d\0"
    "pointSizePixelsChanged(int)\0size\0"
    "pointSizeVarToggled(bool)\0"
    "pointSizeVarChanged(QString)\0"
    "lineTypeChanged(int)\0newType\0"
    "lineStyleChanged(int)\0newStyle\0"
    "lineWidthChanged(int)\0newWidth\0"
    "tubeDisplayDensityChanged(int)\0"
    "tubeRadiusSizeTypeChanged(int)\0v\0"
    "tubeRadiusProcessText()\0"
    "tubeRadiusVaryChanged(bool)\0"
    "tubeRadiusVaryVariableChanged(QString)\0"
    "tubeRadiusVaryFactorProcessText()\0"
    "endPointTypeChanged(int)\0"
    "endPointStyleChanged(int)\0"
    "endPointRadiusSizeTypeChanged(int)\0"
    "endPointRadiusProcessText()\0"
    "endPointRatioProcessText()\0"
    "smoothingLevelChanged(int)\0"
    "renderSurfacesChanged(bool)\0"
    "renderWireframeChanged(bool)\0"
    "renderPointsChanged(bool)\0legendToggled(bool)\0"
    "lightingToggled(bool)\0"
};

void QvisPseudocolorPlotWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisPseudocolorPlotWindow *_t = static_cast<QvisPseudocolorPlotWindow *>(_o);
        switch (_id) {
        case 0: _t->apply(); break;
        case 1: _t->makeDefault(); break;
        case 2: _t->reset(); break;
        case 3: _t->scaleClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->processSkewText(); break;
        case 5: _t->limitsSelectChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->minToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->maxToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->processMaxLimitText(); break;
        case 9: _t->processMinLimitText(); break;
        case 10: _t->centeringClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->colorTableClicked((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 12: _t->invertColorTableToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->opacityTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->opacityVariableChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->opacityChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const void*(*)>(_a[2]))); break;
        case 16: _t->opacityMinToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->opacityMaxToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->processOpacityVarMin(); break;
        case 19: _t->processOpacityVarMax(); break;
        case 20: _t->pointTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->pointSizeChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 22: _t->pointSizePixelsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->pointSizeVarToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->pointSizeVarChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 25: _t->lineTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->lineStyleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->lineWidthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->tubeDisplayDensityChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->tubeRadiusSizeTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->tubeRadiusProcessText(); break;
        case 31: _t->tubeRadiusVaryChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 32: _t->tubeRadiusVaryVariableChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 33: _t->tubeRadiusVaryFactorProcessText(); break;
        case 34: _t->endPointTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 35: _t->endPointStyleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 36: _t->endPointRadiusSizeTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 37: _t->endPointRadiusProcessText(); break;
        case 38: _t->endPointRatioProcessText(); break;
        case 39: _t->smoothingLevelChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 40: _t->renderSurfacesChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 41: _t->renderWireframeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 42: _t->renderPointsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 43: _t->legendToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 44: _t->lightingToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisPseudocolorPlotWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisPseudocolorPlotWindow::staticMetaObject = {
    { &QvisPostableWindowObserver::staticMetaObject, qt_meta_stringdata_QvisPseudocolorPlotWindow,
      qt_meta_data_QvisPseudocolorPlotWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisPseudocolorPlotWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisPseudocolorPlotWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisPseudocolorPlotWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisPseudocolorPlotWindow))
        return static_cast<void*>(const_cast< QvisPseudocolorPlotWindow*>(this));
    return QvisPostableWindowObserver::qt_metacast(_clname);
}

int QvisPseudocolorPlotWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisPostableWindowObserver::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 45)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 45;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
