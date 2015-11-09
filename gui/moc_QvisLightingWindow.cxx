/****************************************************************************
** Meta object code from reading C++ file 'QvisLightingWindow.h'
**
** Created: Wed Nov 4 16:17:57 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisLightingWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisLightingWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisLightingWindow[] = {

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
      19,   27,   27,   27, 0x08,
      28,   27,   27,   27, 0x08,
      42,   27,   27,   27, 0x08,
      50,   27,   27,   27, 0x08,
      82,   27,   27,   27, 0x08,
     105,   27,   27,   27, 0x08,
     129,   27,   27,   27, 0x08,
     149,  182,   27,   27, 0x08,
     188,   27,   27,   27, 0x08,
     218,   27,   27,   27, 0x08,
     235,   27,   27,   27, 0x08,
     262,   27,   27,   27, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisLightingWindow[] = {
    "QvisLightingWindow\0apply()\0\0makeDefault()\0"
    "reset()\0activeLightComboBoxChanged(int)\0"
    "brightnessChanged(int)\0brightnessChanged2(int)\0"
    "enableToggled(bool)\0"
    "lightMoved(double,double,double)\0x,y,z\0"
    "lightTypeComboBoxChanged(int)\0"
    "modeClicked(int)\0processLineDirectionText()\0"
    "selectedLightColor(QColor)\0"
};

void QvisLightingWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisLightingWindow *_t = static_cast<QvisLightingWindow *>(_o);
        switch (_id) {
        case 0: _t->apply(); break;
        case 1: _t->makeDefault(); break;
        case 2: _t->reset(); break;
        case 3: _t->activeLightComboBoxChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->brightnessChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->brightnessChanged2((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->enableToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->lightMoved((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 8: _t->lightTypeComboBoxChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->modeClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->processLineDirectionText(); break;
        case 11: _t->selectedLightColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisLightingWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisLightingWindow::staticMetaObject = {
    { &QvisPostableWindowObserver::staticMetaObject, qt_meta_stringdata_QvisLightingWindow,
      qt_meta_data_QvisLightingWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisLightingWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisLightingWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisLightingWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisLightingWindow))
        return static_cast<void*>(const_cast< QvisLightingWindow*>(this));
    return QvisPostableWindowObserver::qt_metacast(_clname);
}

int QvisLightingWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisPostableWindowObserver::qt_metacall(_c, _id, _a);
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
