/****************************************************************************
** Meta object code from reading C++ file 'QvisInverseGhostZoneWindow.h'
**
** Created: Wed Nov 4 16:19:11 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisInverseGhostZoneWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisInverseGhostZoneWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisInverseGhostZoneWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      27,   58,   62,   62, 0x08,
      63,   58,   62,   62, 0x08,
      91,   58,   62,   62, 0x08,
     129,   58,   62,   62, 0x08,
     166,   58,   62,   62, 0x08,
     194,   58,   62,   62, 0x08,
     220,   58,   62,   62, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisInverseGhostZoneWindow[] = {
    "QvisInverseGhostZoneWindow\0"
    "requestGhostZonesChanged(bool)\0val\0\0"
    "showDuplicatedChanged(bool)\0"
    "showEnhancedConnectivityChanged(bool)\0"
    "showReducedConnectivityChanged(bool)\0"
    "showAMRRefinedChanged(bool)\0"
    "showExteriorChanged(bool)\0"
    "showNotApplicableChanged(bool)\0"
};

void QvisInverseGhostZoneWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisInverseGhostZoneWindow *_t = static_cast<QvisInverseGhostZoneWindow *>(_o);
        switch (_id) {
        case 0: _t->requestGhostZonesChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->showDuplicatedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->showEnhancedConnectivityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->showReducedConnectivityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->showAMRRefinedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->showExteriorChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->showNotApplicableChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisInverseGhostZoneWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisInverseGhostZoneWindow::staticMetaObject = {
    { &QvisOperatorWindow::staticMetaObject, qt_meta_stringdata_QvisInverseGhostZoneWindow,
      qt_meta_data_QvisInverseGhostZoneWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisInverseGhostZoneWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisInverseGhostZoneWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisInverseGhostZoneWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisInverseGhostZoneWindow))
        return static_cast<void*>(const_cast< QvisInverseGhostZoneWindow*>(this));
    return QvisOperatorWindow::qt_metacast(_clname);
}

int QvisInverseGhostZoneWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisOperatorWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
