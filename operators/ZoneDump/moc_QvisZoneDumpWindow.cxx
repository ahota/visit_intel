/****************************************************************************
** Meta object code from reading C++ file 'QvisZoneDumpWindow.h'
**
** Created: Wed Nov 4 16:19:25 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisZoneDumpWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisZoneDumpWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisZoneDumpWindow[] = {

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
      19,   44,   52,   52, 0x08,
      53,   52,   52,   52, 0x08,
      77,   52,   52,   52, 0x08,
     101,   52,   52,   52, 0x08,
     125,  146,   52,   52, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisZoneDumpWindow[] = {
    "QvisZoneDumpWindow\0variableChanged(QString)\0"
    "varName\0\0lowerBoundProcessText()\0"
    "upperBoundProcessText()\0outputFileProcessText()\0"
    "enabledChanged(bool)\0val\0"
};

void QvisZoneDumpWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisZoneDumpWindow *_t = static_cast<QvisZoneDumpWindow *>(_o);
        switch (_id) {
        case 0: _t->variableChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->lowerBoundProcessText(); break;
        case 2: _t->upperBoundProcessText(); break;
        case 3: _t->outputFileProcessText(); break;
        case 4: _t->enabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisZoneDumpWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisZoneDumpWindow::staticMetaObject = {
    { &QvisOperatorWindow::staticMetaObject, qt_meta_stringdata_QvisZoneDumpWindow,
      qt_meta_data_QvisZoneDumpWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisZoneDumpWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisZoneDumpWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisZoneDumpWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisZoneDumpWindow))
        return static_cast<void*>(const_cast< QvisZoneDumpWindow*>(this));
    return QvisOperatorWindow::qt_metacast(_clname);
}

int QvisZoneDumpWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
