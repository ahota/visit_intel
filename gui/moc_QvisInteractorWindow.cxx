/****************************************************************************
** Meta object code from reading C++ file 'QvisInteractorWindow.h'
**
** Created: Wed Nov 4 16:17:57 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisInteractorWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisInteractorWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisInteractorWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   29,   29,   29, 0x0a,
      30,   29,   29,   29, 0x0a,
      44,   29,   29,   29, 0x0a,
      52,   80,   29,   29, 0x08,
      84,   80,   29,   29, 0x08,
     109,   80,   29,   29, 0x08,
     141,   80,   29,   29, 0x08,
     168,   80,   29,   29, 0x08,
     196,   80,   29,   29, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisInteractorWindow[] = {
    "QvisInteractorWindow\0apply()\0\0"
    "makeDefault()\0reset()\0showGuidelinesChanged(bool)\0"
    "val\0clampSquareChanged(bool)\0"
    "fillViewportOnZoomChanged(bool)\0"
    "navigationModeChanged(int)\0"
    "boundingBoxModeChanged(int)\0"
    "axisSnapChanged(bool)\0"
};

void QvisInteractorWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisInteractorWindow *_t = static_cast<QvisInteractorWindow *>(_o);
        switch (_id) {
        case 0: _t->apply(); break;
        case 1: _t->makeDefault(); break;
        case 2: _t->reset(); break;
        case 3: _t->showGuidelinesChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->clampSquareChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->fillViewportOnZoomChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->navigationModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->boundingBoxModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->axisSnapChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisInteractorWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisInteractorWindow::staticMetaObject = {
    { &QvisPostableWindowObserver::staticMetaObject, qt_meta_stringdata_QvisInteractorWindow,
      qt_meta_data_QvisInteractorWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisInteractorWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisInteractorWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisInteractorWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisInteractorWindow))
        return static_cast<void*>(const_cast< QvisInteractorWindow*>(this));
    return QvisPostableWindowObserver::qt_metacast(_clname);
}

int QvisInteractorWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisPostableWindowObserver::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
