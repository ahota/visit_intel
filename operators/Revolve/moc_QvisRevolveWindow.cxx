/****************************************************************************
** Meta object code from reading C++ file 'QvisRevolveWindow.h'
**
** Created: Wed Nov 4 16:19:18 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisRevolveWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisRevolveWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisRevolveWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   39,   43,   43, 0x08,
      44,   39,   43,   43, 0x08,
      66,   43,   43,   43, 0x08,
      84,   43,   43,   43, 0x08,
     108,   43,   43,   43, 0x08,
     131,   43,   43,   43, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisRevolveWindow[] = {
    "QvisRevolveWindow\0meshTypeChanged(int)\0"
    "val\0\0autoAxisChanged(bool)\0axisProcessText()\0"
    "startAngleProcessText()\0stopAngleProcessText()\0"
    "stepsProcessText()\0"
};

void QvisRevolveWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisRevolveWindow *_t = static_cast<QvisRevolveWindow *>(_o);
        switch (_id) {
        case 0: _t->meshTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->autoAxisChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->axisProcessText(); break;
        case 3: _t->startAngleProcessText(); break;
        case 4: _t->stopAngleProcessText(); break;
        case 5: _t->stepsProcessText(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisRevolveWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisRevolveWindow::staticMetaObject = {
    { &QvisOperatorWindow::staticMetaObject, qt_meta_stringdata_QvisRevolveWindow,
      qt_meta_data_QvisRevolveWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisRevolveWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisRevolveWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisRevolveWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisRevolveWindow))
        return static_cast<void*>(const_cast< QvisRevolveWindow*>(this));
    return QvisOperatorWindow::qt_metacast(_clname);
}

int QvisRevolveWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisOperatorWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
