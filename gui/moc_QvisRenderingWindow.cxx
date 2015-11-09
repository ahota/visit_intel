/****************************************************************************
** Meta object code from reading C++ file 'QvisRenderingWindow.h'
**
** Created: Wed Nov 4 16:17:58 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisRenderingWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisRenderingWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisRenderingWindow[] = {

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
      20,   28,   28,   28, 0x09,
      29,   28,   28,   28, 0x08,
      55,   28,   28,   28, 0x08,
      88,   28,   28,   28, 0x08,
     129,   28,   28,   28, 0x08,
     177,   28,   28,   28, 0x08,
     210,   28,   28,   28, 0x08,
     238,   28,   28,   28, 0x08,
     258,   28,   28,   28, 0x08,
     281,   28,   28,   28, 0x08,
     307,   28,   28,   28, 0x08,
     341,  374,   28,   28, 0x08,
     378,   28,   28,   28, 0x08,
     419,  374,   28,   28, 0x08,
     459,   28,   28,   28, 0x08,
     491,   28,   28,   28, 0x08,
     513,  554,   28,   28, 0x08,
     556,  554,   28,   28, 0x08,
     594,   28,   28,   28, 0x08,
     614,  554,   28,   28, 0x08,
     653,   28,   28,   28, 0x08,
     678,   28,   28,   28, 0x08,
     707,   28,   28,   28, 0x08,
     733,   28,   28,   28, 0x08,
     757,   28,   28,   28, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisRenderingWindow[] = {
    "QvisRenderingWindow\0apply()\0\0"
    "antialiasingToggled(bool)\0"
    "multiresolutionModeToggled(bool)\0"
    "processMultiresolutionSmallestCellText()\0"
    "processMultiresolutionSmallestCellText(QString)\0"
    "objectRepresentationChanged(int)\0"
    "displayListModeChanged(int)\0"
    "stereoToggled(bool)\0stereoTypeChanged(int)\0"
    "renderNotifyToggled(bool)\0"
    "scalrenActivationModeChanged(int)\0"
    "scalrenAutoThresholdChanged(int)\0val\0"
    "compactDomainsActivationModeChanged(int)\0"
    "compactDomainsAutoThresholdChanged(int)\0"
    "scalrenCompressModeChanged(int)\0"
    "specularToggled(bool)\0"
    "specularStrengthChanged(int,const void*)\0"
    ",\0specularPowerChanged(int,const void*)\0"
    "shadowToggled(bool)\0"
    "shadowStrengthChanged(int,const void*)\0"
    "depthCueingToggled(bool)\0"
    "depthCueingAutoToggled(bool)\0"
    "depthCueingStartChanged()\0"
    "depthCueingEndChanged()\0"
    "colorTexturingToggled(bool)\0"
};

void QvisRenderingWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisRenderingWindow *_t = static_cast<QvisRenderingWindow *>(_o);
        switch (_id) {
        case 0: _t->apply(); break;
        case 1: _t->antialiasingToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->multiresolutionModeToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->processMultiresolutionSmallestCellText(); break;
        case 4: _t->processMultiresolutionSmallestCellText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->objectRepresentationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->displayListModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->stereoToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->stereoTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->renderNotifyToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->scalrenActivationModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->scalrenAutoThresholdChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->compactDomainsActivationModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->compactDomainsAutoThresholdChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->scalrenCompressModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->specularToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->specularStrengthChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const void*(*)>(_a[2]))); break;
        case 17: _t->specularPowerChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const void*(*)>(_a[2]))); break;
        case 18: _t->shadowToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->shadowStrengthChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const void*(*)>(_a[2]))); break;
        case 20: _t->depthCueingToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->depthCueingAutoToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->depthCueingStartChanged(); break;
        case 23: _t->depthCueingEndChanged(); break;
        case 24: _t->colorTexturingToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisRenderingWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisRenderingWindow::staticMetaObject = {
    { &QvisPostableWindowSimpleObserver::staticMetaObject, qt_meta_stringdata_QvisRenderingWindow,
      qt_meta_data_QvisRenderingWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisRenderingWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisRenderingWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisRenderingWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisRenderingWindow))
        return static_cast<void*>(const_cast< QvisRenderingWindow*>(this));
    return QvisPostableWindowSimpleObserver::qt_metacast(_clname);
}

int QvisRenderingWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisPostableWindowSimpleObserver::qt_metacall(_c, _id, _a);
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
