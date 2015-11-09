/****************************************************************************
** Meta object code from reading C++ file 'QvisScribbleOpacityBar.h'
**
** Created: Wed Nov 4 16:17:58 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisScribbleOpacityBar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisScribbleOpacityBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisScribbleOpacityBar[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   42,   42,   42, 0x05,

 // slots: signature, parameters, type, tag, flags
      43,   42,   42,   42, 0x0a,
      61,   42,   42,   42, 0x0a,
      78,   42,   42,   42, 0x0a,
     102,   42,   42,   42, 0x0a,
     119,   42,   42,   42, 0x0a,
     133,   42,   42,   42, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QvisScribbleOpacityBar[] = {
    "QvisScribbleOpacityBar\0opacitiesChanged()\0"
    "\0makeTotallyZero()\0makeLinearRamp()\0"
    "makeInverseLinearRamp()\0makeTotallyOne()\0"
    "smoothCurve()\0makeTent()\0"
};

void QvisScribbleOpacityBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisScribbleOpacityBar *_t = static_cast<QvisScribbleOpacityBar *>(_o);
        switch (_id) {
        case 0: _t->opacitiesChanged(); break;
        case 1: _t->makeTotallyZero(); break;
        case 2: _t->makeLinearRamp(); break;
        case 3: _t->makeInverseLinearRamp(); break;
        case 4: _t->makeTotallyOne(); break;
        case 5: _t->smoothCurve(); break;
        case 6: _t->makeTent(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QvisScribbleOpacityBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisScribbleOpacityBar::staticMetaObject = {
    { &QvisAbstractOpacityBar::staticMetaObject, qt_meta_stringdata_QvisScribbleOpacityBar,
      qt_meta_data_QvisScribbleOpacityBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisScribbleOpacityBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisScribbleOpacityBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisScribbleOpacityBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisScribbleOpacityBar))
        return static_cast<void*>(const_cast< QvisScribbleOpacityBar*>(this));
    return QvisAbstractOpacityBar::qt_metacast(_clname);
}

int QvisScribbleOpacityBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisAbstractOpacityBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void QvisScribbleOpacityBar::opacitiesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
