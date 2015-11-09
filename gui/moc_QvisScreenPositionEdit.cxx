/****************************************************************************
** Meta object code from reading C++ file 'QvisScreenPositionEdit.h'
**
** Created: Wed Nov 4 16:17:58 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisScreenPositionEdit.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisScreenPositionEdit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisScreenPositionEdit[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   60,   62,   62, 0x05,

 // slots: signature, parameters, type, tag, flags
      63,   62,   62,   62, 0x09,
      76,  109,   62,   62, 0x09,
     113,   62,   62,   62, 0x09,
     121,   60,   62,   62, 0x09,
     147,   62,   62,   62, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QvisScreenPositionEdit[] = {
    "QvisScreenPositionEdit\0"
    "screenPositionChanged(double,double)\0"
    ",\0\0closePopup()\0newScreenPosition(double,double)\0"
    "x,y\0popup()\0updateText(double,double)\0"
    "returnPressed()\0"
};

void QvisScreenPositionEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisScreenPositionEdit *_t = static_cast<QvisScreenPositionEdit *>(_o);
        switch (_id) {
        case 0: _t->screenPositionChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 1: _t->closePopup(); break;
        case 2: _t->newScreenPosition((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 3: _t->popup(); break;
        case 4: _t->updateText((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 5: _t->returnPressed(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisScreenPositionEdit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisScreenPositionEdit::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QvisScreenPositionEdit,
      qt_meta_data_QvisScreenPositionEdit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisScreenPositionEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisScreenPositionEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisScreenPositionEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisScreenPositionEdit))
        return static_cast<void*>(const_cast< QvisScreenPositionEdit*>(this));
    return QWidget::qt_metacast(_clname);
}

int QvisScreenPositionEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QvisScreenPositionEdit::screenPositionChanged(double _t1, double _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
