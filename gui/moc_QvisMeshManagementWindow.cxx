/****************************************************************************
** Meta object code from reading C++ file 'QvisMeshManagementWindow.h'
**
** Created: Wed Nov 4 16:17:57 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisMeshManagementWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisMeshManagementWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisMeshManagementWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   33,   33,   33, 0x0a,
      34,   33,   33,   33, 0x0a,
      48,   33,   33,   33, 0x0a,
      56,   33,   33,   33, 0x08,
      82,   33,   33,   33, 0x08,
     115,   33,   33,   33, 0x08,
     139,   33,   33,   33, 0x08,
     170,   33,   33,   33, 0x08,
     199,   33,   33,   33, 0x08,
     235,   33,   33,   33, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisMeshManagementWindow[] = {
    "QvisMeshManagementWindow\0apply()\0\0"
    "makeDefault()\0reset()\0processSmallestZoneText()\0"
    "processSmallestZoneText(QString)\0"
    "processFlatEnoughText()\0"
    "processFlatEnoughText(QString)\0"
    "renderCSGDirectChanged(bool)\0"
    "discretizeBoundaryOnlyChanged(bool)\0"
    "discretizationModeChanged(int)\0"
};

void QvisMeshManagementWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisMeshManagementWindow *_t = static_cast<QvisMeshManagementWindow *>(_o);
        switch (_id) {
        case 0: _t->apply(); break;
        case 1: _t->makeDefault(); break;
        case 2: _t->reset(); break;
        case 3: _t->processSmallestZoneText(); break;
        case 4: _t->processSmallestZoneText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->processFlatEnoughText(); break;
        case 6: _t->processFlatEnoughText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->renderCSGDirectChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->discretizeBoundaryOnlyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->discretizationModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisMeshManagementWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisMeshManagementWindow::staticMetaObject = {
    { &QvisPostableWindowObserver::staticMetaObject, qt_meta_stringdata_QvisMeshManagementWindow,
      qt_meta_data_QvisMeshManagementWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisMeshManagementWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisMeshManagementWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisMeshManagementWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisMeshManagementWindow))
        return static_cast<void*>(const_cast< QvisMeshManagementWindow*>(this));
    return QvisPostableWindowObserver::qt_metacast(_clname);
}

int QvisMeshManagementWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisPostableWindowObserver::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
