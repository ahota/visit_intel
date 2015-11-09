/****************************************************************************
** Meta object code from reading C++ file 'QvisSubsetPanelWidget.h'
**
** Created: Wed Nov 4 16:17:58 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisSubsetPanelWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisSubsetPanelWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisSubsetPanelWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   45,   55,   55, 0x05,
      56,   80,   55,   55, 0x05,
      86,   55,   55,   55, 0x05,

 // slots: signature, parameters, type, tag, flags
     101,  119,   55,   55, 0x0a,
     125,  138,   55,   55, 0x0a,
     141,  138,   55,   55, 0x0a,
     161,   55,   55,   55, 0x0a,
     174,  200,   55,   55, 0x0a,
     206,   55,   55,   55, 0x0a,
     214,   55,   55,   55, 0x09,
     232,   55,   55,   55, 0x09,
     257,   55,   55,   55, 0x09,
     277,   55,   55,   55, 0x09,
     298,   55,   55,   55, 0x09,
     321,   55,   55,   55, 0x09,
     351,   55,   55,   55, 0x09,
     376,   55,   55,   55, 0x09,
     402,   55,   55,   55, 0x09,
     427,  463,   55,   55, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QvisSubsetPanelWidget[] = {
    "QvisSubsetPanelWidget\0itemSelected(int,bool)\0"
    "id,parent\0\0parentStateChanged(int)\0"
    "value\0stateChanged()\0SetTitle(QString)\0"
    "title\0ViewSet(int)\0id\0ViewCollection(int)\0"
    "UpdateView()\0SetSelectedItemState(int)\0"
    "state\0Clear()\0onAllSetsButton()\0"
    "onAllSetsActionReverse()\0onAllSetsActionOn()\0"
    "onAllSetsActionOff()\0onSelectedSetsButton()\0"
    "onSelectedSetsActionReverse()\0"
    "onSelectedSetsActionOn()\0"
    "onSelectedSetsActionOff()\0"
    "onItemSelectionChanged()\0"
    "onItemClicked(QTreeWidgetItem*,int)\0"
    ",\0"
};

void QvisSubsetPanelWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisSubsetPanelWidget *_t = static_cast<QvisSubsetPanelWidget *>(_o);
        switch (_id) {
        case 0: _t->itemSelected((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->parentStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->stateChanged(); break;
        case 3: _t->SetTitle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->ViewSet((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->ViewCollection((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->UpdateView(); break;
        case 7: _t->SetSelectedItemState((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->Clear(); break;
        case 9: _t->onAllSetsButton(); break;
        case 10: _t->onAllSetsActionReverse(); break;
        case 11: _t->onAllSetsActionOn(); break;
        case 12: _t->onAllSetsActionOff(); break;
        case 13: _t->onSelectedSetsButton(); break;
        case 14: _t->onSelectedSetsActionReverse(); break;
        case 15: _t->onSelectedSetsActionOn(); break;
        case 16: _t->onSelectedSetsActionOff(); break;
        case 17: _t->onItemSelectionChanged(); break;
        case 18: _t->onItemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisSubsetPanelWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisSubsetPanelWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QvisSubsetPanelWidget,
      qt_meta_data_QvisSubsetPanelWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisSubsetPanelWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisSubsetPanelWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisSubsetPanelWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisSubsetPanelWidget))
        return static_cast<void*>(const_cast< QvisSubsetPanelWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QvisSubsetPanelWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void QvisSubsetPanelWidget::itemSelected(int _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QvisSubsetPanelWidget::parentStateChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QvisSubsetPanelWidget::stateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
