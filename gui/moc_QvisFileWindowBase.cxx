/****************************************************************************
** Meta object code from reading C++ file 'QvisFileWindowBase.h'
**
** Created: Wed Nov 4 16:17:57 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisFileWindowBase.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisFileWindowBase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisFileWindowBase[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   35,   35,   35, 0x0a,
      36,   35,   35,   35, 0x0a,
      49,   35,   35,   35, 0x09,
      65,   35,   35,   35, 0x09,
      82,   35,   35,   35, 0x09,
      99,   35,   35,   35, 0x09,
     133,   35,   35,   35, 0x09,
     148,  165,   35,   35, 0x09,
     169,  165,   35,   35, 0x09,
     188,  165,   35,   35, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QvisFileWindowBase[] = {
    "QvisFileWindowBase\0showMinimized()\0\0"
    "showNormal()\0filterChanged()\0"
    "hostChanged(int)\0pathChanged(int)\0"
    "changeDirectory(QListWidgetItem*)\0"
    "refreshFiles()\0currentDir(bool)\0val\0"
    "showDotFiles(bool)\0fileGroupingChanged(int)\0"
};

void QvisFileWindowBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisFileWindowBase *_t = static_cast<QvisFileWindowBase *>(_o);
        switch (_id) {
        case 0: _t->showMinimized(); break;
        case 1: _t->showNormal(); break;
        case 2: _t->filterChanged(); break;
        case 3: _t->hostChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->pathChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->changeDirectory((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 6: _t->refreshFiles(); break;
        case 7: _t->currentDir((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->showDotFiles((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->fileGroupingChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisFileWindowBase::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisFileWindowBase::staticMetaObject = {
    { &QvisDelayedWindowSimpleObserver::staticMetaObject, qt_meta_stringdata_QvisFileWindowBase,
      qt_meta_data_QvisFileWindowBase, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisFileWindowBase::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisFileWindowBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisFileWindowBase::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisFileWindowBase))
        return static_cast<void*>(const_cast< QvisFileWindowBase*>(this));
    return QvisDelayedWindowSimpleObserver::qt_metacast(_clname);
}

int QvisFileWindowBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisDelayedWindowSimpleObserver::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
