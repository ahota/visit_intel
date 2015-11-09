/****************************************************************************
** Meta object code from reading C++ file 'QvisFileSelectionWindow.h'
**
** Created: Wed Nov 4 16:17:57 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisFileSelectionWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisFileSelectionWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisFileSelectionWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   47,   47,   47, 0x05,

 // slots: signature, parameters, type, tag, flags
      48,   47,   47,   47, 0x0a,
      55,   47,   47,   47, 0x0a,
      72,   47,   47,   47, 0x08,
      84,   47,   47,   47, 0x08,
      97,   47,   47,   47, 0x08,
     113,   47,   47,   47, 0x08,
     126,  163,   47,   47, 0x08,
     168,   47,   47,   47, 0x08,
     188,   47,   47,   47, 0x08,
     230,   47,   47,   47, 0x08,
     258,   47,   47,   47, 0x08,
     275,   47,   47,   47, 0x08,
     288,   47,   47,   47, 0x08,
     305,   47,   47,   47, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisFileSelectionWindow[] = {
    "QvisFileSelectionWindow\0selectedFilesChanged()\0"
    "\0show()\0setEnabled(bool)\0okClicked()\0"
    "groupFiles()\0cancelClicked()\0selectFile()\0"
    "selectFileDblClick(QListWidgetItem*)\0"
    "item\0selectFileChanged()\0"
    "selectFileReturnPressed(QListWidgetItem*)\0"
    "selectedFileSelectChanged()\0"
    "selectAllFiles()\0removeFile()\0"
    "removeAllFiles()\0removeSelectedFiles(QListWidgetItem*)\0"
};

void QvisFileSelectionWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisFileSelectionWindow *_t = static_cast<QvisFileSelectionWindow *>(_o);
        switch (_id) {
        case 0: _t->selectedFilesChanged(); break;
        case 1: _t->show(); break;
        case 2: _t->setEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->okClicked(); break;
        case 4: _t->groupFiles(); break;
        case 5: _t->cancelClicked(); break;
        case 6: _t->selectFile(); break;
        case 7: _t->selectFileDblClick((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 8: _t->selectFileChanged(); break;
        case 9: _t->selectFileReturnPressed((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 10: _t->selectedFileSelectChanged(); break;
        case 11: _t->selectAllFiles(); break;
        case 12: _t->removeFile(); break;
        case 13: _t->removeAllFiles(); break;
        case 14: _t->removeSelectedFiles((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisFileSelectionWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisFileSelectionWindow::staticMetaObject = {
    { &QvisFileWindowBase::staticMetaObject, qt_meta_stringdata_QvisFileSelectionWindow,
      qt_meta_data_QvisFileSelectionWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisFileSelectionWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisFileSelectionWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisFileSelectionWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisFileSelectionWindow))
        return static_cast<void*>(const_cast< QvisFileSelectionWindow*>(this));
    return QvisFileWindowBase::qt_metacast(_clname);
}

int QvisFileSelectionWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisFileWindowBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void QvisFileSelectionWindow::selectedFilesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
