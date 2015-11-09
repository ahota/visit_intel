/****************************************************************************
** Meta object code from reading C++ file 'QvisVariablePopupMenu.h'
**
** Created: Wed Nov 4 16:17:49 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisVariablePopupMenu.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisVariablePopupMenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisVariablePopupMenu[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   45,   63,   63, 0x05,

 // slots: signature, parameters, type, tag, flags
      64,   63,   63,   63, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisVariablePopupMenu[] = {
    "QvisVariablePopupMenu\0activated(int,QString)\0"
    "plotType_,varName\0\0caughtTriggered(QAction*)\0"
};

void QvisVariablePopupMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisVariablePopupMenu *_t = static_cast<QvisVariablePopupMenu *>(_o);
        switch (_id) {
        case 0: _t->activated((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->caughtTriggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisVariablePopupMenu::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisVariablePopupMenu::staticMetaObject = {
    { &QMenu::staticMetaObject, qt_meta_stringdata_QvisVariablePopupMenu,
      qt_meta_data_QvisVariablePopupMenu, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisVariablePopupMenu::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisVariablePopupMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisVariablePopupMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisVariablePopupMenu))
        return static_cast<void*>(const_cast< QvisVariablePopupMenu*>(this));
    return QMenu::qt_metacast(_clname);
}

int QvisVariablePopupMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QvisVariablePopupMenu::activated(int _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
