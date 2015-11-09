/****************************************************************************
** Meta object code from reading C++ file 'QvisRadialResampleWindow.h'
**
** Created: Wed Nov 4 16:19:18 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisRadialResampleWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisRadialResampleWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisRadialResampleWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   45,   49,   49, 0x08,
      50,   49,   49,   49, 0x08,
      72,   49,   49,   49, 0x08,
      94,   49,   49,   49, 0x08,
     118,   49,   49,   49, 0x08,
     138,   49,   49,   49, 0x08,
     163,   49,   49,   49, 0x08,
     183,   45,   49,   49, 0x08,
     201,   49,   49,   49, 0x08,
     225,   49,   49,   49, 0x08,
     249,   49,   49,   49, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisRadialResampleWindow[] = {
    "QvisRadialResampleWindow\0isFastChanged(bool)\0"
    "val\0\0minThetaProcessText()\0"
    "maxThetaProcessText()\0deltaThetaProcessText()\0"
    "radiusProcessText()\0deltaRadiusProcessText()\0"
    "centerProcessText()\0is3DChanged(bool)\0"
    "minAzimuthProcessText()\0maxAzimuthProcessText()\0"
    "deltaAzimuthProcessText()\0"
};

void QvisRadialResampleWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisRadialResampleWindow *_t = static_cast<QvisRadialResampleWindow *>(_o);
        switch (_id) {
        case 0: _t->isFastChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->minThetaProcessText(); break;
        case 2: _t->maxThetaProcessText(); break;
        case 3: _t->deltaThetaProcessText(); break;
        case 4: _t->radiusProcessText(); break;
        case 5: _t->deltaRadiusProcessText(); break;
        case 6: _t->centerProcessText(); break;
        case 7: _t->is3DChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->minAzimuthProcessText(); break;
        case 9: _t->maxAzimuthProcessText(); break;
        case 10: _t->deltaAzimuthProcessText(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisRadialResampleWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisRadialResampleWindow::staticMetaObject = {
    { &QvisOperatorWindow::staticMetaObject, qt_meta_stringdata_QvisRadialResampleWindow,
      qt_meta_data_QvisRadialResampleWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisRadialResampleWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisRadialResampleWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisRadialResampleWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisRadialResampleWindow))
        return static_cast<void*>(const_cast< QvisRadialResampleWindow*>(this));
    return QvisOperatorWindow::qt_metacast(_clname);
}

int QvisRadialResampleWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisOperatorWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
