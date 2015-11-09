/****************************************************************************
** Meta object code from reading C++ file 'QvisBoundaryPlotWindow.h'
**
** Created: Wed Nov 4 16:18:49 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisBoundaryPlotWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisBoundaryPlotWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisBoundaryPlotWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   31,   31,   31, 0x0a,
      32,   31,   31,   31, 0x0a,
      46,   31,   31,   31, 0x0a,
      54,   76,   31,   31, 0x08,
      85,  107,   31,   31, 0x08,
     116,  136,   31,   31, 0x08,
     140,  136,   31,   31, 0x08,
     163,  190,   31,   31, 0x08,
     196,  227,   31,   31, 0x08,
     235,  190,   31,   31, 0x08,
     264,  227,   31,   31, 0x08,
     297,  319,   31,   31, 0x08,
     325,  357,   31,   31, 0x08,
     375,  136,   31,   31, 0x08,
     405,   31,   31,   31, 0x08,
     432,  227,   31,   31, 0x08,
     459,  319,   31,   31, 0x08,
     486,  511,   31,   31, 0x08,
     513,  541,   31,   31, 0x08,
     546,  319,   31,   31, 0x08,
     568,  594,   31,   31, 0x08,
     597,   31,   31,   31, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisBoundaryPlotWindow[] = {
    "QvisBoundaryPlotWindow\0apply()\0\0"
    "makeDefault()\0reset()\0lineStyleChanged(int)\0"
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
};

void QvisBoundaryPlotWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisBoundaryPlotWindow *_t = static_cast<QvisBoundaryPlotWindow *>(_o);
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
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisBoundaryPlotWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisBoundaryPlotWindow::staticMetaObject = {
    { &QvisPostableWindowObserver::staticMetaObject, qt_meta_stringdata_QvisBoundaryPlotWindow,
      qt_meta_data_QvisBoundaryPlotWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisBoundaryPlotWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisBoundaryPlotWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisBoundaryPlotWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisBoundaryPlotWindow))
        return static_cast<void*>(const_cast< QvisBoundaryPlotWindow*>(this));
    return QvisPostableWindowObserver::qt_metacast(_clname);
}

int QvisBoundaryPlotWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisPostableWindowObserver::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
