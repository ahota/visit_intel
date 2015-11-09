/****************************************************************************
** Meta object code from reading C++ file 'XMLEditAttribute.h'
**
** Created: Wed Nov 4 16:17:25 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "XMLEditAttribute.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'XMLEditAttribute.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_XMLEditAttribute[] = {

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
      17,   40,   40,   40, 0x0a,
      41,   40,   40,   40, 0x0a,
      67,   40,   40,   40, 0x0a,
      92,   40,   40,   40, 0x0a,
     120,   40,   40,   40, 0x0a,
     149,   40,   40,   40, 0x0a,
     179,   40,   40,   40, 0x0a,
     213,   40,   40,   40, 0x0a,
     233,   40,   40,   40, 0x0a,
     251,   40,   40,   40, 0x0a,
     276,   40,   40,   40, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_XMLEditAttribute[] = {
    "XMLEditAttribute\0UpdateWindowContents()\0"
    "\0UpdateWindowSensitivity()\0"
    "nameTextChanged(QString)\0"
    "purposeTextChanged(QString)\0"
    "codefileTextChanged(QString)\0"
    "exportAPITextChanged(QString)\0"
    "exportIncludeTextChanged(QString)\0"
    "persistentChanged()\0keyframeChanged()\0"
    "customBaseClassChanged()\0"
    "baseClassTextChanged(QString)\0"
};

void XMLEditAttribute::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        XMLEditAttribute *_t = static_cast<XMLEditAttribute *>(_o);
        switch (_id) {
        case 0: _t->UpdateWindowContents(); break;
        case 1: _t->UpdateWindowSensitivity(); break;
        case 2: _t->nameTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->purposeTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->codefileTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->exportAPITextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->exportIncludeTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->persistentChanged(); break;
        case 8: _t->keyframeChanged(); break;
        case 9: _t->customBaseClassChanged(); break;
        case 10: _t->baseClassTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData XMLEditAttribute::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMLEditAttribute::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_XMLEditAttribute,
      qt_meta_data_XMLEditAttribute, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMLEditAttribute::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMLEditAttribute::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMLEditAttribute::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMLEditAttribute))
        return static_cast<void*>(const_cast< XMLEditAttribute*>(this));
    return QFrame::qt_metacast(_clname);
}

int XMLEditAttribute::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
