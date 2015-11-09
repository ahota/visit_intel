/****************************************************************************
** Meta object code from reading C++ file 'QvisSubsetPlotWindow.h'
**
** Created: Wed Nov 4 16:18:49 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisSubsetPlotWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisSubsetPlotWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisSubsetPlotWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   29,   29,   29, 0x0a,
      30,   29,   29,   29, 0x0a,
      44,   29,   29,   29, 0x0a,
      52,   74,   29,   29, 0x08,
      83,  105,   29,   29, 0x08,
     114,  134,   29,   29, 0x08,
     138,  134,   29,   29, 0x08,
     161,  188,   29,   29, 0x08,
     194,  225,   29,   29, 0x08,
     233,  188,   29,   29, 0x08,
     262,  225,   29,   29, 0x08,
     295,  317,   29,   29, 0x08,
     323,  355,   29,   29, 0x08,
     373,  134,   29,   29, 0x08,
     403,   29,   29,   29, 0x08,
     428,  225,   29,   29, 0x08,
     455,  317,   29,   29, 0x08,
     482,  507,   29,   29, 0x08,
     509,  537,   29,   29, 0x08,
     542,  317,   29,   29, 0x08,
     564,  590,   29,   29, 0x08,
     593,   29,   29,   29, 0x08,
     622,   29,   29,   29, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisSubsetPlotWindow[] = {
    "QvisSubsetPlotWindow\0apply()\0\0"
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
    "subsetSelectionChanged()\0"
    "overallOpacityChanged(int)\0"
    "smoothingLevelChanged(int)\0"
    "pointSizeChanged(double)\0d\0"
    "pointSizePixelsChanged(int)\0size\0"
    "pointTypeChanged(int)\0pointSizeVarToggled(bool)\0"
    "on\0pointSizeVarChanged(QString)\0"
    "drawInternalToggled(bool)\0"
};

void QvisSubsetPlotWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisSubsetPlotWindow *_t = static_cast<QvisSubsetPlotWindow *>(_o);
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
        case 14: _t->subsetSelectionChanged(); break;
        case 15: _t->overallOpacityChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->smoothingLevelChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->pointSizeChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 18: _t->pointSizePixelsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->pointTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->pointSizeVarToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->pointSizeVarChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 22: _t->drawInternalToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisSubsetPlotWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisSubsetPlotWindow::staticMetaObject = {
    { &QvisPostableWindowObserver::staticMetaObject, qt_meta_stringdata_QvisSubsetPlotWindow,
      qt_meta_data_QvisSubsetPlotWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisSubsetPlotWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisSubsetPlotWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisSubsetPlotWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisSubsetPlotWindow))
        return static_cast<void*>(const_cast< QvisSubsetPlotWindow*>(this));
    return QvisPostableWindowObserver::qt_metacast(_clname);
}

int QvisSubsetPlotWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisPostableWindowObserver::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
