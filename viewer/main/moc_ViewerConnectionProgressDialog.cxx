/****************************************************************************
** Meta object code from reading C++ file 'ViewerConnectionProgressDialog.h'
**
** Created: Wed Nov 4 16:21:19 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ViewerConnectionProgressDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ViewerConnectionProgressDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ViewerConnectionProgressDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      31,   38,   38,   38, 0x0a,
      39,   38,   38,   38, 0x0a,
      46,   38,   38,   38, 0x08,
      64,   38,   38,   38, 0x08,
      76,   38,   38,   38, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ViewerConnectionProgressDialog[] = {
    "ViewerConnectionProgressDialog\0show()\0"
    "\0hide()\0updateAnimation()\0timedShow()\0"
    "cancel()\0"
};

void ViewerConnectionProgressDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ViewerConnectionProgressDialog *_t = static_cast<ViewerConnectionProgressDialog *>(_o);
        switch (_id) {
        case 0: _t->show(); break;
        case 1: _t->hide(); break;
        case 2: _t->updateAnimation(); break;
        case 3: _t->timedShow(); break;
        case 4: _t->cancel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ViewerConnectionProgressDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ViewerConnectionProgressDialog::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ViewerConnectionProgressDialog,
      qt_meta_data_ViewerConnectionProgressDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ViewerConnectionProgressDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ViewerConnectionProgressDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ViewerConnectionProgressDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ViewerConnectionProgressDialog))
        return static_cast<void*>(const_cast< ViewerConnectionProgressDialog*>(this));
    return QWidget::qt_metacast(_clname);
}

int ViewerConnectionProgressDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
