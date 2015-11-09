/****************************************************************************
** Meta object code from reading C++ file 'XMLEditIncludes.h'
**
** Created: Wed Nov 4 16:17:26 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "XMLEditIncludes.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'XMLEditIncludes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_XMLEditIncludes[] = {

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
      16,   39,   39,   39, 0x0a,
      40,   39,   39,   39, 0x0a,
      66,   39,   39,   39, 0x0a,
      91,   39,   39,   39, 0x0a,
     118,   39,   39,   39, 0x0a,
     146,   39,   39,   39, 0x0a,
     168,   39,   39,   39, 0x0a,
     192,   39,   39,   39, 0x0a,
     209,   39,   39,   39, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_XMLEditIncludes[] = {
    "XMLEditIncludes\0UpdateWindowContents()\0"
    "\0UpdateWindowSensitivity()\0"
    "UpdateWindowSingleItem()\0"
    "targetTextChanged(QString)\0"
    "includeTextChanged(QString)\0"
    "fileGroupChanged(int)\0quotedGroupChanged(int)\0"
    "includelistNew()\0includelistDel()\0"
};

void XMLEditIncludes::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        XMLEditIncludes *_t = static_cast<XMLEditIncludes *>(_o);
        switch (_id) {
        case 0: _t->UpdateWindowContents(); break;
        case 1: _t->UpdateWindowSensitivity(); break;
        case 2: _t->UpdateWindowSingleItem(); break;
        case 3: _t->targetTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->includeTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->fileGroupChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->quotedGroupChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->includelistNew(); break;
        case 8: _t->includelistDel(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData XMLEditIncludes::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMLEditIncludes::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_XMLEditIncludes,
      qt_meta_data_XMLEditIncludes, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMLEditIncludes::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMLEditIncludes::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMLEditIncludes::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMLEditIncludes))
        return static_cast<void*>(const_cast< XMLEditIncludes*>(this));
    return QFrame::qt_metacast(_clname);
}

int XMLEditIncludes::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
