/****************************************************************************
** Meta object code from reading C++ file 'QvisMaterialWindow.h'
**
** Created: Wed Nov 4 16:17:57 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisMaterialWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisMaterialWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisMaterialWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   27,   27,   27, 0x0a,
      28,   27,   27,   27, 0x0a,
      42,   27,   27,   27, 0x0a,
      50,   73,   27,   27, 0x08,
      77,   73,   27,   27, 0x08,
     112,   73,   27,   27, 0x08,
     134,   73,   27,   27, 0x08,
     162,   73,   27,   27, 0x08,
     184,   73,   27,   27, 0x08,
     223,   27,   27,   27, 0x08,
     251,   27,   27,   27, 0x08,
     282,   27,   27,   27, 0x08,
     309,   27,   27,   27, 0x08,
     339,   73,   27,   27, 0x08,
     368,   27,   27,   27, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisMaterialWindow[] = {
    "QvisMaterialWindow\0apply()\0\0makeDefault()\0"
    "reset()\0smoothingChanged(bool)\0val\0"
    "forceFullConnectivityChanged(bool)\0"
    "forceMIRChanged(bool)\0cleanZonesOnlyChanged(bool)\0"
    "algorithmChanged(int)\0"
    "simplifyHeavilyMixedZonesChanged(bool)\0"
    "maxMatsPerZoneProcessText()\0"
    "isoVolumeFractionProcessText()\0"
    "numIterationsProcessText()\0"
    "iterationDampingProcessText()\0"
    "enableIterationChanged(bool)\0"
    "annealingTimeProcessText()\0"
};

void QvisMaterialWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisMaterialWindow *_t = static_cast<QvisMaterialWindow *>(_o);
        switch (_id) {
        case 0: _t->apply(); break;
        case 1: _t->makeDefault(); break;
        case 2: _t->reset(); break;
        case 3: _t->smoothingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->forceFullConnectivityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->forceMIRChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->cleanZonesOnlyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->algorithmChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->simplifyHeavilyMixedZonesChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->maxMatsPerZoneProcessText(); break;
        case 10: _t->isoVolumeFractionProcessText(); break;
        case 11: _t->numIterationsProcessText(); break;
        case 12: _t->iterationDampingProcessText(); break;
        case 13: _t->enableIterationChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->annealingTimeProcessText(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisMaterialWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisMaterialWindow::staticMetaObject = {
    { &QvisPostableWindowObserver::staticMetaObject, qt_meta_stringdata_QvisMaterialWindow,
      qt_meta_data_QvisMaterialWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisMaterialWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisMaterialWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisMaterialWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisMaterialWindow))
        return static_cast<void*>(const_cast< QvisMaterialWindow*>(this));
    return QvisPostableWindowObserver::qt_metacast(_clname);
}

int QvisMaterialWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisPostableWindowObserver::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
