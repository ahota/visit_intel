/****************************************************************************
** Meta object code from reading C++ file 'ViewerWindowManager.h'
**
** Created: Wed Nov 4 16:21:19 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ViewerWindowManager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ViewerWindowManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ViewerWindowManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   48,   48,   48, 0x05,
      49,   48,   48,   48, 0x05,

 // slots: signature, parameters, type, tag, flags
      77,  104,   48,   48, 0x0a,
     116,   48,   48,   48, 0x2a,
     140,  169,   48,   48, 0x0a,
     196,  221,   48,   48, 0x2a,
     236,  104,   48,   48, 0x0a,
     257,   48,   48,   48, 0x2a,
     275,  104,   48,   48, 0x0a,
     289,   48,   48,   48, 0x2a,
     300,  104,   48,   48, 0x0a,
     314,   48,   48,   48, 0x2a,
     325,   48,   48,   48, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ViewerWindowManager[] = {
    "ViewerWindowManager\0createWindow(ViewerWindow*)\0"
    "\0deleteWindow(ViewerWindow*)\0"
    "InvertBackgroundColor(int)\0windowIndex\0"
    "InvertBackgroundColor()\0"
    "SetToolEnabled(int,bool,int)\0"
    "toolId,enabled,windowIndex\0"
    "SetToolEnabled(int,bool)\0toolId,enabled\0"
    "DisableAllTools(int)\0DisableAllTools()\0"
    "UndoView(int)\0UndoView()\0RedoView(int)\0"
    "RedoView()\0AnimationCallback()\0"
};

void ViewerWindowManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ViewerWindowManager *_t = static_cast<ViewerWindowManager *>(_o);
        switch (_id) {
        case 0: _t->createWindow((*reinterpret_cast< ViewerWindow*(*)>(_a[1]))); break;
        case 1: _t->deleteWindow((*reinterpret_cast< ViewerWindow*(*)>(_a[1]))); break;
        case 2: _t->InvertBackgroundColor((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->InvertBackgroundColor(); break;
        case 4: _t->SetToolEnabled((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 5: _t->SetToolEnabled((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->DisableAllTools((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->DisableAllTools(); break;
        case 8: _t->UndoView((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->UndoView(); break;
        case 10: _t->RedoView((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->RedoView(); break;
        case 12: _t->AnimationCallback(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ViewerWindowManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ViewerWindowManager::staticMetaObject = {
    { &ViewerBase::staticMetaObject, qt_meta_stringdata_ViewerWindowManager,
      qt_meta_data_ViewerWindowManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ViewerWindowManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ViewerWindowManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ViewerWindowManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ViewerWindowManager))
        return static_cast<void*>(const_cast< ViewerWindowManager*>(this));
    return ViewerBase::qt_metacast(_clname);
}

int ViewerWindowManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ViewerBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void ViewerWindowManager::createWindow(ViewerWindow * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ViewerWindowManager::deleteWindow(ViewerWindow * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
