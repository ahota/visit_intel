/****************************************************************************
** Meta object code from reading C++ file 'QvisResampleWindow.h'
**
** Created: Wed Nov 4 16:19:16 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisResampleWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisResampleWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisResampleWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   43,   47,   47, 0x08,
      48,   47,   47,   47, 0x08,
      68,   47,   47,   47, 0x08,
      86,   47,   47,   47, 0x08,
     108,   47,   47,   47, 0x08,
     128,   47,   47,   47, 0x08,
     146,   47,   47,   47, 0x08,
     168,   43,   47,   47, 0x08,
     186,   47,   47,   47, 0x08,
     206,   47,   47,   47, 0x08,
     224,   47,   47,   47, 0x08,
     246,   43,   47,   47, 0x08,
     270,  306,   47,   47, 0x08,
     314,   47,   47,   47, 0x08,
     340,   43,   47,   47, 0x08,
     373,   43,   47,   47, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisResampleWindow[] = {
    "QvisResampleWindow\0useExtentsChanged(bool)\0"
    "val\0\0startXProcessText()\0endXProcessText()\0"
    "samplesXProcessText()\0startYProcessText()\0"
    "endYProcessText()\0samplesYProcessText()\0"
    "is3DChanged(bool)\0startZProcessText()\0"
    "endZProcessText()\0samplesZProcessText()\0"
    "tieResolverChanged(int)\0"
    "tieResolverVariableChanged(QString)\0"
    "varName\0defaultValueProcessText()\0"
    "distributedResampleChanged(bool)\0"
    "cellCenteredOutputChanged(bool)\0"
};

void QvisResampleWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisResampleWindow *_t = static_cast<QvisResampleWindow *>(_o);
        switch (_id) {
        case 0: _t->useExtentsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->startXProcessText(); break;
        case 2: _t->endXProcessText(); break;
        case 3: _t->samplesXProcessText(); break;
        case 4: _t->startYProcessText(); break;
        case 5: _t->endYProcessText(); break;
        case 6: _t->samplesYProcessText(); break;
        case 7: _t->is3DChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->startZProcessText(); break;
        case 9: _t->endZProcessText(); break;
        case 10: _t->samplesZProcessText(); break;
        case 11: _t->tieResolverChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->tieResolverVariableChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->defaultValueProcessText(); break;
        case 14: _t->distributedResampleChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->cellCenteredOutputChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisResampleWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisResampleWindow::staticMetaObject = {
    { &QvisOperatorWindow::staticMetaObject, qt_meta_stringdata_QvisResampleWindow,
      qt_meta_data_QvisResampleWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisResampleWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisResampleWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisResampleWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisResampleWindow))
        return static_cast<void*>(const_cast< QvisResampleWindow*>(this));
    return QvisOperatorWindow::qt_metacast(_clname);
}

int QvisResampleWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisOperatorWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
