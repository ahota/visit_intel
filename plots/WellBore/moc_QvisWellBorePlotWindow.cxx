/****************************************************************************
** Meta object code from reading C++ file 'QvisWellBorePlotWindow.h'
**
** Created: Wed Nov 4 16:18:50 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisWellBorePlotWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisWellBorePlotWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisWellBorePlotWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   31,   31,   31, 0x0a,
      32,   31,   31,   31, 0x0a,
      46,   31,   31,   31, 0x0a,
      54,   31,   31,   31, 0x08,
      83,   31,   31,   31, 0x08,
     113,   31,   31,   31, 0x08,
     140,   31,   31,   31, 0x08,
     163,   31,   31,   31, 0x08,
     189,  218,   31,   31, 0x08,
     224,   31,   31,   31, 0x08,
     252,  274,   31,   31, 0x08,
     280,  218,   31,   31, 0x08,
     307,  338,   31,   31, 0x08,
     346,  379,   31,   31, 0x08,
     391,  415,   31,   31, 0x08,
     429,  461,   31,   31, 0x08,
     479,  509,   31,   31, 0x08,
     513,  509,   31,   31, 0x08,
     537,  509,   31,   31, 0x08,
     569,   31,   31,   31, 0x08,
     593,  619,   31,   31, 0x08,
     625,  619,   31,   31, 0x08,
     651,  509,   31,   31, 0x08,
     678,   31,   31,   31, 0x08,
     706,   31,   31,   31, 0x08,
     733,  509,   31,   31, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisWellBorePlotWindow[] = {
    "QvisWellBorePlotWindow\0apply()\0\0"
    "makeDefault()\0reset()\0"
    "readWellBoresButtonPressed()\0"
    "writeWellBoresButtonPressed()\0"
    "wellListSelectionChanged()\0"
    "newWellButtonPressed()\0deleteWellButtonPressed()\0"
    "wellNameTextChanged(QString)\0color\0"
    "wellDefinitionTextChanged()\0"
    "colorModeChanged(int)\0index\0"
    "singleColorChanged(QColor)\0"
    "singleColorOpacityChanged(int)\0opacity\0"
    "multipleColorChanged(QColor,int)\0"
    "color,index\0opacityChanged(int,int)\0"
    "opacity,index\0colorTableClicked(bool,QString)\0"
    "useDefault,ctName\0invertColorTableToggled(bool)\0"
    "val\0drawWellsAsChanged(int)\0"
    "wellCylinderQualityChanged(int)\0"
    "wellRadiusProcessText()\0"
    "wellLineWidthChanged(int)\0style\0"
    "wellLineStyleChanged(int)\0"
    "wellAnnotationChanged(int)\0"
    "wellStemHeightProcessText()\0"
    "wellNameScaleProcessText()\0"
    "legendFlagChanged(bool)\0"
};

void QvisWellBorePlotWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisWellBorePlotWindow *_t = static_cast<QvisWellBorePlotWindow *>(_o);
        switch (_id) {
        case 0: _t->apply(); break;
        case 1: _t->makeDefault(); break;
        case 2: _t->reset(); break;
        case 3: _t->readWellBoresButtonPressed(); break;
        case 4: _t->writeWellBoresButtonPressed(); break;
        case 5: _t->wellListSelectionChanged(); break;
        case 6: _t->newWellButtonPressed(); break;
        case 7: _t->deleteWellButtonPressed(); break;
        case 8: _t->wellNameTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->wellDefinitionTextChanged(); break;
        case 10: _t->colorModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->singleColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 12: _t->singleColorOpacityChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->multipleColorChanged((*reinterpret_cast< const QColor(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: _t->opacityChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 15: _t->colorTableClicked((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 16: _t->invertColorTableToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->drawWellsAsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->wellCylinderQualityChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->wellRadiusProcessText(); break;
        case 20: _t->wellLineWidthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->wellLineStyleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->wellAnnotationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->wellStemHeightProcessText(); break;
        case 24: _t->wellNameScaleProcessText(); break;
        case 25: _t->legendFlagChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisWellBorePlotWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisWellBorePlotWindow::staticMetaObject = {
    { &QvisPostableWindowObserver::staticMetaObject, qt_meta_stringdata_QvisWellBorePlotWindow,
      qt_meta_data_QvisWellBorePlotWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisWellBorePlotWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisWellBorePlotWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisWellBorePlotWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisWellBorePlotWindow))
        return static_cast<void*>(const_cast< QvisWellBorePlotWindow*>(this));
    return QvisPostableWindowObserver::qt_metacast(_clname);
}

int QvisWellBorePlotWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisPostableWindowObserver::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
