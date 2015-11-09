/****************************************************************************
** Meta object code from reading C++ file 'QvisInterpreter.h'
**
** Created: Wed Nov 4 16:17:57 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisInterpreter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisInterpreter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisInterpreter[] = {

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
      16,   30,   30,   30, 0x05,

 // slots: signature, parameters, type, tag, flags
      31,   50,   30,   30, 0x0a,
      52,   30,   30,   30, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QvisInterpreter[] = {
    "QvisInterpreter\0Synchronize()\0\0"
    "Interpret(QString)\0s\0ProcessCommands()\0"
};

void QvisInterpreter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisInterpreter *_t = static_cast<QvisInterpreter *>(_o);
        switch (_id) {
        case 0: _t->Synchronize(); break;
        case 1: _t->Interpret((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->ProcessCommands(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisInterpreter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisInterpreter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QvisInterpreter,
      qt_meta_data_QvisInterpreter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisInterpreter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisInterpreter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisInterpreter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisInterpreter))
        return static_cast<void*>(const_cast< QvisInterpreter*>(this));
    if (!strcmp(_clname, "GUIBase"))
        return static_cast< GUIBase*>(const_cast< QvisInterpreter*>(this));
    return QObject::qt_metacast(_clname);
}

int QvisInterpreter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void QvisInterpreter::Synchronize()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
