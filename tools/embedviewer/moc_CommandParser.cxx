/****************************************************************************
** Meta object code from reading C++ file 'CommandParser.h'
**
** Created: Wed Nov 4 16:32:39 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "CommandParser.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CommandParser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CommandParser[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   32,   32,   32, 0x05,
      33,   32,   32,   32, 0x05,
      57,   32,   32,   32, 0x05,
      77,   32,   32,   32, 0x05,
      95,   32,   32,   32, 0x05,
     108,   32,   32,   32, 0x05,

 // slots: signature, parameters, type, tag, flags
     118,   32,   32,   32, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CommandParser[] = {
    "CommandParser\0openFile(QString)\0\0"
    "changeVariable(QString)\0changePlotType(int)\0"
    "setNContours(int)\0saveWindow()\0quitApp()\0"
    "ProcessOneCommand()\0"
};

void CommandParser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CommandParser *_t = static_cast<CommandParser *>(_o);
        switch (_id) {
        case 0: _t->openFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->changeVariable((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->changePlotType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setNContours((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->saveWindow(); break;
        case 5: _t->quitApp(); break;
        case 6: _t->ProcessOneCommand(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CommandParser::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CommandParser::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CommandParser,
      qt_meta_data_CommandParser, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CommandParser::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CommandParser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CommandParser::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CommandParser))
        return static_cast<void*>(const_cast< CommandParser*>(this));
    return QObject::qt_metacast(_clname);
}

int CommandParser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void CommandParser::openFile(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CommandParser::changeVariable(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CommandParser::changePlotType(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CommandParser::setNContours(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CommandParser::saveWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void CommandParser::quitApp()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}
QT_END_MOC_NAMESPACE
