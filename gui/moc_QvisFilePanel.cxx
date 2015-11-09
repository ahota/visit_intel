/****************************************************************************
** Meta object code from reading C++ file 'QvisFilePanel.h'
**
** Created: Wed Nov 4 16:17:57 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisFilePanel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisFilePanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisFilePanel[] = {

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
      14,   46,   46,   46, 0x08,
      47,   46,   46,   46, 0x08,
      78,   46,   46,   46, 0x08,
     110,   46,   46,   46, 0x08,
     121,   46,   46,   46, 0x08,
     156,   46,   46,   46, 0x08,
     170,   46,   46,   46, 0x08,
     188,   46,   46,   46, 0x08,
     202,   46,   46,   46, 0x08,
     214,   46,   46,   46, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisFilePanel[] = {
    "QvisFilePanel\0fileCollapsed(QTreeWidgetItem*)\0"
    "\0fileExpanded(QTreeWidgetItem*)\0"
    "highlightFile(QTreeWidgetItem*)\0"
    "openFile()\0openFileDblClick(QTreeWidgetItem*)\0"
    "replaceFile()\0replaceSelected()\0"
    "overlayFile()\0closeFile()\0"
    "internalUpdateFileList()\0"
};

void QvisFilePanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisFilePanel *_t = static_cast<QvisFilePanel *>(_o);
        switch (_id) {
        case 0: _t->fileCollapsed((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 1: _t->fileExpanded((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->highlightFile((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->openFile(); break;
        case 4: _t->openFileDblClick((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 5: _t->replaceFile(); break;
        case 6: _t->replaceSelected(); break;
        case 7: _t->overlayFile(); break;
        case 8: _t->closeFile(); break;
        case 9: _t->internalUpdateFileList(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisFilePanel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisFilePanel::staticMetaObject = {
    { &QGroupBox::staticMetaObject, qt_meta_stringdata_QvisFilePanel,
      qt_meta_data_QvisFilePanel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisFilePanel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisFilePanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisFilePanel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisFilePanel))
        return static_cast<void*>(const_cast< QvisFilePanel*>(this));
    if (!strcmp(_clname, "SimpleObserver"))
        return static_cast< SimpleObserver*>(const_cast< QvisFilePanel*>(this));
    if (!strcmp(_clname, "GUIBase"))
        return static_cast< GUIBase*>(const_cast< QvisFilePanel*>(this));
    return QGroupBox::qt_metacast(_clname);
}

int QvisFilePanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
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
