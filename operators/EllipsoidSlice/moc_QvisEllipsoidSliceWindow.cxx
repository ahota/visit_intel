/****************************************************************************
** Meta object code from reading C++ file 'QvisEllipsoidSliceWindow.h'
**
** Created: Wed Nov 4 16:19:09 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisEllipsoidSliceWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisEllipsoidSliceWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisEllipsoidSliceWindow[] = {

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
      25,   45,   45,   45, 0x08,
      46,   45,   45,   45, 0x08,
      65,   45,   45,   45, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisEllipsoidSliceWindow[] = {
    "QvisEllipsoidSliceWindow\0originProcessText()\0"
    "\0radiiProcessText()\0rotationAngleProcessText()\0"
};

void QvisEllipsoidSliceWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisEllipsoidSliceWindow *_t = static_cast<QvisEllipsoidSliceWindow *>(_o);
        switch (_id) {
        case 0: _t->originProcessText(); break;
        case 1: _t->radiiProcessText(); break;
        case 2: _t->rotationAngleProcessText(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QvisEllipsoidSliceWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisEllipsoidSliceWindow::staticMetaObject = {
    { &QvisOperatorWindow::staticMetaObject, qt_meta_stringdata_QvisEllipsoidSliceWindow,
      qt_meta_data_QvisEllipsoidSliceWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisEllipsoidSliceWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisEllipsoidSliceWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisEllipsoidSliceWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisEllipsoidSliceWindow))
        return static_cast<void*>(const_cast< QvisEllipsoidSliceWindow*>(this));
    return QvisOperatorWindow::qt_metacast(_clname);
}

int QvisEllipsoidSliceWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
