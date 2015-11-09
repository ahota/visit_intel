/****************************************************************************
** Meta object code from reading C++ file 'QvisPluginWindow.h'
**
** Created: Wed Nov 4 16:17:57 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisPluginWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisPluginWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisPluginWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   41,   41,   41, 0x05,

 // slots: signature, parameters, type, tag, flags
      42,   41,   41,   41, 0x08,
      50,   41,   41,   41, 0x08,
      67,   41,   41,   41, 0x08,
      93,   41,   41,   41, 0x08,
     127,  190,   41,   41, 0x08,
     192,   41,   41,   41, 0x08,
     224,   41,   41,   41, 0x08,
     258,   41,   41,   41, 0x08,
     289,   41,   41,   41, 0x08,
     318,   41,   41,   41, 0x08,
     349,   41,   41,   41, 0x08,
     382,  190,   41,   41, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisPluginWindow[] = {
    "QvisPluginWindow\0pluginSettingsChanged()\0"
    "\0apply()\0tabSelected(int)\0"
    "clearOperatorCategories()\0"
    "databaseOptionsSetButtonClicked()\0"
    "databaseSelectedItemChanged(QTreeWidgetItem*,QTreeWidgetItem*)\0"
    ",\0selectAllReadersButtonClicked()\0"
    "unSelectAllReadersButtonClicked()\0"
    "dbAddToPreferedButtonClicked()\0"
    "dbPreferredUpButtonClicked()\0"
    "dbPreferredDownButtonClicked()\0"
    "dbPreferredRemoveButtonClicked()\0"
    "dbPreferredListItemChanged(QListWidgetItem*,QListWidgetItem*)\0"
};

void QvisPluginWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisPluginWindow *_t = static_cast<QvisPluginWindow *>(_o);
        switch (_id) {
        case 0: _t->pluginSettingsChanged(); break;
        case 1: _t->apply(); break;
        case 2: _t->tabSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->clearOperatorCategories(); break;
        case 4: _t->databaseOptionsSetButtonClicked(); break;
        case 5: _t->databaseSelectedItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 6: _t->selectAllReadersButtonClicked(); break;
        case 7: _t->unSelectAllReadersButtonClicked(); break;
        case 8: _t->dbAddToPreferedButtonClicked(); break;
        case 9: _t->dbPreferredUpButtonClicked(); break;
        case 10: _t->dbPreferredDownButtonClicked(); break;
        case 11: _t->dbPreferredRemoveButtonClicked(); break;
        case 12: _t->dbPreferredListItemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisPluginWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisPluginWindow::staticMetaObject = {
    { &QvisPostableWindowSimpleObserver::staticMetaObject, qt_meta_stringdata_QvisPluginWindow,
      qt_meta_data_QvisPluginWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisPluginWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisPluginWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisPluginWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisPluginWindow))
        return static_cast<void*>(const_cast< QvisPluginWindow*>(this));
    return QvisPostableWindowSimpleObserver::qt_metacast(_clname);
}

int QvisPluginWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisPostableWindowSimpleObserver::qt_metacall(_c, _id, _a);
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
void QvisPluginWindow::pluginSettingsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
