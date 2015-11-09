/****************************************************************************
** Meta object code from reading C++ file 'QvisFilledBoundaryPlotWindow.h'
**
** Created: Wed Nov 4 16:18:49 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisFilledBoundaryPlotWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisFilledBoundaryPlotWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisFilledBoundaryPlotWindow[] = {

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
      29,   37,   37,   37, 0x0a,
      38,   37,   37,   37, 0x0a,
      52,   37,   37,   37, 0x0a,
      60,   82,   37,   37, 0x08,
      91,  113,   37,   37, 0x08,
     122,  142,   37,   37, 0x08,
     146,  142,   37,   37, 0x08,
     169,  196,   37,   37, 0x08,
     202,  233,   37,   37, 0x08,
     241,  196,   37,   37, 0x08,
     270,  233,   37,   37, 0x08,
     303,  325,   37,   37, 0x08,
     331,  363,   37,   37, 0x08,
     381,  142,   37,   37, 0x08,
     411,   37,   37,   37, 0x08,
     438,  233,   37,   37, 0x08,
     465,  325,   37,   37, 0x08,
     492,  517,   37,   37, 0x08,
     519,  547,   37,   37, 0x08,
     552,  325,   37,   37, 0x08,
     574,  600,   37,   37, 0x08,
     603,   37,   37,   37, 0x08,
     632,  196,   37,   37, 0x08,
     658,  142,   37,   37, 0x08,
     686,   37,   37,   37, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisFilledBoundaryPlotWindow[] = {
    "QvisFilledBoundaryPlotWindow\0apply()\0"
    "\0makeDefault()\0reset()\0lineStyleChanged(int)\0"
    "newStyle\0lineWidthChanged(int)\0newWidth\0"
    "legendToggled(bool)\0val\0wireframeToggled(bool)\0"
    "singleColorChanged(QColor)\0color\0"
    "singleColorOpacityChanged(int)\0opacity\0"
    "multipleColorChanged(QColor)\0"
    "multipleColorOpacityChanged(int)\0"
    "colorModeChanged(int)\0index\0"
    "colorTableClicked(bool,QString)\0"
    "useDefault,ctName\0invertColorTableToggled(bool)\0"
    "boundarySelectionChanged()\0"
    "overallOpacityChanged(int)\0"
    "smoothingLevelChanged(int)\0"
    "pointSizeChanged(double)\0d\0"
    "pointSizePixelsChanged(int)\0size\0"
    "pointTypeChanged(int)\0pointSizeVarToggled(bool)\0"
    "on\0pointSizeVarChanged(QString)\0"
    "mixedColorChanged(QColor)\0"
    "cleanZonesOnlyToggled(bool)\0"
    "drawInternalToggled(bool)\0"
};

void QvisFilledBoundaryPlotWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisFilledBoundaryPlotWindow *_t = static_cast<QvisFilledBoundaryPlotWindow *>(_o);
        switch (_id) {
        case 0: _t->apply(); break;
        case 1: _t->makeDefault(); break;
        case 2: _t->reset(); break;
        case 3: _t->lineStyleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->lineWidthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->legendToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->wireframeToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->singleColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 8: _t->singleColorOpacityChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->multipleColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 10: _t->multipleColorOpacityChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->colorModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->colorTableClicked((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 13: _t->invertColorTableToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->boundarySelectionChanged(); break;
        case 15: _t->overallOpacityChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->smoothingLevelChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->pointSizeChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 18: _t->pointSizePixelsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->pointTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->pointSizeVarToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->pointSizeVarChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 22: _t->mixedColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 23: _t->cleanZonesOnlyToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->drawInternalToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisFilledBoundaryPlotWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisFilledBoundaryPlotWindow::staticMetaObject = {
    { &QvisPostableWindowObserver::staticMetaObject, qt_meta_stringdata_QvisFilledBoundaryPlotWindow,
      qt_meta_data_QvisFilledBoundaryPlotWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisFilledBoundaryPlotWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisFilledBoundaryPlotWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisFilledBoundaryPlotWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisFilledBoundaryPlotWindow))
        return static_cast<void*>(const_cast< QvisFilledBoundaryPlotWindow*>(this));
    return QvisPostableWindowObserver::qt_metacast(_clname);
}

int QvisFilledBoundaryPlotWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisPostableWindowObserver::qt_metacall(_c, _id, _a);
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
