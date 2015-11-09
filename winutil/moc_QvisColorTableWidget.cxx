/****************************************************************************
** Meta object code from reading C++ file 'QvisColorTableWidget.h'
**
** Created: Wed Nov 4 16:17:49 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisColorTableWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisColorTableWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisColorTableWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   54,   72,   72, 0x05,
      73,   72,   72,   72, 0x05,

 // slots: signature, parameters, type, tag, flags
     103,   54,   72,   72, 0x08,
     142,   72,   72,   72, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisColorTableWidget[] = {
    "QvisColorTableWidget\0"
    "selectedColorTable(bool,QString)\0"
    "useDefault,ctName\0\0invertColorTableToggled(bool)\0"
    "handleSelectedColorTable(bool,QString)\0"
    "invertToggled(bool)\0"
};

void QvisColorTableWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisColorTableWidget *_t = static_cast<QvisColorTableWidget *>(_o);
        switch (_id) {
        case 0: _t->selectedColorTable((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->invertColorTableToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->handleSelectedColorTable((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->invertToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisColorTableWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisColorTableWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QvisColorTableWidget,
      qt_meta_data_QvisColorTableWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisColorTableWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisColorTableWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisColorTableWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisColorTableWidget))
        return static_cast<void*>(const_cast< QvisColorTableWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QvisColorTableWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QvisColorTableWidget::selectedColorTable(bool _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QvisColorTableWidget::invertColorTableToggled(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
