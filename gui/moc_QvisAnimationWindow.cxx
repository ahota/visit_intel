/****************************************************************************
** Meta object code from reading C++ file 'QvisAnimationWindow.h'
**
** Created: Wed Nov 4 16:17:56 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisAnimationWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisAnimationWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisAnimationWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   28,   28,   28, 0x08,
      29,   58,   28,   28, 0x08,
      62,   58,   28,   28, 0x08,
      87,   28,   28,   28, 0x08,
     107,   28,   28,   28, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisAnimationWindow[] = {
    "QvisAnimationWindow\0apply()\0\0"
    "pipelineCachingToggled(bool)\0val\0"
    "playbackModeChanged(int)\0timeoutChanged(int)\0"
    "incrementChanged(int)\0"
};

void QvisAnimationWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisAnimationWindow *_t = static_cast<QvisAnimationWindow *>(_o);
        switch (_id) {
        case 0: _t->apply(); break;
        case 1: _t->pipelineCachingToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->playbackModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->timeoutChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->incrementChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisAnimationWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisAnimationWindow::staticMetaObject = {
    { &QvisPostableWindowObserver::staticMetaObject, qt_meta_stringdata_QvisAnimationWindow,
      qt_meta_data_QvisAnimationWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisAnimationWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisAnimationWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisAnimationWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisAnimationWindow))
        return static_cast<void*>(const_cast< QvisAnimationWindow*>(this));
    return QvisPostableWindowObserver::qt_metacast(_clname);
}

int QvisAnimationWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisPostableWindowObserver::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
