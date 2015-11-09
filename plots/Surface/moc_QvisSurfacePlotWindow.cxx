/****************************************************************************
** Meta object code from reading C++ file 'QvisSurfacePlotWindow.h'
**
** Created: Wed Nov 4 16:18:49 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisSurfacePlotWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisSurfacePlotWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisSurfacePlotWindow[] = {

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
     115,  135,   30,   30, 0x08,
     139,  135,   30,   30, 0x08,
     161,  179,   30,   30, 0x08,
     186,  135,   30,   30, 0x08,
     207,  135,   30,   30, 0x08,
     230,  258,   30,   30, 0x08,
     264,  258,   30,   30, 0x08,
     294,   30,   30,   30, 0x08,
     316,   30,   30,   30, 0x08,
     333,   30,   30,   30, 0x08,
     355,   30,   30,   30, 0x08,
     372,   30,   30,   30, 0x08,
     394,   30,   30,   30, 0x08,
     412,  444,   30,   30, 0x08,
     462,  135,   30,   30, 0x08,
     492,   30,   30,   30, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisSurfacePlotWindow[] = {
    "QvisSurfacePlotWindow\0apply()\0\0"
    "makeDefault()\0reset()\0lineStyleChanged(int)\0"
    "newStyle\0lineWidthChanged(int)\0newWidth\0"
    "legendToggled(bool)\0val\0lightingToggled(bool)\0"
    "scaleClicked(int)\0button\0surfaceToggled(bool)\0"
    "wireframeToggled(bool)\0"
    "surfaceColorChanged(QColor)\0color\0"
    "wireframeColorChanged(QColor)\0"
    "colorModeChanged(int)\0minToggled(bool)\0"
    "processMinLimitText()\0maxToggled(bool)\0"
    "processMaxLimitText()\0processSkewText()\0"
    "colorTableClicked(bool,QString)\0"
    "useDefault,ctName\0invertColorTableToggled(bool)\0"
    "limitsSelectChanged(int)\0"
};

void QvisSurfacePlotWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisSurfacePlotWindow *_t = static_cast<QvisSurfacePlotWindow *>(_o);
        switch (_id) {
        case 0: _t->apply(); break;
        case 1: _t->makeDefault(); break;
        case 2: _t->reset(); break;
        case 3: _t->lineStyleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->lineWidthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->legendToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->lightingToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->scaleClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->surfaceToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->wireframeToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->surfaceColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 11: _t->wireframeColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 12: _t->colorModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->minToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->processMinLimitText(); break;
        case 15: _t->maxToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->processMaxLimitText(); break;
        case 17: _t->processSkewText(); break;
        case 18: _t->colorTableClicked((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 19: _t->invertColorTableToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->limitsSelectChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisSurfacePlotWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisSurfacePlotWindow::staticMetaObject = {
    { &QvisPostableWindowObserver::staticMetaObject, qt_meta_stringdata_QvisSurfacePlotWindow,
      qt_meta_data_QvisSurfacePlotWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisSurfacePlotWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisSurfacePlotWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisSurfacePlotWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisSurfacePlotWindow))
        return static_cast<void*>(const_cast< QvisSurfacePlotWindow*>(this));
    return QvisPostableWindowObserver::qt_metacast(_clname);
}

int QvisSurfacePlotWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
