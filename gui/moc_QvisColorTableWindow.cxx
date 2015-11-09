/****************************************************************************
** Meta object code from reading C++ file 'QvisColorTableWindow.h'
**
** Created: Wed Nov 4 16:17:56 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisColorTableWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisColorTableWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisColorTableWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   29,   29,   29, 0x0a,
      30,   29,   29,   29, 0x08,
      52,   29,   29,   29, 0x08,
      75,   96,   29,   29, 0x08,
      98,  121,   29,   29, 0x08,
     123,  145,   29,   29, 0x08,
     147,  145,   29,   29, 0x08,
     170,  204,   29,   29, 0x08,
     206,  235,   29,   29, 0x08,
     241,  204,   29,   29, 0x08,
     275,  318,   29,   29, 0x08,
     322,   29,   29,   29, 0x08,
     338,   29,   29,   29, 0x08,
     355,  384,   29,   29, 0x08,
     387,  384,   29,   29, 0x08,
     414,   29,   29,   29, 0x08,
     435,  464,   29,   29, 0x08,
     479,  501,   29,   29, 0x08,
     507,  535,   29,   29, 0x08,
     539,  535,   29,   29, 0x08,
     565,   29,   29,   29, 0x08,
     581,   29,   29,   29, 0x08,
     600,   29,   29,   29, 0x08,
     619,  204,   29,   29, 0x08,
     674,  535,   29,   29, 0x08,
     702,  535,   29,   29, 0x08,
     724,   29,   29,   29, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisColorTableWindow[] = {
    "QvisColorTableWindow\0apply()\0\0"
    "resizeColorTable(int)\0setColorTableType(int)\0"
    "redValueChanged(int)\0r\0greenValueChanged(int)\0"
    "g\0blueValueChanged(int)\0b\0"
    "alphaValueChanged(int)\0"
    "activateDiscreteColor(QColor,int)\0,\0"
    "activateContinuousColor(int)\0index\0"
    "chooseContinuousColor(int,QPoint)\0"
    "chooseDiscreteColor(QColor,int,int,QPoint)\0"
    ",,,\0sliderPressed()\0sliderReleased()\0"
    "setActiveContinuous(QString)\0ct\0"
    "setActiveDiscrete(QString)\0"
    "alignControlPoints()\0controlPointMoved(int,float)\0"
    "index,position\0selectedColor(QColor)\0"
    "color\0smoothingMethodChanged(int)\0val\0"
    "equalSpacingToggled(bool)\0addColorTable()\0"
    "deleteColorTable()\0exportColorTable()\0"
    "highlightColorTable(QTreeWidgetItem*,QTreeWidgetItem*)\0"
    "showIndexHintsToggled(bool)\0"
    "groupingToggled(bool)\0ApplyCategoryChange()\0"
};

void QvisColorTableWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisColorTableWindow *_t = static_cast<QvisColorTableWindow *>(_o);
        switch (_id) {
        case 0: _t->apply(); break;
        case 1: _t->resizeColorTable((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setColorTableType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->redValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->greenValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->blueValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->alphaValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->activateDiscreteColor((*reinterpret_cast< const QColor(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->activateContinuousColor((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->chooseContinuousColor((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2]))); break;
        case 10: _t->chooseDiscreteColor((*reinterpret_cast< const QColor(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QPoint(*)>(_a[4]))); break;
        case 11: _t->sliderPressed(); break;
        case 12: _t->sliderReleased(); break;
        case 13: _t->setActiveContinuous((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->setActiveDiscrete((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->alignControlPoints(); break;
        case 16: _t->controlPointMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 17: _t->selectedColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 18: _t->smoothingMethodChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->equalSpacingToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->addColorTable(); break;
        case 21: _t->deleteColorTable(); break;
        case 22: _t->exportColorTable(); break;
        case 23: _t->highlightColorTable((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 24: _t->showIndexHintsToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->groupingToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->ApplyCategoryChange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisColorTableWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisColorTableWindow::staticMetaObject = {
    { &QvisPostableWindowObserver::staticMetaObject, qt_meta_stringdata_QvisColorTableWindow,
      qt_meta_data_QvisColorTableWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisColorTableWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisColorTableWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisColorTableWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisColorTableWindow))
        return static_cast<void*>(const_cast< QvisColorTableWindow*>(this));
    return QvisPostableWindowObserver::qt_metacast(_clname);
}

int QvisColorTableWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisPostableWindowObserver::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
