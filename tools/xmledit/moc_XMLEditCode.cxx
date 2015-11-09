/****************************************************************************
** Meta object code from reading C++ file 'XMLEditCode.h'
**
** Created: Wed Nov 4 16:17:26 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "XMLEditCode.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'XMLEditCode.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_XMLEditCode[] = {

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
      12,   35,   35,   35, 0x0a,
      36,   35,   35,   35, 0x0a,
      62,   35,   35,   35, 0x0a,
      87,   35,   35,   35, 0x0a,
     114,   35,   35,   35, 0x0a,
     139,   35,   35,   35, 0x0a,
     155,   35,   35,   35, 0x0a,
     172,   35,   35,   35, 0x0a,
     186,   35,   35,   35, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_XMLEditCode[] = {
    "XMLEditCode\0UpdateWindowContents()\0\0"
    "UpdateWindowSensitivity()\0"
    "UpdateWindowSingleItem()\0"
    "targetTextChanged(QString)\0"
    "nameTextChanged(QString)\0prefixChanged()\0"
    "postfixChanged()\0codelistNew()\0"
    "codelistDel()\0"
};

void XMLEditCode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        XMLEditCode *_t = static_cast<XMLEditCode *>(_o);
        switch (_id) {
        case 0: _t->UpdateWindowContents(); break;
        case 1: _t->UpdateWindowSensitivity(); break;
        case 2: _t->UpdateWindowSingleItem(); break;
        case 3: _t->targetTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->nameTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->prefixChanged(); break;
        case 6: _t->postfixChanged(); break;
        case 7: _t->codelistNew(); break;
        case 8: _t->codelistDel(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData XMLEditCode::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMLEditCode::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_XMLEditCode,
      qt_meta_data_XMLEditCode, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMLEditCode::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMLEditCode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMLEditCode::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMLEditCode))
        return static_cast<void*>(const_cast< XMLEditCode*>(this));
    return QFrame::qt_metacast(_clname);
}

int XMLEditCode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
