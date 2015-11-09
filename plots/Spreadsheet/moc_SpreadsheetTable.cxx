/****************************************************************************
** Meta object code from reading C++ file 'SpreadsheetTable.h'
**
** Created: Wed Nov 4 16:33:15 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "SpreadsheetTable.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SpreadsheetTable.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SpreadsheetTable[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   36,   36,   36, 0x05,

 // slots: signature, parameters, type, tag, flags
      37,   36,   36,   36, 0x0a,
      49,   36,   36,   36, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SpreadsheetTable[] = {
    "SpreadsheetTable\0selectionChanged()\0"
    "\0selectAll()\0selectNone()\0"
};

void SpreadsheetTable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SpreadsheetTable *_t = static_cast<SpreadsheetTable *>(_o);
        switch (_id) {
        case 0: _t->selectionChanged(); break;
        case 1: _t->selectAll(); break;
        case 2: _t->selectNone(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SpreadsheetTable::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SpreadsheetTable::staticMetaObject = {
    { &QTableView::staticMetaObject, qt_meta_stringdata_SpreadsheetTable,
      qt_meta_data_SpreadsheetTable, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SpreadsheetTable::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SpreadsheetTable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SpreadsheetTable::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SpreadsheetTable))
        return static_cast<void*>(const_cast< SpreadsheetTable*>(this));
    return QTableView::qt_metacast(_clname);
}

int SpreadsheetTable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void SpreadsheetTable::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
