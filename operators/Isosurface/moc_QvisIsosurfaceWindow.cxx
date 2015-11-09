/****************************************************************************
** Meta object code from reading C++ file 'QvisIsosurfaceWindow.h'
**
** Created: Wed Nov 4 16:19:11 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisIsosurfaceWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisIsosurfaceWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisIsosurfaceWindow[] = {

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
      21,   39,   45,   45, 0x08,
      46,   45,   45,   45, 0x08,
      67,   45,   45,   45, 0x08,
      89,   45,   45,   45, 0x08,
     106,   45,   45,   45, 0x08,
     128,   45,   45,   45, 0x08,
     145,   45,   45,   45, 0x08,
     167,   45,   45,   45, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisIsosurfaceWindow[] = {
    "QvisIsosurfaceWindow\0scaleClicked(int)\0"
    "scale\0\0selectByChanged(int)\0"
    "processSelectByText()\0minToggled(bool)\0"
    "processMinLimitText()\0maxToggled(bool)\0"
    "processMaxLimitText()\0variableChanged(QString)\0"
};

void QvisIsosurfaceWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisIsosurfaceWindow *_t = static_cast<QvisIsosurfaceWindow *>(_o);
        switch (_id) {
        case 0: _t->scaleClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->selectByChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->processSelectByText(); break;
        case 3: _t->minToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->processMinLimitText(); break;
        case 5: _t->maxToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->processMaxLimitText(); break;
        case 7: _t->variableChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisIsosurfaceWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisIsosurfaceWindow::staticMetaObject = {
    { &QvisOperatorWindow::staticMetaObject, qt_meta_stringdata_QvisIsosurfaceWindow,
      qt_meta_data_QvisIsosurfaceWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisIsosurfaceWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisIsosurfaceWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisIsosurfaceWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisIsosurfaceWindow))
        return static_cast<void*>(const_cast< QvisIsosurfaceWindow*>(this));
    return QvisOperatorWindow::qt_metacast(_clname);
}

int QvisIsosurfaceWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
