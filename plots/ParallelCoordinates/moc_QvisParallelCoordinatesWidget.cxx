/****************************************************************************
** Meta object code from reading C++ file 'QvisParallelCoordinatesWidget.h'
**
** Created: Wed Nov 4 16:18:50 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisParallelCoordinatesWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisParallelCoordinatesWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisParallelCoordinatesWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      30,   37,   37,   37, 0x0a,
      38,   37,   37,   37, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QvisParallelCoordinatesWidget[] = {
    "QvisParallelCoordinatesWidget\0show()\0"
    "\0hide()\0"
};

void QvisParallelCoordinatesWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisParallelCoordinatesWidget *_t = static_cast<QvisParallelCoordinatesWidget *>(_o);
        switch (_id) {
        case 0: _t->show(); break;
        case 1: _t->hide(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QvisParallelCoordinatesWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisParallelCoordinatesWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QvisParallelCoordinatesWidget,
      qt_meta_data_QvisParallelCoordinatesWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisParallelCoordinatesWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisParallelCoordinatesWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisParallelCoordinatesWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisParallelCoordinatesWidget))
        return static_cast<void*>(const_cast< QvisParallelCoordinatesWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QvisParallelCoordinatesWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
