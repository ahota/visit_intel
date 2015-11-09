/****************************************************************************
** Meta object code from reading C++ file 'QvisTransformWindow.h'
**
** Created: Wed Nov 4 16:19:24 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisTransformWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisTransformWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisTransformWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   42,   46,   46, 0x08,
      47,   46,   46,   46, 0x08,
      73,   46,   46,   46, 0x08,
      97,   46,   46,   46, 0x08,
     123,   42,   46,   46, 0x08,
     146,   42,   46,   46, 0x08,
     167,   46,   46,   46, 0x08,
     192,   46,   46,   46, 0x08,
     212,   46,   46,   46, 0x08,
     232,   46,   46,   46, 0x08,
     252,   42,   46,   46, 0x08,
     277,   46,   46,   46, 0x08,
     301,   46,   46,   46, 0x08,
     325,   46,   46,   46, 0x08,
     349,   46,   46,   46, 0x08,
     365,   46,   46,   46, 0x08,
     388,   46,   46,   46, 0x08,
     412,   42,   46,   46, 0x08,
     439,   46,   46,   46, 0x08,
     459,   42,   46,   46, 0x08,
     485,   42,   46,   46, 0x08,
     515,   46,   46,   46, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisTransformWindow[] = {
    "QvisTransformWindow\0doRotateChanged(bool)\0"
    "val\0\0rotateOriginProcessText()\0"
    "rotateAxisProcessText()\0"
    "rotateAmountProcessText()\0"
    "rotateTypeChanged(int)\0doScaleChanged(bool)\0"
    "scaleOriginProcessText()\0scaleXProcessText()\0"
    "scaleYProcessText()\0scaleZProcessText()\0"
    "doTranslateChanged(bool)\0"
    "translateXProcessText()\0translateYProcessText()\0"
    "translateZProcessText()\0pageTurned(int)\0"
    "inputCoordChanged(int)\0outputCoordChanged(int)\0"
    "continuousPhiChanged(bool)\0"
    "ltElementtChanged()\0linearInvertChanged(bool)\0"
    "transformVectorsChanged(bool)\0"
    "vectorMethodChanged(int)\0"
};

void QvisTransformWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisTransformWindow *_t = static_cast<QvisTransformWindow *>(_o);
        switch (_id) {
        case 0: _t->doRotateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->rotateOriginProcessText(); break;
        case 2: _t->rotateAxisProcessText(); break;
        case 3: _t->rotateAmountProcessText(); break;
        case 4: _t->rotateTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->doScaleChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->scaleOriginProcessText(); break;
        case 7: _t->scaleXProcessText(); break;
        case 8: _t->scaleYProcessText(); break;
        case 9: _t->scaleZProcessText(); break;
        case 10: _t->doTranslateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->translateXProcessText(); break;
        case 12: _t->translateYProcessText(); break;
        case 13: _t->translateZProcessText(); break;
        case 14: _t->pageTurned((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->inputCoordChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->outputCoordChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->continuousPhiChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->ltElementtChanged(); break;
        case 19: _t->linearInvertChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->transformVectorsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->vectorMethodChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisTransformWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisTransformWindow::staticMetaObject = {
    { &QvisOperatorWindow::staticMetaObject, qt_meta_stringdata_QvisTransformWindow,
      qt_meta_data_QvisTransformWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisTransformWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisTransformWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisTransformWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisTransformWindow))
        return static_cast<void*>(const_cast< QvisTransformWindow*>(this));
    return QvisOperatorWindow::qt_metacast(_clname);
}

int QvisTransformWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisOperatorWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
