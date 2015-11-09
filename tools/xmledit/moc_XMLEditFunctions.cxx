/****************************************************************************
** Meta object code from reading C++ file 'XMLEditFunctions.h'
**
** Created: Wed Nov 4 16:17:26 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "XMLEditFunctions.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'XMLEditFunctions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_XMLEditFunctions[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   40,   40,   40, 0x0a,
      41,   40,   40,   40, 0x0a,
      67,   40,   40,   40, 0x0a,
      92,   40,   40,   40, 0x0a,
     117,   40,   40,   40, 0x0a,
     139,   40,   40,   40, 0x0a,
     158,   40,   40,   40, 0x0a,
     174,   40,   40,   40, 0x0a,
     201,   40,   40,   40, 0x0a,
     233,   40,   40,   40, 0x0a,
     253,   40,   40,   40, 0x0a,
     271,   40,   40,   40, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_XMLEditFunctions[] = {
    "XMLEditFunctions\0UpdateWindowContents()\0"
    "\0UpdateWindowSensitivity()\0"
    "UpdateWindowSingleItem()\0"
    "nameTextChanged(QString)\0typeGroupChanged(int)\0"
    "accessChanged(int)\0memberChanged()\0"
    "targetTextChanged(QString)\0"
    "declarationTextChanged(QString)\0"
    "definitionChanged()\0functionlistNew()\0"
    "functionlistDel()\0"
};

void XMLEditFunctions::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        XMLEditFunctions *_t = static_cast<XMLEditFunctions *>(_o);
        switch (_id) {
        case 0: _t->UpdateWindowContents(); break;
        case 1: _t->UpdateWindowSensitivity(); break;
        case 2: _t->UpdateWindowSingleItem(); break;
        case 3: _t->nameTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->typeGroupChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->accessChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->memberChanged(); break;
        case 7: _t->targetTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->declarationTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->definitionChanged(); break;
        case 10: _t->functionlistNew(); break;
        case 11: _t->functionlistDel(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData XMLEditFunctions::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMLEditFunctions::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_XMLEditFunctions,
      qt_meta_data_XMLEditFunctions, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMLEditFunctions::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMLEditFunctions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMLEditFunctions::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMLEditFunctions))
        return static_cast<void*>(const_cast< XMLEditFunctions*>(this));
    return QFrame::qt_metacast(_clname);
}

int XMLEditFunctions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
