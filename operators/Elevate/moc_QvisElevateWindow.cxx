/****************************************************************************
** Meta object code from reading C++ file 'QvisElevateWindow.h'
**
** Created: Wed Nov 4 16:19:09 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisElevateWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisElevateWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisElevateWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   43,   47,   47, 0x08,
      48,   43,   47,   47, 0x08,
      71,   43,   47,   47, 0x08,
      91,   47,   47,   47, 0x08,
     115,   43,   47,   47, 0x08,
     136,   47,   47,   47, 0x08,
     153,   43,   47,   47, 0x08,
     174,   47,   47,   47, 0x08,
     191,   43,   47,   47, 0x08,
     213,  238,   47,   47, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisElevateWindow[] = {
    "QvisElevateWindow\0useXYLimitsChanged(bool)\0"
    "val\0\0limitsModeChanged(int)\0"
    "scalingChanged(int)\0skewFactorProcessText()\0"
    "minFlagChanged(bool)\0minProcessText()\0"
    "maxFlagChanged(bool)\0maxProcessText()\0"
    "zeroFlagChanged(bool)\0variableChanged(QString)\0"
    "varName\0"
};

void QvisElevateWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisElevateWindow *_t = static_cast<QvisElevateWindow *>(_o);
        switch (_id) {
        case 0: _t->useXYLimitsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->limitsModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->scalingChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->skewFactorProcessText(); break;
        case 4: _t->minFlagChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->minProcessText(); break;
        case 6: _t->maxFlagChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->maxProcessText(); break;
        case 8: _t->zeroFlagChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->variableChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisElevateWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisElevateWindow::staticMetaObject = {
    { &QvisOperatorWindow::staticMetaObject, qt_meta_stringdata_QvisElevateWindow,
      qt_meta_data_QvisElevateWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisElevateWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisElevateWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisElevateWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisElevateWindow))
        return static_cast<void*>(const_cast< QvisElevateWindow*>(this));
    return QvisOperatorWindow::qt_metacast(_clname);
}

int QvisElevateWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisOperatorWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
