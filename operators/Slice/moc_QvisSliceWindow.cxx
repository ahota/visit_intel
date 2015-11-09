/****************************************************************************
** Meta object code from reading C++ file 'QvisSliceWindow.h'
**
** Created: Wed Nov 4 16:19:18 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisSliceWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisSliceWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisSliceWindow[] = {

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
      16,   36,   36,   36, 0x08,
      37,   36,   36,   36, 0x08,
      59,   36,   36,   36, 0x08,
      79,   36,   36,   36, 0x08,
     100,   36,   36,   36, 0x08,
     125,   36,   36,   36, 0x08,
     149,  172,   36,   36, 0x08,
     178,  172,   36,   36, 0x08,
     201,   36,   36,   36, 0x08,
     226,   36,   36,   36, 0x08,
     255,   36,   36,   36, 0x08,
     282,   36,   36,   36, 0x08,
     306,   36,   36,   36, 0x08,
     330,   36,   36,   36, 0x08,
     360,   36,   36,   36, 0x08,
     390,   36,   36,   36, 0x08,
     419,   36,   36,   36, 0x08,
     449,  481,   36,   36, 0x08,
     485,   36,   36,   36, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisSliceWindow[] = {
    "QvisSliceWindow\0processNormalText()\0"
    "\0processThetaPhiText()\0processUpAxisText()\0"
    "projectToggled(bool)\0interactiveToggled(bool)\0"
    "flipNormalToggled(bool)\0normalTypeChanged(int)\0"
    "index\0originTypeChanged(int)\0"
    "processOriginPointText()\0"
    "processOriginInterceptText()\0"
    "processOriginPercentText()\0"
    "processOriginZoneText()\0processOriginNodeText()\0"
    "processOriginZoneDomainText()\0"
    "processOriginNodeDomainText()\0"
    "originPercentSliderPressed()\0"
    "originPercentSliderReleased()\0"
    "originPercentSliderChanged(int)\0pct\0"
    "meshNameChanged()\0"
};

void QvisSliceWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisSliceWindow *_t = static_cast<QvisSliceWindow *>(_o);
        switch (_id) {
        case 0: _t->processNormalText(); break;
        case 1: _t->processThetaPhiText(); break;
        case 2: _t->processUpAxisText(); break;
        case 3: _t->projectToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->interactiveToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->flipNormalToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->normalTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->originTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->processOriginPointText(); break;
        case 9: _t->processOriginInterceptText(); break;
        case 10: _t->processOriginPercentText(); break;
        case 11: _t->processOriginZoneText(); break;
        case 12: _t->processOriginNodeText(); break;
        case 13: _t->processOriginZoneDomainText(); break;
        case 14: _t->processOriginNodeDomainText(); break;
        case 15: _t->originPercentSliderPressed(); break;
        case 16: _t->originPercentSliderReleased(); break;
        case 17: _t->originPercentSliderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->meshNameChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisSliceWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisSliceWindow::staticMetaObject = {
    { &QvisOperatorWindow::staticMetaObject, qt_meta_stringdata_QvisSliceWindow,
      qt_meta_data_QvisSliceWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisSliceWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisSliceWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisSliceWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisSliceWindow))
        return static_cast<void*>(const_cast< QvisSliceWindow*>(this));
    return QvisOperatorWindow::qt_metacast(_clname);
}

int QvisSliceWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
