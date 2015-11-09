/****************************************************************************
** Meta object code from reading C++ file 'XMLEdit.h'
**
** Created: Wed Nov 4 16:17:25 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "XMLEdit.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'XMLEdit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_XMLEdit[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,   17,   17,   17, 0x0a,
      18,   17,   17,   17, 0x0a,
      25,   17,   17,   17, 0x0a,
      32,   17,   17,   17, 0x0a,
      41,   56,   17,   17, 0x0a,
      60,   17,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_XMLEdit[] = {
    "XMLEdit\0newdoc()\0\0open()\0save()\0"
    "saveAs()\0updateTab(int)\0tab\0generateCode()\0"
};

void XMLEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        XMLEdit *_t = static_cast<XMLEdit *>(_o);
        switch (_id) {
        case 0: _t->newdoc(); break;
        case 1: _t->open(); break;
        case 2: _t->save(); break;
        case 3: _t->saveAs(); break;
        case 4: _t->updateTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->generateCode(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData XMLEdit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XMLEdit::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_XMLEdit,
      qt_meta_data_XMLEdit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XMLEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XMLEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XMLEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XMLEdit))
        return static_cast<void*>(const_cast< XMLEdit*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int XMLEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
