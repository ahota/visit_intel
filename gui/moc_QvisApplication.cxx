/****************************************************************************
** Meta object code from reading C++ file 'QvisApplication.h'
**
** Created: Wed Nov 4 16:17:56 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisApplication.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisApplication.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisApplication[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   34,   34,   34, 0x05,
      35,   34,   34,   34, 0x05,

 // slots: signature, parameters, type, tag, flags
      53,   34,   34,   34, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisApplication[] = {
    "QvisApplication\0showApplication()\0\0"
    "hideApplication()\0exitTheLoop()\0"
};

void QvisApplication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisApplication *_t = static_cast<QvisApplication *>(_o);
        switch (_id) {
        case 0: _t->showApplication(); break;
        case 1: _t->hideApplication(); break;
        case 2: _t->exitTheLoop(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QvisApplication::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisApplication::staticMetaObject = {
    { &QApplication::staticMetaObject, qt_meta_stringdata_QvisApplication,
      qt_meta_data_QvisApplication, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisApplication::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisApplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisApplication))
        return static_cast<void*>(const_cast< QvisApplication*>(this));
    return QApplication::qt_metacast(_clname);
}

int QvisApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QApplication::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QvisApplication::showApplication()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QvisApplication::hideApplication()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
