/****************************************************************************
** Meta object code from reading C++ file 'QvisSequenceButton.h'
**
** Created: Wed Nov 4 16:17:58 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisSequenceButton.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisSequenceButton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisSequenceButton[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   34,   34,   34, 0x05,

 // slots: signature, parameters, type, tag, flags
      35,   34,   34,   34, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisSequenceButton[] = {
    "QvisSequenceButton\0activated(int)\0\0"
    "emitActivated(QAction*)\0"
};

void QvisSequenceButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisSequenceButton *_t = static_cast<QvisSequenceButton *>(_o);
        switch (_id) {
        case 0: _t->activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->emitActivated((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisSequenceButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisSequenceButton::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_QvisSequenceButton,
      qt_meta_data_QvisSequenceButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisSequenceButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisSequenceButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisSequenceButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisSequenceButton))
        return static_cast<void*>(const_cast< QvisSequenceButton*>(this));
    return QPushButton::qt_metacast(_clname);
}

int QvisSequenceButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QvisSequenceButton::activated(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
