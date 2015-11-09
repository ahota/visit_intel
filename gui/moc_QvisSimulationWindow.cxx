/****************************************************************************
** Meta object code from reading C++ file 'QvisSimulationWindow.h'
**
** Created: Wed Nov 4 16:17:58 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisSimulationWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisSimulationWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisSimulationWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   35,   35,   35, 0x08,
      36,   35,   35,   35, 0x08,
      54,   72,   35,   35, 0x08,
      78,   35,   35,   35, 0x08,
      91,   35,   35,   35, 0x08,
     111,  145,   35,   35, 0x08,
     149,  145,   35,   35, 0x08,
     181,  145,   35,   35, 0x08,
     210,  145,   35,   35, 0x08,
     238,  145,   35,   35, 0x08,
     266,   35,   35,   35, 0x08,
     276,   35,   35,   35, 0x08,
     285,   35,   35,   35, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisSimulationWindow[] = {
    "QvisSimulationWindow\0closeEngine()\0\0"
    "interruptEngine()\0selectEngine(int)\0"
    "index\0clearCache()\0showCommandWindow()\0"
    "executePushButtonCommand(QString)\0cmd\0"
    "executeEnableTimeRange(QString)\0"
    "executeStartCommand(QString)\0"
    "executeStopCommand(QString)\0"
    "executeStepCommand(QString)\0zoomOut()\0"
    "zoomIn()\0focus()\0"
};

void QvisSimulationWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisSimulationWindow *_t = static_cast<QvisSimulationWindow *>(_o);
        switch (_id) {
        case 0: _t->closeEngine(); break;
        case 1: _t->interruptEngine(); break;
        case 2: _t->selectEngine((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->clearCache(); break;
        case 4: _t->showCommandWindow(); break;
        case 5: _t->executePushButtonCommand((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->executeEnableTimeRange((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->executeStartCommand((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->executeStopCommand((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->executeStepCommand((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->zoomOut(); break;
        case 11: _t->zoomIn(); break;
        case 12: _t->focus(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisSimulationWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisSimulationWindow::staticMetaObject = {
    { &QvisPostableWindowObserver::staticMetaObject, qt_meta_stringdata_QvisSimulationWindow,
      qt_meta_data_QvisSimulationWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisSimulationWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisSimulationWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisSimulationWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisSimulationWindow))
        return static_cast<void*>(const_cast< QvisSimulationWindow*>(this));
    return QvisPostableWindowObserver::qt_metacast(_clname);
}

int QvisSimulationWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisPostableWindowObserver::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
