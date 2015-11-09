/****************************************************************************
** Meta object code from reading C++ file 'QvisStripChartTabWidget.h'
**
** Created: Wed Nov 4 16:17:58 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisStripChartTabWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisStripChartTabWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisStripChartTabWidget[] = {

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
      24,   32,   32,   32, 0x0a,
      33,   32,   32,   32, 0x0a,
      42,   32,   32,   32, 0x0a,
      52,   32,   32,   32, 0x0a,
      60,   32,   32,   32, 0x0a,
      83,  119,   32,   32, 0x0a,
     132,  160,   32,   32, 0x0a,
     168,  210,   32,   32, 0x0a,
     223,  257,   32,   32, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QvisStripChartTabWidget[] = {
    "QvisStripChartTabWidget\0reset()\0\0"
    "zoomIn()\0zoomOut()\0focus()\0"
    "updateCurrentTabData()\0"
    "enableOutOfBandLimits(QString,bool)\0"
    "name,enabled\0enableOutOfBandLimits(bool)\0"
    "enabled\0setOutOfBandLimits(QString,double,double)\0"
    "name,min,max\0setOutOfBandLimits(double,double)\0"
    "min,max\0"
};

void QvisStripChartTabWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisStripChartTabWidget *_t = static_cast<QvisStripChartTabWidget *>(_o);
        switch (_id) {
        case 0: _t->reset(); break;
        case 1: _t->zoomIn(); break;
        case 2: _t->zoomOut(); break;
        case 3: _t->focus(); break;
        case 4: _t->updateCurrentTabData(); break;
        case 5: _t->enableOutOfBandLimits((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->enableOutOfBandLimits((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setOutOfBandLimits((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 8: _t->setOutOfBandLimits((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisStripChartTabWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisStripChartTabWidget::staticMetaObject = {
    { &QTabWidget::staticMetaObject, qt_meta_stringdata_QvisStripChartTabWidget,
      qt_meta_data_QvisStripChartTabWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisStripChartTabWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisStripChartTabWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisStripChartTabWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisStripChartTabWidget))
        return static_cast<void*>(const_cast< QvisStripChartTabWidget*>(this));
    return QTabWidget::qt_metacast(_clname);
}

int QvisStripChartTabWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabWidget::qt_metacall(_c, _id, _a);
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
