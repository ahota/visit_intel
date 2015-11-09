/****************************************************************************
** Meta object code from reading C++ file 'QvisExtrudeWindow.h'
**
** Created: Wed Nov 4 16:19:10 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisExtrudeWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisExtrudeWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisExtrudeWindow[] = {

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
      18,   36,   36,   36, 0x08,
      37,   36,   36,   36, 0x08,
      57,   36,   36,   36, 0x08,
      76,  117,   36,   36, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisExtrudeWindow[] = {
    "QvisExtrudeWindow\0axisProcessText()\0"
    "\0lengthProcessText()\0stepsProcessText()\0"
    "preserveOriginalCellNumbersChanged(bool)\0"
    "val\0"
};

void QvisExtrudeWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisExtrudeWindow *_t = static_cast<QvisExtrudeWindow *>(_o);
        switch (_id) {
        case 0: _t->axisProcessText(); break;
        case 1: _t->lengthProcessText(); break;
        case 2: _t->stepsProcessText(); break;
        case 3: _t->preserveOriginalCellNumbersChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisExtrudeWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisExtrudeWindow::staticMetaObject = {
    { &QvisOperatorWindow::staticMetaObject, qt_meta_stringdata_QvisExtrudeWindow,
      qt_meta_data_QvisExtrudeWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisExtrudeWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisExtrudeWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisExtrudeWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisExtrudeWindow))
        return static_cast<void*>(const_cast< QvisExtrudeWindow*>(this));
    return QvisOperatorWindow::qt_metacast(_clname);
}

int QvisExtrudeWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisOperatorWindow::qt_metacall(_c, _id, _a);
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
