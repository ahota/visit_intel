/****************************************************************************
** Meta object code from reading C++ file 'QvisContourPlotWindow.h'
**
** Created: Wed Nov 4 16:18:49 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisContourPlotWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisContourPlotWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisContourPlotWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   30,   30,   30, 0x0a,
      31,   30,   30,   30, 0x0a,
      45,   30,   30,   30, 0x0a,
      53,   75,   30,   30, 0x08,
      84,  106,   30,   30, 0x08,
     115,  142,   30,   30, 0x08,
     148,  179,   30,   30, 0x08,
     187,  220,   30,   30, 0x08,
     232,  264,   30,   30, 0x08,
     282,  312,   30,   30, 0x08,
     316,  340,   30,   30, 0x08,
     354,  376,   30,   30, 0x08,
     382,  400,   30,   30, 0x08,
     406,   30,   30,   30, 0x08,
     427,   30,   30,   30, 0x08,
     449,   30,   30,   30, 0x08,
     466,   30,   30,   30, 0x08,
     488,   30,   30,   30, 0x08,
     505,   30,   30,   30, 0x08,
     527,  312,   30,   30, 0x08,
     550,  312,   30,   30, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisContourPlotWindow[] = {
    "QvisContourPlotWindow\0apply()\0\0"
    "makeDefault()\0reset()\0lineStyleChanged(int)\0"
    "newStyle\0lineWidthChanged(int)\0newWidth\0"
    "singleColorChanged(QColor)\0color\0"
    "singleColorOpacityChanged(int)\0opacity\0"
    "multipleColorChanged(QColor,int)\0"
    "color,index\0colorTableClicked(bool,QString)\0"
    "useDefault,ctName\0invertColorTableToggled(bool)\0"
    "val\0opacityChanged(int,int)\0opacity,index\0"
    "colorModeChanged(int)\0index\0"
    "scaleClicked(int)\0scale\0selectByChanged(int)\0"
    "processSelectByText()\0minToggled(bool)\0"
    "processMinLimitText()\0maxToggled(bool)\0"
    "processMaxLimitText()\0wireframeToggled(bool)\0"
    "legendToggled(bool)\0"
};

void QvisContourPlotWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisContourPlotWindow *_t = static_cast<QvisContourPlotWindow *>(_o);
        switch (_id) {
        case 0: _t->apply(); break;
        case 1: _t->makeDefault(); break;
        case 2: _t->reset(); break;
        case 3: _t->lineStyleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->lineWidthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->singleColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 6: _t->singleColorOpacityChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->multipleColorChanged((*reinterpret_cast< const QColor(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->colorTableClicked((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 9: _t->invertColorTableToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->opacityChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->colorModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->scaleClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->selectByChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->processSelectByText(); break;
        case 15: _t->minToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->processMinLimitText(); break;
        case 17: _t->maxToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->processMaxLimitText(); break;
        case 19: _t->wireframeToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->legendToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisContourPlotWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisContourPlotWindow::staticMetaObject = {
    { &QvisPostableWindowObserver::staticMetaObject, qt_meta_stringdata_QvisContourPlotWindow,
      qt_meta_data_QvisContourPlotWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisContourPlotWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisContourPlotWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisContourPlotWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisContourPlotWindow))
        return static_cast<void*>(const_cast< QvisContourPlotWindow*>(this));
    return QvisPostableWindowObserver::qt_metacast(_clname);
}

int QvisContourPlotWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisPostableWindowObserver::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
