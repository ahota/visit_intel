/****************************************************************************
** Meta object code from reading C++ file 'QvisBoxWindow.h'
**
** Created: Wed Nov 4 16:18:49 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisBoxWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisBoxWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisBoxWindow[] = {

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
      14,   33,   37,   37, 0x08,
      38,   37,   37,   37, 0x08,
      56,   37,   37,   37, 0x08,
      74,   37,   37,   37, 0x08,
      92,   37,   37,   37, 0x08,
     110,   37,   37,   37, 0x08,
     128,   37,   37,   37, 0x08,
     146,   33,   37,   37, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisBoxWindow[] = {
    "QvisBoxWindow\0amountChanged(int)\0val\0"
    "\0minxProcessText()\0maxxProcessText()\0"
    "minyProcessText()\0maxyProcessText()\0"
    "minzProcessText()\0maxzProcessText()\0"
    "inverseChanged(bool)\0"
};

void QvisBoxWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisBoxWindow *_t = static_cast<QvisBoxWindow *>(_o);
        switch (_id) {
        case 0: _t->amountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->minxProcessText(); break;
        case 2: _t->maxxProcessText(); break;
        case 3: _t->minyProcessText(); break;
        case 4: _t->maxyProcessText(); break;
        case 5: _t->minzProcessText(); break;
        case 6: _t->maxzProcessText(); break;
        case 7: _t->inverseChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisBoxWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisBoxWindow::staticMetaObject = {
    { &QvisOperatorWindow::staticMetaObject, qt_meta_stringdata_QvisBoxWindow,
      qt_meta_data_QvisBoxWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisBoxWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisBoxWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisBoxWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisBoxWindow))
        return static_cast<void*>(const_cast< QvisBoxWindow*>(this));
    return QvisOperatorWindow::qt_metacast(_clname);
}

int QvisBoxWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
