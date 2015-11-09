/****************************************************************************
** Meta object code from reading C++ file 'QvisPointControl.h'
**
** Created: Wed Nov 4 16:17:57 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisPointControl.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisPointControl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisPointControl[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   42,   42,   42, 0x05,
      43,   42,   42,   42, 0x05,
      71,   97,   42,   42, 0x05,
     101,   42,   42,   42, 0x05,
     130,   42,   42,   42, 0x05,

 // slots: signature, parameters, type, tag, flags
     152,   42,   42,   42, 0x08,
     170,   42,   42,   42, 0x08,
     194,  215,   42,   42, 0x08,
     218,   42,   42,   42, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisPointControl[] = {
    "QvisPointControl\0pointSizeChanged(double)\0"
    "\0pointSizePixelsChanged(int)\0"
    "pointSizeVarToggled(bool)\0val\0"
    "pointSizeVarChanged(QString)\0"
    "pointTypeChanged(int)\0processSizeText()\0"
    "sizeVarChanged(QString)\0sizeVarToggled(bool)\0"
    "on\0typeComboBoxChanged(int)\0"
};

void QvisPointControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisPointControl *_t = static_cast<QvisPointControl *>(_o);
        switch (_id) {
        case 0: _t->pointSizeChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->pointSizePixelsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->pointSizeVarToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->pointSizeVarChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->pointTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->processSizeText(); break;
        case 6: _t->sizeVarChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->sizeVarToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->typeComboBoxChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisPointControl::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisPointControl::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QvisPointControl,
      qt_meta_data_QvisPointControl, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisPointControl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisPointControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisPointControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisPointControl))
        return static_cast<void*>(const_cast< QvisPointControl*>(this));
    return QWidget::qt_metacast(_clname);
}

int QvisPointControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void QvisPointControl::pointSizeChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QvisPointControl::pointSizePixelsChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QvisPointControl::pointSizeVarToggled(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QvisPointControl::pointSizeVarChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QvisPointControl::pointTypeChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
