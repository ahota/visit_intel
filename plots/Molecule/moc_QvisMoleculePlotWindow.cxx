/****************************************************************************
** Meta object code from reading C++ file 'QvisMoleculePlotWindow.h'
**
** Created: Wed Nov 4 16:18:49 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisMoleculePlotWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisMoleculePlotWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisMoleculePlotWindow[] = {

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
      23,   31,   31,   31, 0x0a,
      32,   31,   31,   31, 0x0a,
      46,   31,   31,   31, 0x0a,
      54,   78,   31,   31, 0x08,
      82,   78,   31,   31, 0x08,
     108,   78,   31,   31, 0x08,
     132,   78,   31,   31, 0x08,
     155,  186,   31,   31, 0x08,
     192,  223,   31,   31, 0x08,
     231,   31,   31,   31, 0x08,
     262,   31,   31,   31, 0x08,
     287,   78,   31,   31, 0x08,
     317,   78,   31,   31, 0x08,
     349,   31,   31,   31, 0x08,
     373,  399,   31,   31, 0x08,
     405,  399,   31,   31, 0x08,
     431,  470,   31,   31, 0x08,
     488,  470,   31,   31, 0x08,
     531,  470,   31,   31, 0x08,
     578,  470,   31,   31, 0x08,
     620,   78,   31,   31, 0x08,
     640,   78,   31,   31, 0x08,
     661,   31,   31,   31, 0x08,
     684,   78,   31,   31, 0x08,
     705,   31,   31,   31, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisMoleculePlotWindow[] = {
    "QvisMoleculePlotWindow\0apply()\0\0"
    "makeDefault()\0reset()\0drawAtomsAsChanged(int)\0"
    "val\0scaleRadiusByChanged(int)\0"
    "drawBondsAsChanged(int)\0colorBondsChanged(int)\0"
    "bondSingleColorChanged(QColor)\0color\0"
    "radiusVariableChanged(QString)\0varName\0"
    "radiusScaleFactorProcessText()\0"
    "radiusFixedProcessText()\0"
    "atomSphereQualityChanged(int)\0"
    "bondCylinderQualityChanged(int)\0"
    "bondRadiusProcessText()\0"
    "bondLineWidthChanged(int)\0style\0"
    "bondLineStyleChanged(int)\0"
    "elementColorTableChanged(bool,QString)\0"
    "useDefault,ctName\0"
    "residueTypeColorTableChanged(bool,QString)\0"
    "residueSequenceColorTableChanged(bool,QString)\0"
    "continuousColorTableChanged(bool,QString)\0"
    "legendToggled(bool)\0minFlagChanged(bool)\0"
    "scalarMinProcessText()\0maxFlagChanged(bool)\0"
    "scalarMaxProcessText()\0"
};

void QvisMoleculePlotWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisMoleculePlotWindow *_t = static_cast<QvisMoleculePlotWindow *>(_o);
        switch (_id) {
        case 0: _t->apply(); break;
        case 1: _t->makeDefault(); break;
        case 2: _t->reset(); break;
        case 3: _t->drawAtomsAsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->scaleRadiusByChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->drawBondsAsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->colorBondsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->bondSingleColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 8: _t->radiusVariableChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->radiusScaleFactorProcessText(); break;
        case 10: _t->radiusFixedProcessText(); break;
        case 11: _t->atomSphereQualityChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->bondCylinderQualityChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->bondRadiusProcessText(); break;
        case 14: _t->bondLineWidthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->bondLineStyleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->elementColorTableChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 17: _t->residueTypeColorTableChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 18: _t->residueSequenceColorTableChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 19: _t->continuousColorTableChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 20: _t->legendToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->minFlagChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->scalarMinProcessText(); break;
        case 23: _t->maxFlagChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->scalarMaxProcessText(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisMoleculePlotWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisMoleculePlotWindow::staticMetaObject = {
    { &QvisPostableWindowObserver::staticMetaObject, qt_meta_stringdata_QvisMoleculePlotWindow,
      qt_meta_data_QvisMoleculePlotWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisMoleculePlotWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisMoleculePlotWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisMoleculePlotWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisMoleculePlotWindow))
        return static_cast<void*>(const_cast< QvisMoleculePlotWindow*>(this));
    return QvisPostableWindowObserver::qt_metacast(_clname);
}

int QvisMoleculePlotWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisPostableWindowObserver::qt_metacall(_c, _id, _a);
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
