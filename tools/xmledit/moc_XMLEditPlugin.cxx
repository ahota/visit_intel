/****************************************************************************
** Meta object code from reading C++ file 'XMLEditPlugin.h'
**
** Created: Wed Nov 4 16:17:26 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "XMLEditPlugin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'XMLEditPlugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_XMLEditPlugin[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   37,   37,   37, 0x0a,
      38,   37,   37,   37, 0x0a,
      64,   37,   37,   37, 0x0a,
      91,   37,   37,   37, 0x0a,
     116,   37,   37,   37, 0x0a,
     142,   37,   37,   37, 0x0a,
     170,   37,   37,   37, 0x0a,
     199,   37,   37,   37, 0x0a,
     220,   37,   37,   37, 0x0a,
     243,   37,   37,   37, 0x0a,
     267,   37,   37,   37, 0x0a,
     297,   37,   37,   37, 0x0a,
     320,   37,   37,   37, 0x0a,
     338,   37,   37,   37, 0x0a,
     369,   37,   37,   37, 0x0a,
     391,   37,   37,   37, 0x0a,
     414,   37,   37,   37, 0x0a,
     433,   37,   37,   37, 0x0a,
     466,   37,   37,   37, 0x0a,
     498,   37,   37,   37, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_XMLEditPlugin[] = {
    "XMLEditPlugin\0UpdateWindowContents()\0"
    "\0UpdateWindowSensitivity()\0"
    "attpluginGroupChanged(int)\0"
    "nameTextChanged(QString)\0"
    "labelTextChanged(QString)\0"
    "versionTextChanged(QString)\0"
    "iconFileTextChanged(QString)\0"
    "hasIconChanged(bool)\0hasWriterChanged(bool)\0"
    "hasOptionsChanged(bool)\0"
    "enabledByDefaultChanged(bool)\0"
    "pluginTypeChanged(int)\0varTypesChanged()\0"
    "createExpressionsChanged(bool)\0"
    "inOpVarTypesChanged()\0outOpVarTypesChanged()\0"
    "dbTypeChanged(int)\0filePatternsTextChanged(QString)\0"
    "filePatternsStrictChanged(bool)\0"
    "opensWholeDirectoryChanged(bool)\0"
};

void XMLEditPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        XMLEditPlugin *_t = static_cast<XMLEditPlugin *>(_o);
        switch (_id) {
        case 0: _t->UpdateWindowContents(); break;
        case 1: _t->UpdateWindowSensitivity(); break;
        case 2: _t->attpluginGroupChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->nameTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->labelTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->versionTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->iconFileTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->hasIconChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->hasWriterChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->hasOptionsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->enabledByDefaultChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->pluginTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->varTypesChanged(); break;
        case 13: _t->createExpressionsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->inOpVarTypesChanged(); break;
        case 15: _t->outOpVarTypesChanged(); break;
        case 16: _t->dbTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->filePatternsTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->filePatternsStrictChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->opensWholeDirectoryChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData XMLEditPlugin::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMLEditPlugin::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_XMLEditPlugin,
      qt_meta_data_XMLEditPlugin, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMLEditPlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMLEditPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMLEditPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMLEditPlugin))
        return static_cast<void*>(const_cast< XMLEditPlugin*>(this));
    return QFrame::qt_metacast(_clname);
}

int XMLEditPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
