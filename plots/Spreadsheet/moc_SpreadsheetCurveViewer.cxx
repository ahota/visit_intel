/****************************************************************************
** Meta object code from reading C++ file 'SpreadsheetCurveViewer.h'
**
** Created: Wed Nov 4 16:33:15 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "SpreadsheetCurveViewer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SpreadsheetCurveViewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SpreadsheetCurveViewer[] = {

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
      23,   35,   35,   35, 0x08,
      36,   35,   35,   35, 0x08,
      54,   35,   35,   35, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SpreadsheetCurveViewer[] = {
    "SpreadsheetCurveViewer\0saveCurve()\0\0"
    "copyToClipboard()\0operationPlot()\0"
};

void SpreadsheetCurveViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SpreadsheetCurveViewer *_t = static_cast<SpreadsheetCurveViewer *>(_o);
        switch (_id) {
        case 0: _t->saveCurve(); break;
        case 1: _t->copyToClipboard(); break;
        case 2: _t->operationPlot(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SpreadsheetCurveViewer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SpreadsheetCurveViewer::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_SpreadsheetCurveViewer,
      qt_meta_data_SpreadsheetCurveViewer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SpreadsheetCurveViewer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SpreadsheetCurveViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SpreadsheetCurveViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SpreadsheetCurveViewer))
        return static_cast<void*>(const_cast< SpreadsheetCurveViewer*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int SpreadsheetCurveViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
