/****************************************************************************
** Meta object code from reading C++ file 'QvisSequenceTransition.h'
**
** Created: Wed Nov 4 16:17:58 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisSequenceTransition.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisSequenceTransition.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisSequenceTransition[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   39,   39,   39, 0x08,
      40,   39,   39,   39, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisSequenceTransition[] = {
    "QvisSequenceTransition\0bg1Clicked(int)\0"
    "\0bg2Clicked(int)\0"
};

void QvisSequenceTransition::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisSequenceTransition *_t = static_cast<QvisSequenceTransition *>(_o);
        switch (_id) {
        case 0: _t->bg1Clicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->bg2Clicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisSequenceTransition::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisSequenceTransition::staticMetaObject = {
    { &QGroupBox::staticMetaObject, qt_meta_stringdata_QvisSequenceTransition,
      qt_meta_data_QvisSequenceTransition, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisSequenceTransition::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisSequenceTransition::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisSequenceTransition::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisSequenceTransition))
        return static_cast<void*>(const_cast< QvisSequenceTransition*>(this));
    return QGroupBox::qt_metacast(_clname);
}

int QvisSequenceTransition::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
