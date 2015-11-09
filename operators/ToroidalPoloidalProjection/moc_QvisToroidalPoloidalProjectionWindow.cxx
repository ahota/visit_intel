/****************************************************************************
** Meta object code from reading C++ file 'QvisToroidalPoloidalProjectionWindow.h'
**
** Created: Wed Nov 4 16:19:24 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisToroidalPoloidalProjectionWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisToroidalPoloidalProjectionWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisToroidalPoloidalProjectionWindow[] = {

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
      37,   64,   68,   68, 0x08,
      69,   68,   68,   68, 0x08,
      91,   64,   68,   68, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisToroidalPoloidalProjectionWindow[] = {
    "QvisToroidalPoloidalProjectionWindow\0"
    "centroidSourceChanged(int)\0val\0\0"
    "centroidProcessText()\0project2DChanged(bool)\0"
};

void QvisToroidalPoloidalProjectionWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisToroidalPoloidalProjectionWindow *_t = static_cast<QvisToroidalPoloidalProjectionWindow *>(_o);
        switch (_id) {
        case 0: _t->centroidSourceChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->centroidProcessText(); break;
        case 2: _t->project2DChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisToroidalPoloidalProjectionWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisToroidalPoloidalProjectionWindow::staticMetaObject = {
    { &QvisOperatorWindow::staticMetaObject, qt_meta_stringdata_QvisToroidalPoloidalProjectionWindow,
      qt_meta_data_QvisToroidalPoloidalProjectionWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisToroidalPoloidalProjectionWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisToroidalPoloidalProjectionWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisToroidalPoloidalProjectionWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisToroidalPoloidalProjectionWindow))
        return static_cast<void*>(const_cast< QvisToroidalPoloidalProjectionWindow*>(this));
    return QvisOperatorWindow::qt_metacast(_clname);
}

int QvisToroidalPoloidalProjectionWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
