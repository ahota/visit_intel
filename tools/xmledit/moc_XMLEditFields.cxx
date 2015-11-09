/****************************************************************************
** Meta object code from reading C++ file 'XMLEditFields.h'
**
** Created: Wed Nov 4 16:17:26 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "XMLEditFields.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'XMLEditFields.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_XMLEditFields[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   37,   37,   37, 0x0a,
      38,   37,   37,   37, 0x0a,
      64,   37,   37,   37, 0x0a,
      89,   37,   37,   37, 0x0a,
     106,   37,   37,   37, 0x0a,
     126,   37,   37,   37, 0x0a,
     151,   37,   37,   37, 0x0a,
     177,   37,   37,   37, 0x0a,
     194,   37,   37,   37, 0x0a,
     222,   37,   37,   37, 0x0a,
     242,   37,   37,   37, 0x0a,
     272,   37,   37,   37, 0x0a,
     299,   37,   37,   37, 0x0a,
     317,   37,   37,   37, 0x0a,
     337,   37,   37,   37, 0x0a,
     355,   37,   37,   37, 0x0a,
     369,   37,   37,   37, 0x0a,
     385,   37,   37,   37, 0x0a,
     400,   37,   37,   37, 0x0a,
     415,   37,   37,   37, 0x0a,
     429,   37,   37,   37, 0x0a,
     445,   37,   37,   37, 0x0a,
     470,   37,   37,   37, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_XMLEditFields[] = {
    "XMLEditFields\0UpdateWindowContents()\0"
    "\0UpdateWindowSensitivity()\0"
    "UpdateWindowSingleItem()\0UpdateTypeList()\0"
    "UpdateEnablerList()\0nameTextChanged(QString)\0"
    "labelTextChanged(QString)\0typeChanged(int)\0"
    "subtypeTextChanged(QString)\0"
    "enablerChanged(int)\0enablevalTextChanged(QString)\0"
    "lengthTextChanged(QString)\0internalChanged()\0"
    "persistentChanged()\0ignoreeqChanged()\0"
    "initChanged()\0valuesChanged()\0"
    "fieldlistNew()\0fieldlistDel()\0"
    "fieldlistUp()\0fieldlistDown()\0"
    "variableTypeClicked(int)\0accessChanged(int)\0"
};

void XMLEditFields::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        XMLEditFields *_t = static_cast<XMLEditFields *>(_o);
        switch (_id) {
        case 0: _t->UpdateWindowContents(); break;
        case 1: _t->UpdateWindowSensitivity(); break;
        case 2: _t->UpdateWindowSingleItem(); break;
        case 3: _t->UpdateTypeList(); break;
        case 4: _t->UpdateEnablerList(); break;
        case 5: _t->nameTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->labelTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->typeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->subtypeTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->enablerChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->enablevalTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->lengthTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->internalChanged(); break;
        case 13: _t->persistentChanged(); break;
        case 14: _t->ignoreeqChanged(); break;
        case 15: _t->initChanged(); break;
        case 16: _t->valuesChanged(); break;
        case 17: _t->fieldlistNew(); break;
        case 18: _t->fieldlistDel(); break;
        case 19: _t->fieldlistUp(); break;
        case 20: _t->fieldlistDown(); break;
        case 21: _t->variableTypeClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->accessChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData XMLEditFields::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMLEditFields::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_XMLEditFields,
      qt_meta_data_XMLEditFields, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMLEditFields::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMLEditFields::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMLEditFields::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMLEditFields))
        return static_cast<void*>(const_cast< XMLEditFields*>(this));
    return QFrame::qt_metacast(_clname);
}

int XMLEditFields::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
