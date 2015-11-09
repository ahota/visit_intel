/****************************************************************************
** Meta object code from reading C++ file 'QvisTubeWindow.h'
**
** Created: Wed Nov 4 16:19:25 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisTubeWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisTubeWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisTubeWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   43,   47,   47, 0x08,
      48,   43,   47,   47, 0x08,
      71,   47,   47,   47, 0x08,
      91,  121,   47,   47, 0x08,
     129,   47,   47,   47, 0x08,
     151,   43,   47,   47, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisTubeWindow[] = {
    "QvisTubeWindow\0scaleByVarFlagChanged(bool)\0"
    "val\0\0radiusTypeChanged(int)\0"
    "radiusProcessText()\0scaleVariableChanged(QString)\0"
    "varName\0finenessProcessText()\0"
    "cappingChanged(bool)\0"
};

void QvisTubeWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisTubeWindow *_t = static_cast<QvisTubeWindow *>(_o);
        switch (_id) {
        case 0: _t->scaleByVarFlagChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->radiusTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->radiusProcessText(); break;
        case 3: _t->scaleVariableChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->finenessProcessText(); break;
        case 5: _t->cappingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisTubeWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisTubeWindow::staticMetaObject = {
    { &QvisOperatorWindow::staticMetaObject, qt_meta_stringdata_QvisTubeWindow,
      qt_meta_data_QvisTubeWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisTubeWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisTubeWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisTubeWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisTubeWindow))
        return static_cast<void*>(const_cast< QvisTubeWindow*>(this));
    return QvisOperatorWindow::qt_metacast(_clname);
}

int QvisTubeWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisOperatorWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
