/****************************************************************************
** Meta object code from reading C++ file 'QvisStatisticalTrendsWindow.h'
**
** Created: Wed Nov 4 16:19:21 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisStatisticalTrendsWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisStatisticalTrendsWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisStatisticalTrendsWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      28,   52,   52,   52, 0x08,
      53,   52,   52,   52, 0x08,
      76,   52,   52,   52, 0x08,
      96,  123,   52,   52, 0x08,
     127,  123,   52,   52, 0x08,
     153,   52,   52,   52, 0x08,
     175,   52,   52,   52, 0x08,
     198,  123,   52,   52, 0x08,
     224,  123,   52,   52, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisStatisticalTrendsWindow[] = {
    "QvisStatisticalTrendsWindow\0"
    "startIndexProcessText()\0\0"
    "stopIndexProcessText()\0strideProcessText()\0"
    "startTrendTypeChanged(int)\0val\0"
    "stopTrendTypeChanged(int)\0"
    "updateStopIndexText()\0updateStartIndexText()\0"
    "statisticTypeChanged(int)\0"
    "trendAxisChanged(int)\0"
};

void QvisStatisticalTrendsWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisStatisticalTrendsWindow *_t = static_cast<QvisStatisticalTrendsWindow *>(_o);
        switch (_id) {
        case 0: _t->startIndexProcessText(); break;
        case 1: _t->stopIndexProcessText(); break;
        case 2: _t->strideProcessText(); break;
        case 3: _t->startTrendTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->stopTrendTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->updateStopIndexText(); break;
        case 6: _t->updateStartIndexText(); break;
        case 7: _t->statisticTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->trendAxisChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisStatisticalTrendsWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisStatisticalTrendsWindow::staticMetaObject = {
    { &QvisOperatorWindow::staticMetaObject, qt_meta_stringdata_QvisStatisticalTrendsWindow,
      qt_meta_data_QvisStatisticalTrendsWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisStatisticalTrendsWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisStatisticalTrendsWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisStatisticalTrendsWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisStatisticalTrendsWindow))
        return static_cast<void*>(const_cast< QvisStatisticalTrendsWindow*>(this));
    return QvisOperatorWindow::qt_metacast(_clname);
}

int QvisStatisticalTrendsWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisOperatorWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
