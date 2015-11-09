/****************************************************************************
** Meta object code from reading C++ file 'QvisGlobalLineoutWindow.h'
**
** Created: Wed Nov 4 16:17:57 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisGlobalLineoutWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisGlobalLineoutWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisGlobalLineoutWindow[] = {

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
      24,   32,   32,   32, 0x0a,
      33,   32,   32,   32, 0x08,
      54,   32,   32,   32, 0x08,
      80,   32,   32,   32, 0x08,
     106,   32,   32,   32, 0x08,
     128,   32,   32,   32, 0x08,
     152,   32,   32,   32, 0x08,
     176,   32,   32,   32, 0x08,
     209,   32,   32,   32, 0x08,
     234,   32,   32,   32, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisGlobalLineoutWindow[] = {
    "QvisGlobalLineoutWindow\0apply()\0\0"
    "dynamicChanged(bool)\0freezeInTimeChanged(bool)\0"
    "createWindowChanged(bool)\0"
    "windowIdProcessText()\0samplingOnChanged(bool)\0"
    "numSamplesProcessText()\0"
    "createReflineLabelsChanged(bool)\0"
    "curveOptionsChanged(int)\0"
    "colorOptionsChanged(int)\0"
};

void QvisGlobalLineoutWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisGlobalLineoutWindow *_t = static_cast<QvisGlobalLineoutWindow *>(_o);
        switch (_id) {
        case 0: _t->apply(); break;
        case 1: _t->dynamicChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->freezeInTimeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->createWindowChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->windowIdProcessText(); break;
        case 5: _t->samplingOnChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->numSamplesProcessText(); break;
        case 7: _t->createReflineLabelsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->curveOptionsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->colorOptionsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisGlobalLineoutWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisGlobalLineoutWindow::staticMetaObject = {
    { &QvisPostableWindowObserver::staticMetaObject, qt_meta_stringdata_QvisGlobalLineoutWindow,
      qt_meta_data_QvisGlobalLineoutWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisGlobalLineoutWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisGlobalLineoutWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisGlobalLineoutWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisGlobalLineoutWindow))
        return static_cast<void*>(const_cast< QvisGlobalLineoutWindow*>(this));
    return QvisPostableWindowObserver::qt_metacast(_clname);
}

int QvisGlobalLineoutWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
