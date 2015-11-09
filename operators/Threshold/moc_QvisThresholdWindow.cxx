/****************************************************************************
** Meta object code from reading C++ file 'QvisThresholdWindow.h'
**
** Created: Wed Nov 4 16:19:24 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisThresholdWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisThresholdWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisThresholdWindow[] = {

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
      20,   49,   63,   63, 0x08,
      64,   63,   63,   63, 0x08,
      90,  117,   63,   63, 0x08,
     126,   63,   63,   63, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisThresholdWindow[] = {
    "QvisThresholdWindow\0variableAddedToList(QString)\0"
    "variableToAdd\0\0selectedVariableDeleted()\0"
    "outputMeshTypeChanged(int)\0buttonID\0"
    "apply()\0"
};

void QvisThresholdWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisThresholdWindow *_t = static_cast<QvisThresholdWindow *>(_o);
        switch (_id) {
        case 0: _t->variableAddedToList((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->selectedVariableDeleted(); break;
        case 2: _t->outputMeshTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->apply(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisThresholdWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisThresholdWindow::staticMetaObject = {
    { &QvisOperatorWindow::staticMetaObject, qt_meta_stringdata_QvisThresholdWindow,
      qt_meta_data_QvisThresholdWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisThresholdWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisThresholdWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisThresholdWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisThresholdWindow))
        return static_cast<void*>(const_cast< QvisThresholdWindow*>(this));
    return QvisOperatorWindow::qt_metacast(_clname);
}

int QvisThresholdWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
