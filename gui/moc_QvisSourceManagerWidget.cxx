/****************************************************************************
** Meta object code from reading C++ file 'QvisSourceManagerWidget.h'
**
** Created: Wed Nov 4 16:17:58 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisSourceManagerWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisSourceManagerWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisSourceManagerWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   49,   49,   49, 0x05,

 // slots: signature, parameters, type, tag, flags
      50,   49,   49,   49, 0x08,
      71,   49,   49,   49, 0x08,
      93,   49,   49,   49, 0x08,
     120,   49,   49,   49, 0x08,
     147,   49,   49,   49, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisSourceManagerWidget[] = {
    "QvisSourceManagerWidget\0"
    "activateFileOpenWindow()\0\0"
    "closeCurrentSource()\0reOpenCurrentSource()\0"
    "replaceWithCurrentSource()\0"
    "overlayWithCurrentSource()\0"
    "sourceChanged(int)\0"
};

void QvisSourceManagerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisSourceManagerWidget *_t = static_cast<QvisSourceManagerWidget *>(_o);
        switch (_id) {
        case 0: _t->activateFileOpenWindow(); break;
        case 1: _t->closeCurrentSource(); break;
        case 2: _t->reOpenCurrentSource(); break;
        case 3: _t->replaceWithCurrentSource(); break;
        case 4: _t->overlayWithCurrentSource(); break;
        case 5: _t->sourceChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisSourceManagerWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisSourceManagerWidget::staticMetaObject = {
    { &QGroupBox::staticMetaObject, qt_meta_stringdata_QvisSourceManagerWidget,
      qt_meta_data_QvisSourceManagerWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisSourceManagerWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisSourceManagerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisSourceManagerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisSourceManagerWidget))
        return static_cast<void*>(const_cast< QvisSourceManagerWidget*>(this));
    if (!strcmp(_clname, "GUIBase"))
        return static_cast< GUIBase*>(const_cast< QvisSourceManagerWidget*>(this));
    if (!strcmp(_clname, "SimpleObserver"))
        return static_cast< SimpleObserver*>(const_cast< QvisSourceManagerWidget*>(this));
    return QGroupBox::qt_metacast(_clname);
}

int QvisSourceManagerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QvisSourceManagerWidget::activateFileOpenWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
