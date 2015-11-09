/****************************************************************************
** Meta object code from reading C++ file 'QvisVectorPlotWindow.h'
**
** Created: Wed Nov 4 16:18:50 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisVectorPlotWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisVectorPlotWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisVectorPlotWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
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
     114,  141,   29,   29, 0x08,
     147,   29,   29,   29, 0x08,
     166,   29,   29,   29, 0x08,
     196,   29,   29,   29, 0x08,
     219,   29,   29,   29, 0x08,
     241,  266,   29,   29, 0x08,
     272,  266,   29,   29, 0x08,
     299,   29,   29,   29, 0x08,
     321,   29,   29,   29, 0x08,
     341,   29,   29,   29, 0x08,
     361,   29,   29,   29, 0x08,
     383,   29,   29,   29, 0x08,
     405,  437,   29,   29, 0x08,
     455,  485,   29,   29, 0x08,
     489,   29,   29,   29, 0x08,
     512,  534,   29,   29, 0x08,
     542,  534,   29,   29, 0x08,
     563,  580,   29,   29, 0x08,
     583,  580,   29,   29, 0x08,
     600,   29,   29,   29, 0x08,
     622,   29,   29,   29, 0x08,
     644,   29,   29,   29, 0x08,
     669,   29,   29,   29, 0x08,
     692,   29,   29,   29, 0x08,
     717,  266,   29,   29, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisVectorPlotWindow[] = {
    "QvisVectorPlotWindow\0apply()\0\0"
    "makeDefault()\0reset()\0lineStyleChanged(int)\0"
    "newStyle\0lineWidthChanged(int)\0newWidth\0"
    "vectorColorChanged(QColor)\0color\0"
    "processScaleText()\0scaleByMagnitudeToggled(bool)\0"
    "autoScaleToggled(bool)\0processHeadSizeText()\0"
    "reduceMethodChanged(int)\0index\0"
    "locationMethodChanged(int)\0"
    "processNVectorsText()\0processStrideText()\0"
    "legendToggled(bool)\0drawHeadToggled(bool)\0"
    "colorModeChanged(int)\0"
    "colorTableClicked(bool,QString)\0"
    "useDefault,ctName\0invertColorTableToggled(bool)\0"
    "val\0originTypeChanged(int)\0"
    "glyphTypeChanged(int)\0newType\0"
    "lineStemChanged(int)\0minToggled(bool)\0"
    "on\0maxToggled(bool)\0processMaxLimitText()\0"
    "processMinLimitText()\0limitsSelectChanged(int)\0"
    "processStemWidthText()\0limitToOrigToggled(bool)\0"
    "geometryQualityChanged(int)\0"
};

void QvisVectorPlotWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisVectorPlotWindow *_t = static_cast<QvisVectorPlotWindow *>(_o);
        switch (_id) {
        case 0: _t->apply(); break;
        case 1: _t->makeDefault(); break;
        case 2: _t->reset(); break;
        case 3: _t->lineStyleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->lineWidthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->vectorColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 6: _t->processScaleText(); break;
        case 7: _t->scaleByMagnitudeToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->autoScaleToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->processHeadSizeText(); break;
        case 10: _t->reduceMethodChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->locationMethodChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->processNVectorsText(); break;
        case 13: _t->processStrideText(); break;
        case 14: _t->legendToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->drawHeadToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->colorModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->colorTableClicked((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 18: _t->invertColorTableToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->originTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->glyphTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->lineStemChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->minToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->maxToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->processMaxLimitText(); break;
        case 25: _t->processMinLimitText(); break;
        case 26: _t->limitsSelectChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->processStemWidthText(); break;
        case 28: _t->limitToOrigToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: _t->geometryQualityChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisVectorPlotWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisVectorPlotWindow::staticMetaObject = {
    { &QvisPostableWindowObserver::staticMetaObject, qt_meta_stringdata_QvisVectorPlotWindow,
      qt_meta_data_QvisVectorPlotWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisVectorPlotWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisVectorPlotWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisVectorPlotWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisVectorPlotWindow))
        return static_cast<void*>(const_cast< QvisVectorPlotWindow*>(this));
    return QvisPostableWindowObserver::qt_metacast(_clname);
}

int QvisVectorPlotWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisPostableWindowObserver::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
