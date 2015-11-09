/****************************************************************************
** Meta object code from reading C++ file 'QvisDataBinningWindow.h'
**
** Created: Wed Nov 4 16:19:05 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisDataBinningWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisDataBinningWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisDataBinningWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   48,   52,   52, 0x08,
      53,   77,   52,   52, 0x08,
      85,   52,   52,   52, 0x08,
     115,   52,   52,   52, 0x08,
     141,   52,   52,   52, 0x08,
     167,   52,   52,   52, 0x08,
     192,   52,   52,   52, 0x08,
     219,   77,   52,   52, 0x08,
     243,   52,   52,   52, 0x08,
     273,   52,   52,   52, 0x08,
     299,   52,   52,   52, 0x08,
     325,   52,   52,   52, 0x08,
     350,   52,   52,   52, 0x08,
     377,   77,   52,   52, 0x08,
     401,   52,   52,   52, 0x08,
     431,   52,   52,   52, 0x08,
     457,   52,   52,   52, 0x08,
     483,   52,   52,   52, 0x08,
     508,   52,   52,   52, 0x08,
     535,   48,   52,   52, 0x08,
     567,   48,   52,   52, 0x08,
     586,   48,   52,   52, 0x08,
     616,   77,   52,   52, 0x08,
     648,   52,   52,   52, 0x08,
     670,   52,   52,   52, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisDataBinningWindow[] = {
    "QvisDataBinningWindow\0numDimensionsChanged(int)\0"
    "val\0\0dim1VarChanged(QString)\0varName\0"
    "dim1SpecifyRangeToggled(bool)\0"
    "dim1MinRangeProcessText()\0"
    "dim1MaxRangeProcessText()\0"
    "dim1NumBinsProcessText()\0"
    "dim1BinBasedOnChanged(int)\0"
    "dim2VarChanged(QString)\0"
    "dim2SpecifyRangeToggled(bool)\0"
    "dim2MinRangeProcessText()\0"
    "dim2MaxRangeProcessText()\0"
    "dim2NumBinsProcessText()\0"
    "dim2BinBasedOnChanged(int)\0"
    "dim3VarChanged(QString)\0"
    "dim3SpecifyRangeToggled(bool)\0"
    "dim3MinRangeProcessText()\0"
    "dim3MaxRangeProcessText()\0"
    "dim3NumBinsProcessText()\0"
    "dim3BinBasedOnChanged(int)\0"
    "outOfBoundsBehaviorChanged(int)\0"
    "outputChanged(int)\0reductionOperatorClicked(int)\0"
    "varForReductionChanged(QString)\0"
    "emptyValProcessText()\0"
    "removeEmptyBinsToggled(bool)\0"
};

void QvisDataBinningWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisDataBinningWindow *_t = static_cast<QvisDataBinningWindow *>(_o);
        switch (_id) {
        case 0: _t->numDimensionsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->dim1VarChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->dim1SpecifyRangeToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->dim1MinRangeProcessText(); break;
        case 4: _t->dim1MaxRangeProcessText(); break;
        case 5: _t->dim1NumBinsProcessText(); break;
        case 6: _t->dim1BinBasedOnChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->dim2VarChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->dim2SpecifyRangeToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->dim2MinRangeProcessText(); break;
        case 10: _t->dim2MaxRangeProcessText(); break;
        case 11: _t->dim2NumBinsProcessText(); break;
        case 12: _t->dim2BinBasedOnChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->dim3VarChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->dim3SpecifyRangeToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->dim3MinRangeProcessText(); break;
        case 16: _t->dim3MaxRangeProcessText(); break;
        case 17: _t->dim3NumBinsProcessText(); break;
        case 18: _t->dim3BinBasedOnChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->outOfBoundsBehaviorChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->outputChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->reductionOperatorClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->varForReductionChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 23: _t->emptyValProcessText(); break;
        case 24: _t->removeEmptyBinsToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisDataBinningWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisDataBinningWindow::staticMetaObject = {
    { &QvisOperatorWindow::staticMetaObject, qt_meta_stringdata_QvisDataBinningWindow,
      qt_meta_data_QvisDataBinningWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisDataBinningWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisDataBinningWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisDataBinningWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisDataBinningWindow))
        return static_cast<void*>(const_cast< QvisDataBinningWindow*>(this));
    return QvisOperatorWindow::qt_metacast(_clname);
}

int QvisDataBinningWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisOperatorWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
