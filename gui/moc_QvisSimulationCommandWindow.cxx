/****************************************************************************
** Meta object code from reading C++ file 'QvisSimulationCommandWindow.h'
**
** Created: Wed Nov 4 16:17:58 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisSimulationCommandWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisSimulationCommandWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisSimulationCommandWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   58,   62,   62, 0x05,
      63,   62,   62,   62, 0x05,
      83,   62,   62,   62, 0x05,
     111,   62,   62,   62, 0x05,
     133,   62,   62,   62, 0x05,
     154,   62,   62,   62, 0x05,

 // slots: signature, parameters, type, tag, flags
     175,   62,   62,   62, 0x0a,
     182,   62,   62,   62, 0x0a,
     191,   62,   62,   62, 0x08,
     215,   62,   62,   62, 0x08,
     229,   62,   62,   62, 0x08,
     242,   62,   62,   62, 0x08,
     255,   62,   62,   62, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisSimulationCommandWindow[] = {
    "QvisSimulationCommandWindow\0"
    "executeButtonCommand(QString)\0cmd\0\0"
    "showCommandWindow()\0timeRangingToggled(QString)\0"
    "executeStart(QString)\0executeStop(QString)\0"
    "executeStep(QString)\0post()\0unpost()\0"
    "handleTimeRanging(bool)\0handleStart()\0"
    "handleStop()\0handleStep()\0"
    "handleCommandButton(int)\0"
};

void QvisSimulationCommandWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisSimulationCommandWindow *_t = static_cast<QvisSimulationCommandWindow *>(_o);
        switch (_id) {
        case 0: _t->executeButtonCommand((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->showCommandWindow(); break;
        case 2: _t->timeRangingToggled((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->executeStart((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->executeStop((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->executeStep((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->post(); break;
        case 7: _t->unpost(); break;
        case 8: _t->handleTimeRanging((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->handleStart(); break;
        case 10: _t->handleStop(); break;
        case 11: _t->handleStep(); break;
        case 12: _t->handleCommandButton((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisSimulationCommandWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisSimulationCommandWindow::staticMetaObject = {
    { &QvisPostableWindow::staticMetaObject, qt_meta_stringdata_QvisSimulationCommandWindow,
      qt_meta_data_QvisSimulationCommandWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisSimulationCommandWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisSimulationCommandWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisSimulationCommandWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisSimulationCommandWindow))
        return static_cast<void*>(const_cast< QvisSimulationCommandWindow*>(this));
    return QvisPostableWindow::qt_metacast(_clname);
}

int QvisSimulationCommandWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisPostableWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void QvisSimulationCommandWindow::executeButtonCommand(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QvisSimulationCommandWindow::showCommandWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QvisSimulationCommandWindow::timeRangingToggled(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QvisSimulationCommandWindow::executeStart(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QvisSimulationCommandWindow::executeStop(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QvisSimulationCommandWindow::executeStep(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
