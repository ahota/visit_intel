/****************************************************************************
** Meta object code from reading C++ file 'QvisIsovolumeWindow.h'
**
** Created: Wed Nov 4 16:19:11 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisIsovolumeWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisIsovolumeWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisIsovolumeWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   40,   40,   40, 0x08,
      41,   40,   40,   40, 0x08,
      61,   86,   40,   40, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisIsovolumeWindow[] = {
    "QvisIsovolumeWindow\0lboundProcessText()\0"
    "\0uboundProcessText()\0variableChanged(QString)\0"
    "varName\0"
};

void QvisIsovolumeWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisIsovolumeWindow *_t = static_cast<QvisIsovolumeWindow *>(_o);
        switch (_id) {
        case 0: _t->lboundProcessText(); break;
        case 1: _t->uboundProcessText(); break;
        case 2: _t->variableChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisIsovolumeWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisIsovolumeWindow::staticMetaObject = {
    { &QvisOperatorWindow::staticMetaObject, qt_meta_stringdata_QvisIsovolumeWindow,
      qt_meta_data_QvisIsovolumeWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisIsovolumeWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisIsovolumeWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisIsovolumeWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisIsovolumeWindow))
        return static_cast<void*>(const_cast< QvisIsovolumeWindow*>(this));
    return QvisOperatorWindow::qt_metacast(_clname);
}

int QvisIsovolumeWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisOperatorWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
