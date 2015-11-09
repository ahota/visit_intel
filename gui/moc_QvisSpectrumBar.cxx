/****************************************************************************
** Meta object code from reading C++ file 'QvisSpectrumBar.h'
**
** Created: Wed Nov 4 16:17:58 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisSpectrumBar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisSpectrumBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisSpectrumBar[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   47,   53,   53, 0x05,
      54,   47,   53,   53, 0x05,
      71,   95,   53,   53, 0x05,
     105,  141,   53,   53, 0x05,
     158,  195,   53,   53, 0x05,
     203,  232,   53,   53, 0x05,
     247,  141,   53,   53, 0x05,

 // slots: signature, parameters, type, tag, flags
     285,   53,   53,   53, 0x0a,
     306,  328,   53,   53, 0x0a,
     332,  328,   53,   53, 0x0a,
     362,   53,   53,   53, 0x0a,
     383,  328,   53,   53, 0x0a,
     401,   53,   53,   53, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisSpectrumBar[] = {
    "QvisSpectrumBar\0activeControlPointChanged(int)\0"
    "index\0\0selectColor(int)\0selectColor(int,QPoint)\0"
    "index,pos\0controlPointAdded(int,QColor,float)\0"
    "index,c,position\0controlPointColorChanged(int,QColor)\0"
    "index,c\0controlPointMoved(int,float)\0"
    "index,position\0controlPointRemoved(int,QColor,float)\0"
    "alignControlPoints()\0setEqualSpacing(bool)\0"
    "val\0setSmoothing(SmoothingMethod)\0"
    "removeControlPoint()\0setEditMode(bool)\0"
    "handlePaging()\0"
};

void QvisSpectrumBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisSpectrumBar *_t = static_cast<QvisSpectrumBar *>(_o);
        switch (_id) {
        case 0: _t->activeControlPointChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->selectColor((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->selectColor((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2]))); break;
        case 3: _t->controlPointAdded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QColor(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 4: _t->controlPointColorChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QColor(*)>(_a[2]))); break;
        case 5: _t->controlPointMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 6: _t->controlPointRemoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QColor(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 7: _t->alignControlPoints(); break;
        case 8: _t->setEqualSpacing((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->setSmoothing((*reinterpret_cast< SmoothingMethod(*)>(_a[1]))); break;
        case 10: _t->removeControlPoint(); break;
        case 11: _t->setEditMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->handlePaging(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisSpectrumBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisSpectrumBar::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QvisSpectrumBar,
      qt_meta_data_QvisSpectrumBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisSpectrumBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisSpectrumBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisSpectrumBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisSpectrumBar))
        return static_cast<void*>(const_cast< QvisSpectrumBar*>(this));
    return QWidget::qt_metacast(_clname);
}

int QvisSpectrumBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void QvisSpectrumBar::activeControlPointChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QvisSpectrumBar::selectColor(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QvisSpectrumBar::selectColor(int _t1, const QPoint & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QvisSpectrumBar::controlPointAdded(int _t1, const QColor & _t2, float _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QvisSpectrumBar::controlPointColorChanged(int _t1, const QColor & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QvisSpectrumBar::controlPointMoved(int _t1, float _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QvisSpectrumBar::controlPointRemoved(int _t1, const QColor & _t2, float _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
