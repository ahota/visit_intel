/****************************************************************************
** Meta object code from reading C++ file 'XMLEditEnums.h'
**
** Created: Wed Nov 4 16:17:26 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "XMLEditEnums.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'XMLEditEnums.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_XMLEditEnums[] = {

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
      13,   32,   32,   32, 0x0a,
      33,   32,   32,   32, 0x0a,
      48,   32,   32,   32, 0x0a,
      71,   32,   32,   32, 0x0a,
      97,   32,   32,   32, 0x0a,
     122,   32,   32,   32, 0x0a,
     147,   32,   32,   32, 0x0a,
     166,   32,   32,   32, 0x0a,
     180,   32,   32,   32, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_XMLEditEnums[] = {
    "XMLEditEnums\0removeEmptyLines()\0\0"
    "addEmptyLine()\0UpdateWindowContents()\0"
    "UpdateWindowSensitivity()\0"
    "UpdateWindowSingleItem()\0"
    "nameTextChanged(QString)\0valuelistChanged()\0"
    "enumlistNew()\0enumlistDel()\0"
};

void XMLEditEnums::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        XMLEditEnums *_t = static_cast<XMLEditEnums *>(_o);
        switch (_id) {
        case 0: _t->removeEmptyLines(); break;
        case 1: _t->addEmptyLine(); break;
        case 2: _t->UpdateWindowContents(); break;
        case 3: _t->UpdateWindowSensitivity(); break;
        case 4: _t->UpdateWindowSingleItem(); break;
        case 5: _t->nameTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->valuelistChanged(); break;
        case 7: _t->enumlistNew(); break;
        case 8: _t->enumlistDel(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData XMLEditEnums::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMLEditEnums::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_XMLEditEnums,
      qt_meta_data_XMLEditEnums, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMLEditEnums::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMLEditEnums::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMLEditEnums::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMLEditEnums))
        return static_cast<void*>(const_cast< XMLEditEnums*>(this));
    return QFrame::qt_metacast(_clname);
}

int XMLEditEnums::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
