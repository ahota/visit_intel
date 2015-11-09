/****************************************************************************
** Meta object code from reading C++ file 'QvisSetupHostProfilesAndConfigWindow.h'
**
** Created: Wed Nov 4 16:17:58 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisSetupHostProfilesAndConfigWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisSetupHostProfilesAndConfigWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisSetupHostProfilesAndConfigWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      37,   52,   52,   52, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisSetupHostProfilesAndConfigWindow[] = {
    "QvisSetupHostProfilesAndConfigWindow\0"
    "performSetup()\0\0"
};

void QvisSetupHostProfilesAndConfigWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisSetupHostProfilesAndConfigWindow *_t = static_cast<QvisSetupHostProfilesAndConfigWindow *>(_o);
        switch (_id) {
        case 0: _t->performSetup(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QvisSetupHostProfilesAndConfigWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisSetupHostProfilesAndConfigWindow::staticMetaObject = {
    { &QvisDelayedWindow::staticMetaObject, qt_meta_stringdata_QvisSetupHostProfilesAndConfigWindow,
      qt_meta_data_QvisSetupHostProfilesAndConfigWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisSetupHostProfilesAndConfigWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisSetupHostProfilesAndConfigWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisSetupHostProfilesAndConfigWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisSetupHostProfilesAndConfigWindow))
        return static_cast<void*>(const_cast< QvisSetupHostProfilesAndConfigWindow*>(this));
    return QvisDelayedWindow::qt_metacast(_clname);
}

int QvisSetupHostProfilesAndConfigWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisDelayedWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
