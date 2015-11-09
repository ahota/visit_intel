/****************************************************************************
** Meta object code from reading C++ file 'QvisCylinderWindow.h'
**
** Created: Wed Nov 4 16:19:05 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisCylinderWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisCylinderWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisCylinderWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   39,   39,   39, 0x08,
      40,   39,   39,   39, 0x08,
      60,   39,   39,   39, 0x08,
      80,  101,   39,   39, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisCylinderWindow[] = {
    "QvisCylinderWindow\0point1ProcessText()\0"
    "\0point2ProcessText()\0radiusProcessText()\0"
    "inverseChanged(bool)\0val\0"
};

void QvisCylinderWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisCylinderWindow *_t = static_cast<QvisCylinderWindow *>(_o);
        switch (_id) {
        case 0: _t->point1ProcessText(); break;
        case 1: _t->point2ProcessText(); break;
        case 2: _t->radiusProcessText(); break;
        case 3: _t->inverseChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisCylinderWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisCylinderWindow::staticMetaObject = {
    { &QvisOperatorWindow::staticMetaObject, qt_meta_stringdata_QvisCylinderWindow,
      qt_meta_data_QvisCylinderWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisCylinderWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisCylinderWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisCylinderWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisCylinderWindow))
        return static_cast<void*>(const_cast< QvisCylinderWindow*>(this));
    return QvisOperatorWindow::qt_metacast(_clname);
}

int QvisCylinderWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisOperatorWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
