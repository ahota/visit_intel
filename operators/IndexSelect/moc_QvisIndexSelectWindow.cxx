/****************************************************************************
** Meta object code from reading C++ file 'QvisIndexSelectWindow.h'
**
** Created: Wed Nov 4 16:19:11 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisIndexSelectWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisIndexSelectWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisIndexSelectWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   38,   42,   42, 0x08,
      43,   63,   42,   42, 0x08,
      67,   87,   42,   42, 0x08,
      91,   42,   42,   42, 0x28,
     108,  129,   42,   42, 0x08,
     134,   38,   42,   42, 0x08,
     156,   63,   42,   42, 0x08,
     176,   87,   42,   42, 0x08,
     196,   42,   42,   42, 0x28,
     213,  129,   42,   42, 0x08,
     234,   38,   42,   42, 0x08,
     256,   63,   42,   42, 0x08,
     278,   87,   42,   42, 0x08,
     300,   42,   42,   42, 0x28,
     319,  129,   42,   42, 0x08,
     342,   38,   42,   42, 0x08,
     366,   38,   42,   42, 0x08,
     398,   42,   42,   42, 0x08,
     423,   42,   42,   42, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisIndexSelectWindow[] = {
    "QvisIndexSelectWindow\0dimChanged(int)\0"
    "val\0\0oneDMinChanged(int)\0min\0"
    "oneDMaxChanged(int)\0max\0oneDMaxChanged()\0"
    "oneDIncrChanged(int)\0incr\0"
    "oneDWrapToggled(bool)\0twoDMinChanged(int)\0"
    "twoDMaxChanged(int)\0twoDMaxChanged()\0"
    "twoDIncrChanged(int)\0twoDWrapToggled(bool)\0"
    "threeDMinChanged(int)\0threeDMaxChanged(int)\0"
    "threeDMaxChanged()\0threeDIncrChanged(int)\0"
    "threeDWrapToggled(bool)\0"
    "useWholeCollectionToggled(bool)\0"
    "categoryChanged(QString)\0"
    "subsetChanged(QString)\0"
};

void QvisIndexSelectWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisIndexSelectWindow *_t = static_cast<QvisIndexSelectWindow *>(_o);
        switch (_id) {
        case 0: _t->dimChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->oneDMinChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->oneDMaxChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->oneDMaxChanged(); break;
        case 4: _t->oneDIncrChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->oneDWrapToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->twoDMinChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->twoDMaxChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->twoDMaxChanged(); break;
        case 9: _t->twoDIncrChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->twoDWrapToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->threeDMinChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->threeDMaxChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->threeDMaxChanged(); break;
        case 14: _t->threeDIncrChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->threeDWrapToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->useWholeCollectionToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->categoryChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->subsetChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisIndexSelectWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisIndexSelectWindow::staticMetaObject = {
    { &QvisOperatorWindow::staticMetaObject, qt_meta_stringdata_QvisIndexSelectWindow,
      qt_meta_data_QvisIndexSelectWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisIndexSelectWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisIndexSelectWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisIndexSelectWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisIndexSelectWindow))
        return static_cast<void*>(const_cast< QvisIndexSelectWindow*>(this));
    return QvisOperatorWindow::qt_metacast(_clname);
}

int QvisIndexSelectWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisOperatorWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
