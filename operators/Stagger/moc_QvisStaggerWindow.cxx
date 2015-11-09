/****************************************************************************
** Meta object code from reading C++ file 'QvisStaggerWindow.h'
**
** Created: Wed Nov 4 16:19:21 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisStaggerWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisStaggerWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisStaggerWindow[] = {

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
      18,   39,   39,   39, 0x08,
      40,   39,   39,   39, 0x08,
      61,   39,   39,   39, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisStaggerWindow[] = {
    "QvisStaggerWindow\0offsetXProcessText()\0"
    "\0offsetYProcessText()\0offsetZProcessText()\0"
};

void QvisStaggerWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisStaggerWindow *_t = static_cast<QvisStaggerWindow *>(_o);
        switch (_id) {
        case 0: _t->offsetXProcessText(); break;
        case 1: _t->offsetYProcessText(); break;
        case 2: _t->offsetZProcessText(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QvisStaggerWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisStaggerWindow::staticMetaObject = {
    { &QvisOperatorWindow::staticMetaObject, qt_meta_stringdata_QvisStaggerWindow,
      qt_meta_data_QvisStaggerWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisStaggerWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisStaggerWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisStaggerWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisStaggerWindow))
        return static_cast<void*>(const_cast< QvisStaggerWindow*>(this));
    return QvisOperatorWindow::qt_metacast(_clname);
}

int QvisStaggerWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisOperatorWindow::qt_metacall(_c, _id, _a);
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
