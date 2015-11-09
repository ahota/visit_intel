/****************************************************************************
** Meta object code from reading C++ file 'QvisDisplaceWindow.h'
**
** Created: Wed Nov 4 16:19:06 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisDisplaceWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisDisplaceWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisDisplaceWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   39,   39,   39, 0x08,
      40,   65,   39,   39, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisDisplaceWindow[] = {
    "QvisDisplaceWindow\0factorProcessText()\0"
    "\0variableChanged(QString)\0varName\0"
};

void QvisDisplaceWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisDisplaceWindow *_t = static_cast<QvisDisplaceWindow *>(_o);
        switch (_id) {
        case 0: _t->factorProcessText(); break;
        case 1: _t->variableChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisDisplaceWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisDisplaceWindow::staticMetaObject = {
    { &QvisOperatorWindow::staticMetaObject, qt_meta_stringdata_QvisDisplaceWindow,
      qt_meta_data_QvisDisplaceWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisDisplaceWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisDisplaceWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisDisplaceWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisDisplaceWindow))
        return static_cast<void*>(const_cast< QvisDisplaceWindow*>(this));
    return QvisOperatorWindow::qt_metacast(_clname);
}

int QvisDisplaceWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisOperatorWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
