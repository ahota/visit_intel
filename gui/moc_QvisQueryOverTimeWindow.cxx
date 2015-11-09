/****************************************************************************
** Meta object code from reading C++ file 'QvisQueryOverTimeWindow.h'
**
** Created: Wed Nov 4 16:17:58 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisQueryOverTimeWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisQueryOverTimeWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisQueryOverTimeWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   32,   32,   32, 0x0a,
      33,   32,   32,   32, 0x0a,
      47,   32,   32,   32, 0x0a,
      55,   76,   32,   32, 0x08,
      80,   76,   32,   32, 0x08,
     106,   32,   32,   32, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisQueryOverTimeWindow[] = {
    "QvisQueryOverTimeWindow\0apply()\0\0"
    "makeDefault()\0reset()\0timeTypeChanged(int)\0"
    "val\0createWindowChanged(bool)\0"
    "windowIdProcessText()\0"
};

void QvisQueryOverTimeWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisQueryOverTimeWindow *_t = static_cast<QvisQueryOverTimeWindow *>(_o);
        switch (_id) {
        case 0: _t->apply(); break;
        case 1: _t->makeDefault(); break;
        case 2: _t->reset(); break;
        case 3: _t->timeTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->createWindowChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->windowIdProcessText(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisQueryOverTimeWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisQueryOverTimeWindow::staticMetaObject = {
    { &QvisPostableWindowObserver::staticMetaObject, qt_meta_stringdata_QvisQueryOverTimeWindow,
      qt_meta_data_QvisQueryOverTimeWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisQueryOverTimeWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisQueryOverTimeWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisQueryOverTimeWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisQueryOverTimeWindow))
        return static_cast<void*>(const_cast< QvisQueryOverTimeWindow*>(this));
    return QvisPostableWindowObserver::qt_metacast(_clname);
}

int QvisQueryOverTimeWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisPostableWindowObserver::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
