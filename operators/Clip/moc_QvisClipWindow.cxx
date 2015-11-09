/****************************************************************************
** Meta object code from reading C++ file 'QvisClipWindow.h'
**
** Created: Wed Nov 4 16:18:49 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisClipWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisClipWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QPlaneGroup[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   28,   28,   28, 0x05,
      29,   28,   28,   28, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QPlaneGroup[] = {
    "QPlaneGroup\0OriginChanged()\0\0"
    "NormalChanged()\0"
};

void QPlaneGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QPlaneGroup *_t = static_cast<QPlaneGroup *>(_o);
        switch (_id) {
        case 0: _t->OriginChanged(); break;
        case 1: _t->NormalChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QPlaneGroup::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QPlaneGroup::staticMetaObject = {
    { &QGroupBox::staticMetaObject, qt_meta_stringdata_QPlaneGroup,
      qt_meta_data_QPlaneGroup, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QPlaneGroup::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QPlaneGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QPlaneGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QPlaneGroup))
        return static_cast<void*>(const_cast< QPlaneGroup*>(this));
    return QGroupBox::qt_metacast(_clname);
}

int QPlaneGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QPlaneGroup::OriginChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QPlaneGroup::NormalChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
static const uint qt_meta_data_QvisClipWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   37,   37,   37, 0x08,
      38,   37,   37,   37, 0x08,
      60,   37,   37,   37, 0x08,
      82,   37,   37,   37, 0x08,
     104,   37,   37,   37, 0x08,
     126,   37,   37,   37, 0x08,
     148,   37,   37,   37, 0x08,
     168,   37,   37,   37, 0x08,
     188,   37,   37,   37, 0x08,
     214,  255,   37,   37, 0x08,
     259,   37,   37,   37, 0x08,
     279,   37,   37,   37, 0x08,
     301,   37,   37,   37, 0x08,
     328,   37,   37,   37, 0x08,
     354,   37,   37,   37, 0x08,
     380,   37,   37,   37, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisClipWindow[] = {
    "QvisClipWindow\0processPlane1Origin()\0"
    "\0processPlane2Origin()\0processPlane3Origin()\0"
    "processPlane1Normal()\0processPlane2Normal()\0"
    "processPlane3Normal()\0processCenterText()\0"
    "processRadiusText()\0planeInverseToggled(bool)\0"
    "planeToolControlledClipPlaneChanged(int)\0"
    "val\0qualityChanged(int)\0sliceTypeChanged(int)\0"
    "sphereInverseToggled(bool)\0"
    "plane1StatusToggled(bool)\0"
    "plane2StatusToggled(bool)\0"
    "plane3StatusToggled(bool)\0"
};

void QvisClipWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisClipWindow *_t = static_cast<QvisClipWindow *>(_o);
        switch (_id) {
        case 0: _t->processPlane1Origin(); break;
        case 1: _t->processPlane2Origin(); break;
        case 2: _t->processPlane3Origin(); break;
        case 3: _t->processPlane1Normal(); break;
        case 4: _t->processPlane2Normal(); break;
        case 5: _t->processPlane3Normal(); break;
        case 6: _t->processCenterText(); break;
        case 7: _t->processRadiusText(); break;
        case 8: _t->planeInverseToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->planeToolControlledClipPlaneChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->qualityChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->sliceTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->sphereInverseToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->plane1StatusToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->plane2StatusToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->plane3StatusToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisClipWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisClipWindow::staticMetaObject = {
    { &QvisOperatorWindow::staticMetaObject, qt_meta_stringdata_QvisClipWindow,
      qt_meta_data_QvisClipWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisClipWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisClipWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisClipWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisClipWindow))
        return static_cast<void*>(const_cast< QvisClipWindow*>(this));
    return QvisOperatorWindow::qt_metacast(_clname);
}

int QvisClipWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisOperatorWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
