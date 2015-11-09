/****************************************************************************
** Meta object code from reading C++ file 'QvisFileOpenWindow.h'
**
** Created: Wed Nov 4 16:17:57 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisFileOpenWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisFileOpenWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisFileOpenWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   41,   41,   41, 0x05,
      42,   41,   41,   41, 0x05,

 // slots: signature, parameters, type, tag, flags
      60,   41,   41,   41, 0x0a,
      67,   41,   41,   41, 0x08,
      79,   41,   41,   41, 0x08,
      95,   41,   41,   41, 0x08,
     108,  145,   41,   41, 0x08,
     150,   41,   41,   41, 0x08,
     170,   41,   41,   41, 0x08,
     212,   41,   41,   41, 0x08,
     254,   41,   41,   41, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisFileOpenWindow[] = {
    "QvisFileOpenWindow\0selectedFile(QString)\0"
    "\0selectCancelled()\0show()\0okClicked()\0"
    "cancelClicked()\0selectFile()\0"
    "selectFileDblClick(QListWidgetItem*)\0"
    "item\0selectFileChanged()\0"
    "selectFileReturnPressed(QListWidgetItem*)\0"
    "setDefaultOptionsForFormatButtonClicked()\0"
    "fileFormatChanged(QString)\0"
};

void QvisFileOpenWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisFileOpenWindow *_t = static_cast<QvisFileOpenWindow *>(_o);
        switch (_id) {
        case 0: _t->selectedFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->selectCancelled(); break;
        case 2: _t->show(); break;
        case 3: _t->okClicked(); break;
        case 4: _t->cancelClicked(); break;
        case 5: _t->selectFile(); break;
        case 6: _t->selectFileDblClick((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 7: _t->selectFileChanged(); break;
        case 8: _t->selectFileReturnPressed((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 9: _t->setDefaultOptionsForFormatButtonClicked(); break;
        case 10: _t->fileFormatChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisFileOpenWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisFileOpenWindow::staticMetaObject = {
    { &QvisFileWindowBase::staticMetaObject, qt_meta_stringdata_QvisFileOpenWindow,
      qt_meta_data_QvisFileOpenWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisFileOpenWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisFileOpenWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisFileOpenWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisFileOpenWindow))
        return static_cast<void*>(const_cast< QvisFileOpenWindow*>(this));
    return QvisFileWindowBase::qt_metacast(_clname);
}

int QvisFileOpenWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisFileWindowBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void QvisFileOpenWindow::selectedFile(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QvisFileOpenWindow::selectCancelled()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
