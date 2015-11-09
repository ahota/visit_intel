/****************************************************************************
** Meta object code from reading C++ file 'QvisDatabaseCorrelationWindow.h'
**
** Created: Wed Nov 4 16:17:57 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisDatabaseCorrelationWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisDatabaseCorrelationWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisDatabaseCorrelationWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   56,   56,   56, 0x05,

 // slots: signature, parameters, type, tag, flags
      57,   56,   56,   56, 0x09,
      82,   56,   56,   56, 0x09,
     110,   56,   56,   56, 0x09,
     123,   56,   56,   56, 0x09,
     139,   56,   56,   56, 0x09,
     155,   56,   56,   56, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QvisDatabaseCorrelationWindow[] = {
    "QvisDatabaseCorrelationWindow\0"
    "deleteMe(QvisWindowBase*)\0\0"
    "setAddButtonEnabled(int)\0"
    "setRemoveButtonEnabled(int)\0addSources()\0"
    "removeSources()\0actionClicked()\0"
    "cancelClicked()\0"
};

void QvisDatabaseCorrelationWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisDatabaseCorrelationWindow *_t = static_cast<QvisDatabaseCorrelationWindow *>(_o);
        switch (_id) {
        case 0: _t->deleteMe((*reinterpret_cast< QvisWindowBase*(*)>(_a[1]))); break;
        case 1: _t->setAddButtonEnabled((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setRemoveButtonEnabled((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->addSources(); break;
        case 4: _t->removeSources(); break;
        case 5: _t->actionClicked(); break;
        case 6: _t->cancelClicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisDatabaseCorrelationWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisDatabaseCorrelationWindow::staticMetaObject = {
    { &QvisWindowBase::staticMetaObject, qt_meta_stringdata_QvisDatabaseCorrelationWindow,
      qt_meta_data_QvisDatabaseCorrelationWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisDatabaseCorrelationWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisDatabaseCorrelationWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisDatabaseCorrelationWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisDatabaseCorrelationWindow))
        return static_cast<void*>(const_cast< QvisDatabaseCorrelationWindow*>(this));
    return QvisWindowBase::qt_metacast(_clname);
}

int QvisDatabaseCorrelationWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void QvisDatabaseCorrelationWindow::deleteMe(QvisWindowBase * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
