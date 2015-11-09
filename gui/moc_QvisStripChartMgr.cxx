/****************************************************************************
** Meta object code from reading C++ file 'QvisStripChartMgr.h'
**
** Created: Wed Nov 4 16:17:58 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisStripChartMgr.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisStripChartMgr.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisStripChartMgr[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   26,   26,   26, 0x0a,
      27,   26,   26,   26, 0x0a,
      36,   26,   26,   26, 0x0a,
      46,   26,   26,   26, 0x0a,
      54,   26,   26,   26, 0x0a,
      77,   26,   26,   26, 0x0a,
      84,   26,   26,   26, 0x0a,
      93,   26,   26,   26, 0x09,
     121,   26,   26,   26, 0x09,
     149,  195,   26,   26, 0x09,
     205,   26,   26,   26, 0x09,
     237,   26,   26,   26, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QvisStripChartMgr[] = {
    "QvisStripChartMgr\0reset()\0\0zoomIn()\0"
    "zoomOut()\0focus()\0updateCurrentTabData()\0"
    "post()\0unpost()\0executeMaxLimitStripChart()\0"
    "executeMinLimitStripChart()\0"
    "setMinMaxStripChartDataDisplay(double,double)\0"
    "minY,maxY\0executeEnableStripChartLimits()\0"
    "executeEnableLogScale()\0"
};

void QvisStripChartMgr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisStripChartMgr *_t = static_cast<QvisStripChartMgr *>(_o);
        switch (_id) {
        case 0: _t->reset(); break;
        case 1: _t->zoomIn(); break;
        case 2: _t->zoomOut(); break;
        case 3: _t->focus(); break;
        case 4: _t->updateCurrentTabData(); break;
        case 5: _t->post(); break;
        case 6: _t->unpost(); break;
        case 7: _t->executeMaxLimitStripChart(); break;
        case 8: _t->executeMinLimitStripChart(); break;
        case 9: _t->setMinMaxStripChartDataDisplay((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 10: _t->executeEnableStripChartLimits(); break;
        case 11: _t->executeEnableLogScale(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisStripChartMgr::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisStripChartMgr::staticMetaObject = {
    { &QvisPostableWindow::staticMetaObject, qt_meta_stringdata_QvisStripChartMgr,
      qt_meta_data_QvisStripChartMgr, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisStripChartMgr::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisStripChartMgr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisStripChartMgr::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisStripChartMgr))
        return static_cast<void*>(const_cast< QvisStripChartMgr*>(this));
    return QvisPostableWindow::qt_metacast(_clname);
}

int QvisStripChartMgr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisPostableWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
