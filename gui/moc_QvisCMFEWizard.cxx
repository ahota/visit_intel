/****************************************************************************
** Meta object code from reading C++ file 'QvisCMFEWizard.h'
**
** Created: Wed Nov 4 16:17:58 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisCMFEWizard.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisCMFEWizard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisCMFEWizard[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   37,   37,   37, 0x08,
      38,   37,   37,   37, 0x08,
      65,   37,   37,   37, 0x08,
      91,   37,   37,   37, 0x08,
     116,   37,   37,   37, 0x08,
     137,   37,   37,   37, 0x08,
     158,   37,   37,   37, 0x08,
     180,   37,   37,   37, 0x08,
     202,   37,   37,   37, 0x08,
     232,   37,   37,   37, 0x08,
     262,   37,   37,   37, 0x08,
     281,   37,   37,   37, 0x08,
     304,   37,   37,   37, 0x08,
     334,   37,   37,   37, 0x08,
     364,   37,   37,   37, 0x08,
     389,   37,   37,   37, 0x08,
     410,   37,   37,   37, 0x08,
     438,   37,   37,   37, 0x08,
     463,   37,   37,   37, 0x08,
     491,   37,   37,   37, 0x08,
     518,   37,   37,   37, 0x08,
     553,   37,   37,   37, 0x08,
     564,   37,   37,   37, 0x08,
     578,   37,   37,   37, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisCMFEWizard[] = {
    "QvisCMFEWizard\0donorTypeChanged(int)\0"
    "\0targetDatabaseChanged(int)\0"
    "donorDatabaseChanged(int)\0"
    "absVsRelTimeChanged(int)\0timeTypeChanged(int)\0"
    "timeChanged(QString)\0cycleChanged(QString)\0"
    "indexChanged(QString)\0"
    "donorFieldVarChanged(QString)\0"
    "targetMeshVarChanged(QString)\0"
    "interpChanged(int)\0nonOverlapChanged(int)\0"
    "nonOverlapTxtChanged(QString)\0"
    "nonOverlapVarChanged(QString)\0"
    "exprNameChanged(QString)\0exprTypeChanged(int)\0"
    "exprDiffVarChanged(QString)\0"
    "exprDiffTypeChanged(int)\0"
    "targetDatabaseOpenClicked()\0"
    "donorDatabaseOpenClicked()\0"
    "donorListClicked(QListWidgetItem*)\0"
    "addDonor()\0deleteDonor()\0deleteDonors()\0"
};

void QvisCMFEWizard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisCMFEWizard *_t = static_cast<QvisCMFEWizard *>(_o);
        switch (_id) {
        case 0: _t->donorTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->targetDatabaseChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->donorDatabaseChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->absVsRelTimeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->timeTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->timeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->cycleChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->indexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->donorFieldVarChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->targetMeshVarChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->interpChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->nonOverlapChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->nonOverlapTxtChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->nonOverlapVarChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->exprNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->exprTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->exprDiffVarChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->exprDiffTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->targetDatabaseOpenClicked(); break;
        case 19: _t->donorDatabaseOpenClicked(); break;
        case 20: _t->donorListClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 21: _t->addDonor(); break;
        case 22: _t->deleteDonor(); break;
        case 23: _t->deleteDonors(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisCMFEWizard::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisCMFEWizard::staticMetaObject = {
    { &QvisWizard::staticMetaObject, qt_meta_stringdata_QvisCMFEWizard,
      qt_meta_data_QvisCMFEWizard, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisCMFEWizard::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisCMFEWizard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisCMFEWizard::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisCMFEWizard))
        return static_cast<void*>(const_cast< QvisCMFEWizard*>(this));
    if (!strcmp(_clname, "SimpleObserver"))
        return static_cast< SimpleObserver*>(const_cast< QvisCMFEWizard*>(this));
    return QvisWizard::qt_metacast(_clname);
}

int QvisCMFEWizard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisWizard::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
