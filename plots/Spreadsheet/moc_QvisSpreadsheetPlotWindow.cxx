/****************************************************************************
** Meta object code from reading C++ file 'QvisSpreadsheetPlotWindow.h'
**
** Created: Wed Nov 4 16:18:49 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisSpreadsheetPlotWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisSpreadsheetPlotWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisSpreadsheetPlotWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      26,   34,   34,   34, 0x0a,
      35,   34,   34,   34, 0x0a,
      49,   34,   34,   34, 0x0a,
      57,   34,   34,   34, 0x08,
      83,  110,   34,   34, 0x08,
     114,  150,   34,   34, 0x08,
     168,  110,   34,   34, 0x08,
     198,  110,   34,   34, 0x08,
     234,  110,   34,   34, 0x08,
     263,  290,   34,   34, 0x08,
     296,   34,   34,   34, 0x08,
     322,  110,   34,   34, 0x08,
     341,   34,   34,   34, 0x08,
     368,  393,   34,   34, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisSpreadsheetPlotWindow[] = {
    "QvisSpreadsheetPlotWindow\0apply()\0\0"
    "makeDefault()\0reset()\0formatStringProcessText()\0"
    "useColorTableChanged(bool)\0val\0"
    "colorTableNameChanged(bool,QString)\0"
    "useDefault,ctName\0showPatchOutlineChanged(bool)\0"
    "showCurrentCellOutlineChanged(bool)\0"
    "showTracerPlaneChanged(bool)\0"
    "tracerColorChanged(QColor)\0color\0"
    "tracerOpacityChanged(int)\0normalChanged(int)\0"
    "subsetNameChanged(QString)\0"
    "fontNameChanged(QString)\0newFont\0"
};

void QvisSpreadsheetPlotWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisSpreadsheetPlotWindow *_t = static_cast<QvisSpreadsheetPlotWindow *>(_o);
        switch (_id) {
        case 0: _t->apply(); break;
        case 1: _t->makeDefault(); break;
        case 2: _t->reset(); break;
        case 3: _t->formatStringProcessText(); break;
        case 4: _t->useColorTableChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->colorTableNameChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->showPatchOutlineChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->showCurrentCellOutlineChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->showTracerPlaneChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->tracerColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 10: _t->tracerOpacityChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->normalChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->subsetNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->fontNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisSpreadsheetPlotWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisSpreadsheetPlotWindow::staticMetaObject = {
    { &QvisPostableWindowObserver::staticMetaObject, qt_meta_stringdata_QvisSpreadsheetPlotWindow,
      qt_meta_data_QvisSpreadsheetPlotWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisSpreadsheetPlotWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisSpreadsheetPlotWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisSpreadsheetPlotWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisSpreadsheetPlotWindow))
        return static_cast<void*>(const_cast< QvisSpreadsheetPlotWindow*>(this));
    return QvisPostableWindowObserver::qt_metacast(_clname);
}

int QvisSpreadsheetPlotWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisPostableWindowObserver::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
