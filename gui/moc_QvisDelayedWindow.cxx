/****************************************************************************
** Meta object code from reading C++ file 'QvisDelayedWindow.h'
**
** Created: Wed Nov 4 16:17:57 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisDelayedWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisDelayedWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisDelayedWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   26,   26,   26, 0x0a,
      27,   26,   26,   26, 0x0a,
      34,   26,   26,   26, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QvisDelayedWindow[] = {
    "QvisDelayedWindow\0raise()\0\0show()\0"
    "hide()\0"
};

void QvisDelayedWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisDelayedWindow *_t = static_cast<QvisDelayedWindow *>(_o);
        switch (_id) {
        case 0: _t->raise(); break;
        case 1: _t->show(); break;
        case 2: _t->hide(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QvisDelayedWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisDelayedWindow::staticMetaObject = {
    { &QvisWindowBase::staticMetaObject, qt_meta_stringdata_QvisDelayedWindow,
      qt_meta_data_QvisDelayedWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisDelayedWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisDelayedWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisDelayedWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisDelayedWindow))
        return static_cast<void*>(const_cast< QvisDelayedWindow*>(this));
    return QvisWindowBase::qt_metacast(_clname);
}

int QvisDelayedWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisWindowBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
