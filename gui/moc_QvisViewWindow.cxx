/****************************************************************************
** Meta object code from reading C++ file 'QvisViewWindow.h'
**
** Created: Wed Nov 4 16:17:58 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisViewWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisViewWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisViewWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      43,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   23,   23,   23, 0x0a,
      24,   23,   23,   23, 0x0a,
      31,   23,   23,   23, 0x08,
      52,   23,   23,   23, 0x08,
      83,   23,   23,   23, 0x08,
     112,   23,   23,   23, 0x08,
     140,   23,   23,   23, 0x08,
     167,   23,   23,   23, 0x08,
     187,   23,   23,   23, 0x08,
     206,   23,   23,   23, 0x08,
     234,   23,   23,   23, 0x08,
     261,   23,   23,   23, 0x08,
     283,   23,   23,   23, 0x08,
     303,   23,   23,   23, 0x08,
     339,   23,   23,   23, 0x08,
     362,   23,   23,   23, 0x08,
     385,   23,   23,   23, 0x08,
     405,   23,   23,   23, 0x08,
     424,   23,   23,   23, 0x08,
     446,   23,   23,   23, 0x08,
     469,   23,   23,   23, 0x08,
     496,   23,   23,   23, 0x08,
     514,   23,   23,   23, 0x08,
     531,   23,   23,   23, 0x08,
     553,   23,   23,   23, 0x08,
     576,  601,   23,   23, 0x08,
     605,  628,   23,   23, 0x08,
     634,  601,   23,   23, 0x08,
     663,   23,   23,   23, 0x08,
     689,   23,   23,   23, 0x08,
     708,   23,   23,   23, 0x08,
     730,  601,   23,   23, 0x08,
     757,   23,   23,   23, 0x08,
     789,   23,   23,   23, 0x08,
     808,   23,   23,   23, 0x08,
     828,   23,   23,   23, 0x08,
     848,   23,   23,   23, 0x08,
     872,   23,   23,   23, 0x08,
     898,   23,   23,   23, 0x08,
     921,   23,   23,   23, 0x08,
     933,   23,   23,   23, 0x08,
     948,   23,   23,   23, 0x08,
     959,   23,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisViewWindow[] = {
    "QvisViewWindow\0apply()\0\0show()\0"
    "processCommandText()\0"
    "processViewportAxisArrayText()\0"
    "processDomainAxisArrayText()\0"
    "processRangeAxisArrayText()\0"
    "processViewportCurveText()\0"
    "processDomainText()\0processRangeText()\0"
    "domainScaleModeChanged(int)\0"
    "rangeScaleModeChanged(int)\0"
    "processViewportText()\0processWindowText()\0"
    "fullFrameActivationModeChanged(int)\0"
    "xScaleModeChanged(int)\0yScaleModeChanged(int)\0"
    "processNormalText()\0processFocusText()\0"
    "processUpVectorText()\0processViewAngleText()\0"
    "processParallelScaleText()\0processNearText()\0"
    "processFarText()\0processImagePanText()\0"
    "processImageZoomText()\0perspectiveToggled(bool)\0"
    "val\0viewButtonClicked(int)\0index\0"
    "axis3DScaleFlagToggled(bool)\0"
    "processAxis3DScalesText()\0processShearText()\0"
    "processEyeAngleText()\0eyeAngleSliderChanged(int)\0"
    "copyViewFromCameraChecked(bool)\0"
    "makeViewKeyframe()\0centerChecked(bool)\0"
    "processCenterText()\0lockedViewChecked(bool)\0"
    "maintainViewChecked(bool)\0"
    "extentTypeChanged(int)\0resetView()\0"
    "recenterView()\0undoView()\0tabSelected(int)\0"
};

void QvisViewWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisViewWindow *_t = static_cast<QvisViewWindow *>(_o);
        switch (_id) {
        case 0: _t->apply(); break;
        case 1: _t->show(); break;
        case 2: _t->processCommandText(); break;
        case 3: _t->processViewportAxisArrayText(); break;
        case 4: _t->processDomainAxisArrayText(); break;
        case 5: _t->processRangeAxisArrayText(); break;
        case 6: _t->processViewportCurveText(); break;
        case 7: _t->processDomainText(); break;
        case 8: _t->processRangeText(); break;
        case 9: _t->domainScaleModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->rangeScaleModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->processViewportText(); break;
        case 12: _t->processWindowText(); break;
        case 13: _t->fullFrameActivationModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->xScaleModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->yScaleModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->processNormalText(); break;
        case 17: _t->processFocusText(); break;
        case 18: _t->processUpVectorText(); break;
        case 19: _t->processViewAngleText(); break;
        case 20: _t->processParallelScaleText(); break;
        case 21: _t->processNearText(); break;
        case 22: _t->processFarText(); break;
        case 23: _t->processImagePanText(); break;
        case 24: _t->processImageZoomText(); break;
        case 25: _t->perspectiveToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->viewButtonClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->axis3DScaleFlagToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->processAxis3DScalesText(); break;
        case 29: _t->processShearText(); break;
        case 30: _t->processEyeAngleText(); break;
        case 31: _t->eyeAngleSliderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->copyViewFromCameraChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 33: _t->makeViewKeyframe(); break;
        case 34: _t->centerChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 35: _t->processCenterText(); break;
        case 36: _t->lockedViewChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 37: _t->maintainViewChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 38: _t->extentTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 39: _t->resetView(); break;
        case 40: _t->recenterView(); break;
        case 41: _t->undoView(); break;
        case 42: _t->tabSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisViewWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisViewWindow::staticMetaObject = {
    { &QvisPostableWindowSimpleObserver::staticMetaObject, qt_meta_stringdata_QvisViewWindow,
      qt_meta_data_QvisViewWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisViewWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisViewWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisViewWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisViewWindow))
        return static_cast<void*>(const_cast< QvisViewWindow*>(this));
    return QvisPostableWindowSimpleObserver::qt_metacast(_clname);
}

int QvisViewWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisPostableWindowSimpleObserver::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 43)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 43;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
