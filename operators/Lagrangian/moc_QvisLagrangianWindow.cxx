/****************************************************************************
** Meta object code from reading C++ file 'QvisLagrangianWindow.h'
**
** Created: Wed Nov 4 16:19:11 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisLagrangianWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisLagrangianWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisLagrangianWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   44,   44,   44, 0x08,
      45,   44,   44,   44, 0x08,
      67,   91,   44,   44, 0x08,
      95,   91,   44,   44, 0x08,
     119,  144,   44,   44, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisLagrangianWindow[] = {
    "QvisLagrangianWindow\0seedPointProcessText()\0"
    "\0numStepsProcessText()\0XAxisSampleChanged(int)\0"
    "val\0YAxisSampleChanged(int)\0"
    "variableChanged(QString)\0varName\0"
};

void QvisLagrangianWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisLagrangianWindow *_t = static_cast<QvisLagrangianWindow *>(_o);
        switch (_id) {
        case 0: _t->seedPointProcessText(); break;
        case 1: _t->numStepsProcessText(); break;
        case 2: _t->XAxisSampleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->YAxisSampleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->variableChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisLagrangianWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisLagrangianWindow::staticMetaObject = {
    { &QvisOperatorWindow::staticMetaObject, qt_meta_stringdata_QvisLagrangianWindow,
      qt_meta_data_QvisLagrangianWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisLagrangianWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisLagrangianWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisLagrangianWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisLagrangianWindow))
        return static_cast<void*>(const_cast< QvisLagrangianWindow*>(this));
    return QvisOperatorWindow::qt_metacast(_clname);
}

int QvisLagrangianWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisOperatorWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
