/****************************************************************************
** Meta object code from reading C++ file 'QvisSmoothWindow.h'
**
** Created: Wed Nov 4 16:19:18 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisSmoothWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisSmoothWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisSmoothWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   44,   44,   44, 0x08,
      45,   44,   44,   44, 0x08,
      75,   44,   44,   44, 0x08,
     100,  130,   44,   44, 0x08,
     134,   44,   44,   44, 0x08,
     160,   44,   44,   44, 0x08,
     183,  130,   44,   44, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisSmoothWindow[] = {
    "QvisSmoothWindow\0numIterationsProcessText()\0"
    "\0relaxationFactorProcessText()\0"
    "convergenceProcessText()\0"
    "maintainFeaturesChanged(bool)\0val\0"
    "featureAngleProcessText()\0"
    "edgeAngleProcessText()\0"
    "smoothBoundariesChanged(bool)\0"
};

void QvisSmoothWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisSmoothWindow *_t = static_cast<QvisSmoothWindow *>(_o);
        switch (_id) {
        case 0: _t->numIterationsProcessText(); break;
        case 1: _t->relaxationFactorProcessText(); break;
        case 2: _t->convergenceProcessText(); break;
        case 3: _t->maintainFeaturesChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->featureAngleProcessText(); break;
        case 5: _t->edgeAngleProcessText(); break;
        case 6: _t->smoothBoundariesChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisSmoothWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisSmoothWindow::staticMetaObject = {
    { &QvisOperatorWindow::staticMetaObject, qt_meta_stringdata_QvisSmoothWindow,
      qt_meta_data_QvisSmoothWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisSmoothWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisSmoothWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisSmoothWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisSmoothWindow))
        return static_cast<void*>(const_cast< QvisSmoothWindow*>(this));
    return QvisOperatorWindow::qt_metacast(_clname);
}

int QvisSmoothWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisOperatorWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
