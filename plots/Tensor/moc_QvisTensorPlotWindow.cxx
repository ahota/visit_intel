/****************************************************************************
** Meta object code from reading C++ file 'QvisTensorPlotWindow.h'
**
** Created: Wed Nov 4 16:18:50 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisTensorPlotWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisTensorPlotWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisTensorPlotWindow[] = {

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
      21,   29,   29,   29, 0x0a,
      30,   29,   29,   29, 0x0a,
      44,   29,   29,   29, 0x0a,
      52,   79,   29,   29, 0x08,
      85,   29,   29,   29, 0x08,
     104,  134,   29,   29, 0x08,
     137,  134,   29,   29, 0x08,
     160,  185,   29,   29, 0x08,
     191,   29,   29,   29, 0x08,
     213,   29,   29,   29, 0x08,
     233,  134,   29,   29, 0x08,
     253,   29,   29,   29, 0x08,
     275,  307,   29,   29, 0x08,
     325,  355,   29,   29, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisTensorPlotWindow[] = {
    "QvisTensorPlotWindow\0apply()\0\0"
    "makeDefault()\0reset()\0tensorColorChanged(QColor)\0"
    "color\0processScaleText()\0"
    "scaleByMagnitudeToggled(bool)\0on\0"
    "autoScaleToggled(bool)\0reduceMethodChanged(int)\0"
    "index\0processNTensorsText()\0"
    "processStrideText()\0legendToggled(bool)\0"
    "colorModeChanged(int)\0"
    "colorTableClicked(bool,QString)\0"
    "useDefault,ctName\0invertColorTableToggled(bool)\0"
    "val\0"
};

void QvisTensorPlotWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisTensorPlotWindow *_t = static_cast<QvisTensorPlotWindow *>(_o);
        switch (_id) {
        case 0: _t->apply(); break;
        case 1: _t->makeDefault(); break;
        case 2: _t->reset(); break;
        case 3: _t->tensorColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 4: _t->processScaleText(); break;
        case 5: _t->scaleByMagnitudeToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->autoScaleToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->reduceMethodChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->processNTensorsText(); break;
        case 9: _t->processStrideText(); break;
        case 10: _t->legendToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->colorModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->colorTableClicked((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 13: _t->invertColorTableToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisTensorPlotWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisTensorPlotWindow::staticMetaObject = {
    { &QvisPostableWindowObserver::staticMetaObject, qt_meta_stringdata_QvisTensorPlotWindow,
      qt_meta_data_QvisTensorPlotWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisTensorPlotWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisTensorPlotWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisTensorPlotWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisTensorPlotWindow))
        return static_cast<void*>(const_cast< QvisTensorPlotWindow*>(this));
    return QvisPostableWindowObserver::qt_metacast(_clname);
}

int QvisTensorPlotWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
