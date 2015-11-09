/****************************************************************************
** Meta object code from reading C++ file 'QvisSILSetSelector.h'
**
** Created: Wed Nov 4 16:17:58 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisSILSetSelector.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisSILSetSelector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisSILSetSelector[] = {

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
      19,   44,   44,   44, 0x05,
      45,   44,   44,   44, 0x05,

 // slots: signature, parameters, type, tag, flags
      68,   44,   44,   44, 0x08,
      90,   44,   44,   44, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisSILSetSelector[] = {
    "QvisSILSetSelector\0categoryChanged(QString)\0"
    "\0subsetChanged(QString)\0categoryNameChanged()\0"
    "subsetNameChanged()\0"
};

void QvisSILSetSelector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisSILSetSelector *_t = static_cast<QvisSILSetSelector *>(_o);
        switch (_id) {
        case 0: _t->categoryChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->subsetChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->categoryNameChanged(); break;
        case 3: _t->subsetNameChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisSILSetSelector::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisSILSetSelector::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QvisSILSetSelector,
      qt_meta_data_QvisSILSetSelector, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisSILSetSelector::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisSILSetSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisSILSetSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisSILSetSelector))
        return static_cast<void*>(const_cast< QvisSILSetSelector*>(this));
    if (!strcmp(_clname, "SimpleObserver"))
        return static_cast< SimpleObserver*>(const_cast< QvisSILSetSelector*>(this));
    if (!strcmp(_clname, "GUIBase"))
        return static_cast< GUIBase*>(const_cast< QvisSILSetSelector*>(this));
    return QWidget::qt_metacast(_clname);
}

int QvisSILSetSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QvisSILSetSelector::categoryChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QvisSILSetSelector::subsetChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
