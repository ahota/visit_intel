/****************************************************************************
** Meta object code from reading C++ file 'QvisColorSelectionWidget.h'
**
** Created: Wed Nov 4 16:17:56 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisColorSelectionWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisColorSelectionWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisColorSelectionWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   47,   53,   53, 0x05,

 // slots: signature, parameters, type, tag, flags
      54,   53,   53,   53, 0x0a,
      61,   53,   53,   53, 0x0a,
      68,   53,   53,   53, 0x08,
      85,   47,   53,   53, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisColorSelectionWidget[] = {
    "QvisColorSelectionWidget\0selectedColor(QColor)\0"
    "color\0\0show()\0hide()\0getCustomColor()\0"
    "handleSelectedColor(QColor)\0"
};

void QvisColorSelectionWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisColorSelectionWidget *_t = static_cast<QvisColorSelectionWidget *>(_o);
        switch (_id) {
        case 0: _t->selectedColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 1: _t->show(); break;
        case 2: _t->hide(); break;
        case 3: _t->getCustomColor(); break;
        case 4: _t->handleSelectedColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisColorSelectionWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisColorSelectionWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QvisColorSelectionWidget,
      qt_meta_data_QvisColorSelectionWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisColorSelectionWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisColorSelectionWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisColorSelectionWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisColorSelectionWidget))
        return static_cast<void*>(const_cast< QvisColorSelectionWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QvisColorSelectionWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void QvisColorSelectionWidget::selectedColor(const QColor & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
