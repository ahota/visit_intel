/****************************************************************************
** Meta object code from reading C++ file 'QvisMessageWindow.h'
**
** Created: Wed Nov 4 16:17:57 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisMessageWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisMessageWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisMessageWindow[] = {

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
      18,   44,   44,   44, 0x0a,
      45,   44,   44,   44, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisMessageWindow[] = {
    "QvisMessageWindow\0EnableWarningPopups(bool)\0"
    "\0doHide()\0"
};

void QvisMessageWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisMessageWindow *_t = static_cast<QvisMessageWindow *>(_o);
        switch (_id) {
        case 0: _t->EnableWarningPopups((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->doHide(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisMessageWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisMessageWindow::staticMetaObject = {
    { &QvisWindowBase::staticMetaObject, qt_meta_stringdata_QvisMessageWindow,
      qt_meta_data_QvisMessageWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisMessageWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisMessageWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisMessageWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisMessageWindow))
        return static_cast<void*>(const_cast< QvisMessageWindow*>(this));
    if (!strcmp(_clname, "Observer"))
        return static_cast< Observer*>(const_cast< QvisMessageWindow*>(this));
    return QvisWindowBase::qt_metacast(_clname);
}

int QvisMessageWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisWindowBase::qt_metacall(_c, _id, _a);
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
