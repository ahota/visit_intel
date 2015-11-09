/****************************************************************************
** Meta object code from reading C++ file 'QvisPostableWindowSimpleObserver.h'
**
** Created: Wed Nov 4 16:17:57 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisPostableWindowSimpleObserver.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisPostableWindowSimpleObserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisPostableWindowSimpleObserver[] = {

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
      33,   41,   41,   41, 0x0a,
      42,   41,   41,   41, 0x0a,
      56,   41,   41,   41, 0x0a,
      64,   41,   41,   41, 0x0a,
      78,   41,   41,   41, 0x0a,
      92,   41,   41,   41, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QvisPostableWindowSimpleObserver[] = {
    "QvisPostableWindowSimpleObserver\0"
    "apply()\0\0makeDefault()\0reset()\0"
    "loadSubject()\0saveSubject()\0"
    "makeDefaultHelper()\0"
};

void QvisPostableWindowSimpleObserver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisPostableWindowSimpleObserver *_t = static_cast<QvisPostableWindowSimpleObserver *>(_o);
        switch (_id) {
        case 0: _t->apply(); break;
        case 1: _t->makeDefault(); break;
        case 2: _t->reset(); break;
        case 3: _t->loadSubject(); break;
        case 4: _t->saveSubject(); break;
        case 5: _t->makeDefaultHelper(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QvisPostableWindowSimpleObserver::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisPostableWindowSimpleObserver::staticMetaObject = {
    { &QvisPostableWindow::staticMetaObject, qt_meta_stringdata_QvisPostableWindowSimpleObserver,
      qt_meta_data_QvisPostableWindowSimpleObserver, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisPostableWindowSimpleObserver::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisPostableWindowSimpleObserver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisPostableWindowSimpleObserver::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisPostableWindowSimpleObserver))
        return static_cast<void*>(const_cast< QvisPostableWindowSimpleObserver*>(this));
    if (!strcmp(_clname, "SimpleObserver"))
        return static_cast< SimpleObserver*>(const_cast< QvisPostableWindowSimpleObserver*>(this));
    return QvisPostableWindow::qt_metacast(_clname);
}

int QvisPostableWindowSimpleObserver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisPostableWindow::qt_metacall(_c, _id, _a);
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
