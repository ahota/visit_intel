/****************************************************************************
** Meta object code from reading C++ file 'SimCommandSlots.h'
**
** Created: Wed Nov 4 16:17:58 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "SimCommandSlots.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SimCommandSlots.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SimCommandSlots[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   30,   30,   30, 0x0a,
      31,   30,   30,   30, 0x0a,
      48,   30,   30,   30, 0x0a,
      76,   30,   30,   30, 0x0a,
     101,  128,   30,   30, 0x0a,
     136,  163,   30,   30, 0x0a,
     171,   30,   30,   30, 0x0a,
     193,   30,   30,   30, 0x0a,
     218,  249,   30,   30, 0x0a,
     251,  249,   30,   30, 0x0a,
     280,  320,  333,   30, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SimCommandSlots[] = {
    "SimCommandSlots\0SimCommands()\0\0"
    "ClickedHandler()\0TextChangedHandler(QString)\0"
    "ValueChangedHandler(int)\0"
    "ValueChangedHandler(QTime)\0theTime\0"
    "ValueChangedHandler(QDate)\0theDate\0"
    "ActivatedHandler(int)\0StateChangedHandler(int)\0"
    "CurrentChangedHandler(int,int)\0,\0"
    "ValueChangedHandler(int,int)\0"
    "SendCMD(QString,const QObject*,QString)\0"
    "sig,ui,value\0int\0"
};

void SimCommandSlots::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SimCommandSlots *_t = static_cast<SimCommandSlots *>(_o);
        switch (_id) {
        case 0: _t->SimCommands(); break;
        case 1: _t->ClickedHandler(); break;
        case 2: _t->TextChangedHandler((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->ValueChangedHandler((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->ValueChangedHandler((*reinterpret_cast< const QTime(*)>(_a[1]))); break;
        case 5: _t->ValueChangedHandler((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 6: _t->ActivatedHandler((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->StateChangedHandler((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->CurrentChangedHandler((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->ValueChangedHandler((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: { int _r = _t->SendCMD((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< const QObject*(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SimCommandSlots::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SimCommandSlots::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SimCommandSlots,
      qt_meta_data_SimCommandSlots, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SimCommandSlots::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SimCommandSlots::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SimCommandSlots::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SimCommandSlots))
        return static_cast<void*>(const_cast< SimCommandSlots*>(this));
    return QObject::qt_metacast(_clname);
}

int SimCommandSlots::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
