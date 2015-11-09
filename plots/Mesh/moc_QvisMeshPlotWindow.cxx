/****************************************************************************
** Meta object code from reading C++ file 'QvisMeshPlotWindow.h'
**
** Created: Wed Nov 4 16:18:49 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisMeshPlotWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisMeshPlotWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisMeshPlotWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   27,   27,   27, 0x0a,
      28,   27,   27,   27, 0x0a,
      42,   27,   27,   27, 0x0a,
      50,   72,   27,   27, 0x08,
      81,  103,   27,   27, 0x08,
     112,  132,   27,   27, 0x08,
     136,  132,   27,   27, 0x08,
     162,  187,   27,   27, 0x08,
     193,  218,   27,   27, 0x08,
     221,  132,   27,   27, 0x08,
     244,   27,   27,   27, 0x08,
     272,  187,   27,   27, 0x08,
     299,  132,   27,   27, 0x08,
     321,  132,   27,   27, 0x08,
     345,  372,   27,   27, 0x08,
     378,  403,   27,   27, 0x08,
     405,   27,   27,   27, 0x08,
     433,  372,   27,   27, 0x08,
     455,   27,   27,   27, 0x08,
     481,   27,   27,   27, 0x08,
     510,  542,   27,   27, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisMeshPlotWindow[] = {
    "QvisMeshPlotWindow\0apply()\0\0makeDefault()\0"
    "reset()\0lineStyleChanged(int)\0newStyle\0"
    "lineWidthChanged(int)\0newWidth\0"
    "legendToggled(bool)\0val\0"
    "showInternalToggled(bool)\0"
    "meshColorChanged(QColor)\0color\0"
    "outlineOnlyToggled(bool)\0on\0"
    "opaqueModeChanged(int)\0"
    "processErrorToleranceText()\0"
    "opaqueColorChanged(QColor)\0"
    "meshColorClicked(int)\0opaqueColorClicked(int)\0"
    "smoothingLevelChanged(int)\0index\0"
    "pointSizeChanged(double)\0d\0"
    "pointSizePixelsChanged(int)\0"
    "pointTypeChanged(int)\0pointSizeVarToggled(bool)\0"
    "pointSizeVarChanged(QString)\0"
    "changedOpacity(int,const void*)\0"
    "opacity,\0"
};

void QvisMeshPlotWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisMeshPlotWindow *_t = static_cast<QvisMeshPlotWindow *>(_o);
        switch (_id) {
        case 0: _t->apply(); break;
        case 1: _t->makeDefault(); break;
        case 2: _t->reset(); break;
        case 3: _t->lineStyleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->lineWidthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->legendToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->showInternalToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->meshColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 8: _t->outlineOnlyToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->opaqueModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->processErrorToleranceText(); break;
        case 11: _t->opaqueColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 12: _t->meshColorClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->opaqueColorClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->smoothingLevelChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->pointSizeChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 16: _t->pointSizePixelsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->pointTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->pointSizeVarToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->pointSizeVarChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 20: _t->changedOpacity((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const void*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisMeshPlotWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisMeshPlotWindow::staticMetaObject = {
    { &QvisPostableWindowObserver::staticMetaObject, qt_meta_stringdata_QvisMeshPlotWindow,
      qt_meta_data_QvisMeshPlotWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisMeshPlotWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisMeshPlotWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisMeshPlotWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisMeshPlotWindow))
        return static_cast<void*>(const_cast< QvisMeshPlotWindow*>(this));
    return QvisPostableWindowObserver::qt_metacast(_clname);
}

int QvisMeshPlotWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisPostableWindowObserver::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
