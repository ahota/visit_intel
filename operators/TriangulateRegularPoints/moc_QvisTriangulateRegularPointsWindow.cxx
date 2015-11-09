/****************************************************************************
** Meta object code from reading C++ file 'QvisTriangulateRegularPointsWindow.h'
**
** Created: Wed Nov 4 16:19:25 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisTriangulateRegularPointsWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisTriangulateRegularPointsWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisTriangulateRegularPointsWindow[] = {

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
      35,   64,   68,   68, 0x08,
      69,   68,   68,   68, 0x08,
      95,   64,   68,   68, 0x08,
     124,   68,   68,   68, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisTriangulateRegularPointsWindow[] = {
    "QvisTriangulateRegularPointsWindow\0"
    "useXGridSpacingChanged(bool)\0val\0\0"
    "xGridSpacingProcessText()\0"
    "useYGridSpacingChanged(bool)\0"
    "yGridSpacingProcessText()\0"
};

void QvisTriangulateRegularPointsWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisTriangulateRegularPointsWindow *_t = static_cast<QvisTriangulateRegularPointsWindow *>(_o);
        switch (_id) {
        case 0: _t->useXGridSpacingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->xGridSpacingProcessText(); break;
        case 2: _t->useYGridSpacingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->yGridSpacingProcessText(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisTriangulateRegularPointsWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisTriangulateRegularPointsWindow::staticMetaObject = {
    { &QvisOperatorWindow::staticMetaObject, qt_meta_stringdata_QvisTriangulateRegularPointsWindow,
      qt_meta_data_QvisTriangulateRegularPointsWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisTriangulateRegularPointsWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisTriangulateRegularPointsWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisTriangulateRegularPointsWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisTriangulateRegularPointsWindow))
        return static_cast<void*>(const_cast< QvisTriangulateRegularPointsWindow*>(this));
    return QvisOperatorWindow::qt_metacast(_clname);
}

int QvisTriangulateRegularPointsWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
