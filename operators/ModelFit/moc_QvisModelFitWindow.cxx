/****************************************************************************
** Meta object code from reading C++ file 'QvisModelFitWindow.h'
**
** Created: Wed Nov 4 16:19:13 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisModelFitWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisModelFitWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisModelFitWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   37,   37,   37, 0x08,
      38,   37,   37,   37, 0x08,
      56,   37,   37,   37, 0x08,
      67,   37,   37,   37, 0x08,
      84,   37,   37,   37, 0x08,
      98,   37,   37,   37, 0x08,
     119,   37,   37,   37, 0x08,
     132,  155,   37,   37, 0x08,
     164,  155,   37,   37, 0x08,
     187,  155,   37,   37, 0x08,
     212,  242,   37,   37, 0x08,
     246,  274,   37,   37, 0x08,
     276,  274,   37,   37, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisModelFitWindow[] = {
    "QvisModelFitWindow\0addRelationship()\0"
    "\0varAdded(QString)\0addTuple()\0"
    "deleteVariable()\0deletePoint()\0"
    "deleteRelationship()\0fillTables()\0"
    "selectTypeChanged(int)\0buttonID\0"
    "inputSpaceChanged(int)\0distanceTypeChanged(int)\0"
    "prepareTable(int,int,int,int)\0,,,\0"
    "storeTableContents(int,int)\0,\0"
    "storeModelNames(int,int)\0"
};

void QvisModelFitWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisModelFitWindow *_t = static_cast<QvisModelFitWindow *>(_o);
        switch (_id) {
        case 0: _t->addRelationship(); break;
        case 1: _t->varAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->addTuple(); break;
        case 3: _t->deleteVariable(); break;
        case 4: _t->deletePoint(); break;
        case 5: _t->deleteRelationship(); break;
        case 6: _t->fillTables(); break;
        case 7: _t->selectTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->inputSpaceChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->distanceTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->prepareTable((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 11: _t->storeTableContents((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->storeModelNames((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisModelFitWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisModelFitWindow::staticMetaObject = {
    { &QvisOperatorWindow::staticMetaObject, qt_meta_stringdata_QvisModelFitWindow,
      qt_meta_data_QvisModelFitWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisModelFitWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisModelFitWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisModelFitWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisModelFitWindow))
        return static_cast<void*>(const_cast< QvisModelFitWindow*>(this));
    return QvisOperatorWindow::qt_metacast(_clname);
}

int QvisModelFitWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisOperatorWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
