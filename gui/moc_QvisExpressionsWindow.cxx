/****************************************************************************
** Meta object code from reading C++ file 'QvisExpressionsWindow.h'
**
** Created: Wed Nov 4 16:17:57 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisExpressionsWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisExpressionsWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisExpressionsWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   30,   30,   30, 0x0a,
      31,   30,   30,   30, 0x0a,
      45,   30,   30,   30, 0x0a,
      61,   30,   30,   30, 0x08,
      77,   30,   30,   30, 0x08,
      93,   30,   30,   30, 0x08,
     118,   30,   30,   30, 0x08,
     135,   30,   30,   30, 0x08,
     159,   30,   30,   30, 0x08,
     178,   30,   30,   30, 0x08,
     205,   30,   30,   30, 0x08,
     233,   30,   30,   30, 0x08,
     260,   30,   30,   30, 0x08,
     280,   30,   30,   30, 0x08,
     304,   30,   30,   30, 0x08,
     332,   30,   30,   30, 0x08,
     359,   30,   30,   30, 0x08,
     385,   30,   30,   30, 0x08,
     410,   30,   30,   30, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisExpressionsWindow[] = {
    "QvisExpressionsWindow\0apply()\0\0"
    "loadSubject()\0newExpression()\0"
    "addExpression()\0delExpression()\0"
    "nameTextChanged(QString)\0typeChanged(int)\0"
    "displayAllVarsChanged()\0notHiddenChanged()\0"
    "stdDefinitionTextChanged()\0"
    "stdInsertFunction(QAction*)\0"
    "stdInsertVariable(QString)\0"
    "pyArgsTextChanged()\0pyFilterSourceChanged()\0"
    "pyTemplateSelected(QString)\0"
    "pyInsertFunction(QAction*)\0"
    "pyInsertVariable(QString)\0"
    "UpdateWindowSingleItem()\0"
    "UpdateWindowSensitivity()\0"
};

void QvisExpressionsWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisExpressionsWindow *_t = static_cast<QvisExpressionsWindow *>(_o);
        switch (_id) {
        case 0: _t->apply(); break;
        case 1: _t->loadSubject(); break;
        case 2: _t->newExpression(); break;
        case 3: _t->addExpression(); break;
        case 4: _t->delExpression(); break;
        case 5: _t->nameTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->typeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->displayAllVarsChanged(); break;
        case 8: _t->notHiddenChanged(); break;
        case 9: _t->stdDefinitionTextChanged(); break;
        case 10: _t->stdInsertFunction((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 11: _t->stdInsertVariable((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->pyArgsTextChanged(); break;
        case 13: _t->pyFilterSourceChanged(); break;
        case 14: _t->pyTemplateSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->pyInsertFunction((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 16: _t->pyInsertVariable((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->UpdateWindowSingleItem(); break;
        case 18: _t->UpdateWindowSensitivity(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisExpressionsWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisExpressionsWindow::staticMetaObject = {
    { &QvisPostableWindowObserver::staticMetaObject, qt_meta_stringdata_QvisExpressionsWindow,
      qt_meta_data_QvisExpressionsWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisExpressionsWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisExpressionsWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisExpressionsWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisExpressionsWindow))
        return static_cast<void*>(const_cast< QvisExpressionsWindow*>(this));
    return QvisPostableWindowObserver::qt_metacast(_clname);
}

int QvisExpressionsWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisPostableWindowObserver::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
