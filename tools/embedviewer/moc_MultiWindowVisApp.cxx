/****************************************************************************
** Meta object code from reading C++ file 'MultiWindowVisApp.h'
**
** Created: Wed Nov 4 16:32:39 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MultiWindowVisApp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MultiWindowVisApp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MultiWindowVisApp[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   25,   25,   25, 0x0a,
      26,   25,   25,   25, 0x08,
      39,   25,   25,   25, 0x08,
      57,   83,   25,   25, 0x08,
      87,   25,   25,   25, 0x08,
     101,   25,   25,   25, 0x08,
     111,   25,   25,   25, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MultiWindowVisApp[] = {
    "MultiWindowVisApp\0show()\0\0selectFile()\0"
    "openFile(QString)\0onSelectVariable(QString)\0"
    "var\0resetWindow()\0openGUI()\0showTheWindow()\0"
};

void MultiWindowVisApp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MultiWindowVisApp *_t = static_cast<MultiWindowVisApp *>(_o);
        switch (_id) {
        case 0: _t->show(); break;
        case 1: _t->selectFile(); break;
        case 2: _t->openFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->onSelectVariable((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->resetWindow(); break;
        case 5: _t->openGUI(); break;
        case 6: _t->showTheWindow(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MultiWindowVisApp::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MultiWindowVisApp::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MultiWindowVisApp,
      qt_meta_data_MultiWindowVisApp, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MultiWindowVisApp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MultiWindowVisApp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MultiWindowVisApp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MultiWindowVisApp))
        return static_cast<void*>(const_cast< MultiWindowVisApp*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MultiWindowVisApp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
