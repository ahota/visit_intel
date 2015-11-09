/****************************************************************************
** Meta object code from reading C++ file 'QvisSequenceMappingModel.h'
**
** Created: Wed Nov 4 16:17:58 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisSequenceMappingModel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisSequenceMappingModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisSequenceMappingModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   61,   74,   74, 0x05,
      75,  131,   74,   74, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QvisSequenceMappingModel[] = {
    "QvisSequenceMappingModel\0"
    "updatedMapping(QString,QStringList)\0"
    "vp1,seqList1\0\0"
    "updatedMapping(QString,QStringList,QString,QStringList)\0"
    "vp1,seqList1,vp2,seqList2\0"
};

void QvisSequenceMappingModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisSequenceMappingModel *_t = static_cast<QvisSequenceMappingModel *>(_o);
        switch (_id) {
        case 0: _t->updatedMapping((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 1: _t->updatedMapping((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QStringList(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisSequenceMappingModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisSequenceMappingModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_QvisSequenceMappingModel,
      qt_meta_data_QvisSequenceMappingModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisSequenceMappingModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisSequenceMappingModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisSequenceMappingModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisSequenceMappingModel))
        return static_cast<void*>(const_cast< QvisSequenceMappingModel*>(this));
    return QAbstractItemModel::qt_metacast(_clname);
}

int QvisSequenceMappingModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QvisSequenceMappingModel::updatedMapping(const QString & _t1, const QStringList & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QvisSequenceMappingModel::updatedMapping(const QString & _t1, const QStringList & _t2, const QString & _t3, const QStringList & _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
