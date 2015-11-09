/****************************************************************************
** Meta object code from reading C++ file 'QvisConeWindow.h'
**
** Created: Wed Nov 4 16:18:49 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisConeWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisConeWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisConeWindow[] = {

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
      15,   34,   34,   34, 0x08,
      35,   34,   34,   34, 0x08,
      55,   34,   34,   34, 0x08,
      75,  102,   34,   34, 0x08,
     106,   34,   34,   34, 0x08,
     126,  102,   34,   34, 0x08,
     151,   34,   34,   34, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisConeWindow[] = {
    "QvisConeWindow\0angleProcessText()\0\0"
    "originProcessText()\0normalProcessText()\0"
    "representationChanged(int)\0val\0"
    "upAxisProcessText()\0cutByLengthChanged(bool)\0"
    "lengthProcessText()\0"
};

void QvisConeWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisConeWindow *_t = static_cast<QvisConeWindow *>(_o);
        switch (_id) {
        case 0: _t->angleProcessText(); break;
        case 1: _t->originProcessText(); break;
        case 2: _t->normalProcessText(); break;
        case 3: _t->representationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->upAxisProcessText(); break;
        case 5: _t->cutByLengthChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->lengthProcessText(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisConeWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisConeWindow::staticMetaObject = {
    { &QvisOperatorWindow::staticMetaObject, qt_meta_stringdata_QvisConeWindow,
      qt_meta_data_QvisConeWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisConeWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisConeWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisConeWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisConeWindow))
        return static_cast<void*>(const_cast< QvisConeWindow*>(this));
    return QvisOperatorWindow::qt_metacast(_clname);
}

int QvisConeWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
