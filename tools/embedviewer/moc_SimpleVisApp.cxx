/****************************************************************************
** Meta object code from reading C++ file 'SimpleVisApp.h'
**
** Created: Wed Nov 4 16:32:39 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "SimpleVisApp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SimpleVisApp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SimpleVisApp[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   20,   20,   20, 0x0a,
      21,   35,   20,   20, 0x0a,
      46,   20,   20,   20, 0x2a,
      57,   20,   20,   20, 0x08,
      70,   20,   20,   20, 0x08,
      88,   20,   20,   20, 0x08,
     112,   20,   20,   20, 0x08,
     145,   20,   20,   20, 0x08,
     165,   20,   20,   20, 0x08,
     183,   20,   20,   20, 0x08,
     196,   20,   20,   20, 0x08,
     206,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SimpleVisApp[] = {
    "SimpleVisApp\0show()\0\0execFile(int)\0"
    "openClFile\0execFile()\0selectFile()\0"
    "openFile(QString)\0changeVariable(QString)\0"
    "changeVariableAndUpdate(QString)\0"
    "changePlotType(int)\0setNContours(int)\0"
    "saveWindow()\0openGUI()\0quitApp()\0"
};

void SimpleVisApp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SimpleVisApp *_t = static_cast<SimpleVisApp *>(_o);
        switch (_id) {
        case 0: _t->show(); break;
        case 1: _t->execFile((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->execFile(); break;
        case 3: _t->selectFile(); break;
        case 4: _t->openFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->changeVariable((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->changeVariableAndUpdate((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->changePlotType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setNContours((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->saveWindow(); break;
        case 10: _t->openGUI(); break;
        case 11: _t->quitApp(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SimpleVisApp::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SimpleVisApp::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_SimpleVisApp,
      qt_meta_data_SimpleVisApp, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SimpleVisApp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SimpleVisApp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SimpleVisApp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SimpleVisApp))
        return static_cast<void*>(const_cast< SimpleVisApp*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int SimpleVisApp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
