/****************************************************************************
** Meta object code from reading C++ file 'QvisAppearanceWindow.h'
**
** Created: Wed Nov 4 16:17:56 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisAppearanceWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisAppearanceWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisAppearanceWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   44,   44,   44, 0x05,

 // slots: signature, parameters, type, tag, flags
      45,   44,   44,   44, 0x0a,
      53,   80,   44,   44, 0x08,
      84,  110,   44,   44, 0x08,
     113,  139,   44,   44, 0x08,
     142,  160,   44,   44, 0x08,
     166,   44,   44,   44, 0x08,
     191,  160,   44,   44, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisAppearanceWindow[] = {
    "QvisAppearanceWindow\0changeAppearance(bool)\0"
    "\0apply()\0useSysDefaultChanged(bool)\0"
    "val\0backgroundChanged(QColor)\0bg\0"
    "foregroundChanged(QColor)\0fg\0"
    "styleChanged(int)\0index\0"
    "fontNameChanged(QString)\0"
    "orientationChanged(int)\0"
};

void QvisAppearanceWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisAppearanceWindow *_t = static_cast<QvisAppearanceWindow *>(_o);
        switch (_id) {
        case 0: _t->changeAppearance((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->apply(); break;
        case 2: _t->useSysDefaultChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->backgroundChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 4: _t->foregroundChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 5: _t->styleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->fontNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->orientationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisAppearanceWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisAppearanceWindow::staticMetaObject = {
    { &QvisPostableWindowObserver::staticMetaObject, qt_meta_stringdata_QvisAppearanceWindow,
      qt_meta_data_QvisAppearanceWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisAppearanceWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisAppearanceWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisAppearanceWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisAppearanceWindow))
        return static_cast<void*>(const_cast< QvisAppearanceWindow*>(this));
    return QvisPostableWindowObserver::qt_metacast(_clname);
}

int QvisAppearanceWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisPostableWindowObserver::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void QvisAppearanceWindow::changeAppearance(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
