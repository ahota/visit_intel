/****************************************************************************
** Meta object code from reading C++ file 'SpreadsheetViewer.h'
**
** Created: Wed Nov 4 16:33:15 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "SpreadsheetViewer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SpreadsheetViewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SpreadsheetViewer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   34,   34,   34, 0x08,
      35,   34,   34,   34, 0x08,
      54,   34,   34,   34, 0x08,
      70,   34,   34,   34, 0x08,
      87,   34,   34,   34, 0x08,
     103,   34,   34,   34, 0x08,
     116,   34,   34,   34, 0x08,
     129,   34,   34,   34, 0x08,
     161,   34,   34,   34, 0x08,
     189,   34,   34,   34, 0x08,
     218,   34,   34,   34, 0x08,
     262,   34,   34,   34, 0x08,
     281,  314,   34,   34, 0x08,
     316,   34,   34,   34, 0x08,
     329,   34,   34,   34, 0x08,
     354,   34,   34,   34, 0x08,
     378,   34,   34,   34, 0x08,
     391,   34,   34,   34, 0x08,
     418,   34,   34,   34, 0x08,
     430,   34,   34,   34, 0x08,
     443,   34,   34,   34, 0x08,
     458,   34,   34,   34, 0x08,
     477,   34,   34,   34, 0x08,
     498,   34,   34,   34, 0x08,
     519,   34,   34,   34, 0x08,
     538,   34,   34,   34, 0x08,
     557,   34,   34,   34, 0x08,
     576,   34,   34,   34, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SpreadsheetViewer[] = {
    "SpreadsheetViewer\0formatChanged()\0\0"
    "sliderChanged(int)\0sliderPressed()\0"
    "sliderReleased()\0tabChanged(int)\0"
    "minClicked()\0maxClicked()\0"
    "colorTableCheckBoxToggled(bool)\0"
    "tracerCheckBoxToggled(bool)\0"
    "outlineCheckBoxToggled(bool)\0"
    "showCurrentCellOutlineCheckBoxToggled(bool)\0"
    "normalChanged(int)\0selectedColorTable(bool,QString)\0"
    ",\0postNotify()\0changedVariable(QString)\0"
    "tableSelectionChanged()\0saveAsText()\0"
    "copySelectionToClipboard()\0selectAll()\0"
    "selectNone()\0operationSum()\0"
    "operationAverage()\0operationCurveX(int)\0"
    "operationCurveY(int)\0operationCurveX0()\0"
    "operationCurveY0()\0operationCurveX1()\0"
    "operationCurveY1()\0"
};

void SpreadsheetViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SpreadsheetViewer *_t = static_cast<SpreadsheetViewer *>(_o);
        switch (_id) {
        case 0: _t->formatChanged(); break;
        case 1: _t->sliderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->sliderPressed(); break;
        case 3: _t->sliderReleased(); break;
        case 4: _t->tabChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->minClicked(); break;
        case 6: _t->maxClicked(); break;
        case 7: _t->colorTableCheckBoxToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->tracerCheckBoxToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->outlineCheckBoxToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->showCurrentCellOutlineCheckBoxToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->normalChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->selectedColorTable((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 13: _t->postNotify(); break;
        case 14: _t->changedVariable((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->tableSelectionChanged(); break;
        case 16: _t->saveAsText(); break;
        case 17: _t->copySelectionToClipboard(); break;
        case 18: _t->selectAll(); break;
        case 19: _t->selectNone(); break;
        case 20: _t->operationSum(); break;
        case 21: _t->operationAverage(); break;
        case 22: _t->operationCurveX((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->operationCurveY((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->operationCurveX0(); break;
        case 25: _t->operationCurveY0(); break;
        case 26: _t->operationCurveX1(); break;
        case 27: _t->operationCurveY1(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SpreadsheetViewer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SpreadsheetViewer::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_SpreadsheetViewer,
      qt_meta_data_SpreadsheetViewer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SpreadsheetViewer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SpreadsheetViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SpreadsheetViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SpreadsheetViewer))
        return static_cast<void*>(const_cast< SpreadsheetViewer*>(this));
    if (!strcmp(_clname, "Observer"))
        return static_cast< Observer*>(const_cast< SpreadsheetViewer*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int SpreadsheetViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
