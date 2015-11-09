/****************************************************************************
** Meta object code from reading C++ file 'QvisCracksClipperWindow.h'
**
** Created: Wed Nov 4 16:18:49 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisCracksClipperWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisCracksClipperWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisCracksClipperWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   50,   50,   50, 0x08,
      51,   50,   50,   50, 0x08,
      77,   50,   50,   50, 0x08,
     103,   50,   50,   50, 0x08,
     129,  153,   50,   50, 0x08,
     157,  153,   50,   50, 0x08,
     181,  153,   50,   50, 0x08,
     205,   50,   50,   50, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisCracksClipperWindow[] = {
    "QvisCracksClipperWindow\0"
    "crack1VarChanged(QString)\0\0"
    "crack2VarChanged(QString)\0"
    "crack3VarChanged(QString)\0"
    "strainVarChanged(QString)\0"
    "showCrack1Changed(bool)\0val\0"
    "showCrack2Changed(bool)\0showCrack3Changed(bool)\0"
    "inMassVarChanged(QString)\0"
};

void QvisCracksClipperWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisCracksClipperWindow *_t = static_cast<QvisCracksClipperWindow *>(_o);
        switch (_id) {
        case 0: _t->crack1VarChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->crack2VarChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->crack3VarChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->strainVarChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->showCrack1Changed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->showCrack2Changed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->showCrack3Changed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->inMassVarChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisCracksClipperWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisCracksClipperWindow::staticMetaObject = {
    { &QvisOperatorWindow::staticMetaObject, qt_meta_stringdata_QvisCracksClipperWindow,
      qt_meta_data_QvisCracksClipperWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisCracksClipperWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisCracksClipperWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisCracksClipperWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisCracksClipperWindow))
        return static_cast<void*>(const_cast< QvisCracksClipperWindow*>(this));
    return QvisOperatorWindow::qt_metacast(_clname);
}

int QvisCracksClipperWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisOperatorWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
