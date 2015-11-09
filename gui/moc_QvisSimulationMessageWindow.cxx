/****************************************************************************
** Meta object code from reading C++ file 'QvisSimulationMessageWindow.h'
**
** Created: Wed Nov 4 16:17:58 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisSimulationMessageWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisSimulationMessageWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisSimulationMessageWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      28,   48,   52,   52, 0x0a,
      53,   52,   52,   52, 0x0a,
      61,   52,   52,   52, 0x0a,
      68,   52,   52,   52, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QvisSimulationMessageWindow[] = {
    "QvisSimulationMessageWindow\0"
    "addMessage(QString)\0txt\0\0clear()\0"
    "post()\0unpost()\0"
};

void QvisSimulationMessageWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisSimulationMessageWindow *_t = static_cast<QvisSimulationMessageWindow *>(_o);
        switch (_id) {
        case 0: _t->addMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->clear(); break;
        case 2: _t->post(); break;
        case 3: _t->unpost(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisSimulationMessageWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisSimulationMessageWindow::staticMetaObject = {
    { &QvisPostableWindow::staticMetaObject, qt_meta_stringdata_QvisSimulationMessageWindow,
      qt_meta_data_QvisSimulationMessageWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisSimulationMessageWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisSimulationMessageWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisSimulationMessageWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisSimulationMessageWindow))
        return static_cast<void*>(const_cast< QvisSimulationMessageWindow*>(this));
    return QvisPostableWindow::qt_metacast(_clname);
}

int QvisSimulationMessageWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisPostableWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
