/****************************************************************************
** Meta object code from reading C++ file 'QvisPostableWindow.h'
**
** Created: Wed Nov 4 16:17:57 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisPostableWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisPostableWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisPostableWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   27,   27,   27, 0x0a,
      28,   27,   27,   27, 0x0a,
      35,   27,   27,   27, 0x0a,
      42,   27,   27,   27, 0x0a,
      49,   60,   27,   27, 0x0a,
      73,   27,   27,   27, 0x0a,
      82,   27,   27,   27, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QvisPostableWindow[] = {
    "QvisPostableWindow\0raise()\0\0show()\0"
    "hide()\0post()\0post(bool)\0avoid_scroll\0"
    "unpost()\0help()\0"
};

void QvisPostableWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisPostableWindow *_t = static_cast<QvisPostableWindow *>(_o);
        switch (_id) {
        case 0: _t->raise(); break;
        case 1: _t->show(); break;
        case 2: _t->hide(); break;
        case 3: _t->post(); break;
        case 4: _t->post((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->unpost(); break;
        case 6: _t->help(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisPostableWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisPostableWindow::staticMetaObject = {
    { &QvisWindowBase::staticMetaObject, qt_meta_stringdata_QvisPostableWindow,
      qt_meta_data_QvisPostableWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisPostableWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisPostableWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisPostableWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisPostableWindow))
        return static_cast<void*>(const_cast< QvisPostableWindow*>(this));
    return QvisWindowBase::qt_metacast(_clname);
}

int QvisPostableWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisWindowBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
