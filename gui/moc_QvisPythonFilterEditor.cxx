/****************************************************************************
** Meta object code from reading C++ file 'QvisPythonFilterEditor.h'
**
** Created: Wed Nov 4 16:17:57 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisPythonFilterEditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisPythonFilterEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisPythonFilterEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   43,   43,   43, 0x05,
      44,   70,   43,   43, 0x05,

 // slots: signature, parameters, type, tag, flags
      76,  100,   43,   43, 0x0a,
     118,  137,   43,   43, 0x2a,
     147,  167,   43,   43, 0x0a,
     175,  167,   43,   43, 0x0a,
     195,   43,   43,   43, 0x08,
     210,   43,   43,   43, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisPythonFilterEditor[] = {
    "QvisPythonFilterEditor\0sourceTextChanged()\0"
    "\0templateSelected(QString)\0tname\0"
    "setSource(QString,bool)\0py_script,escaped\0"
    "setSource(QString)\0py_script\0"
    "saveScript(QString)\0py_file\0"
    "loadScript(QString)\0cmdSaveClick()\0"
    "loadMenuEvent(QAction*)\0"
};

void QvisPythonFilterEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisPythonFilterEditor *_t = static_cast<QvisPythonFilterEditor *>(_o);
        switch (_id) {
        case 0: _t->sourceTextChanged(); break;
        case 1: _t->templateSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setSource((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->setSource((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->saveScript((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->loadScript((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->cmdSaveClick(); break;
        case 7: _t->loadMenuEvent((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisPythonFilterEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisPythonFilterEditor::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QvisPythonFilterEditor,
      qt_meta_data_QvisPythonFilterEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisPythonFilterEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisPythonFilterEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisPythonFilterEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisPythonFilterEditor))
        return static_cast<void*>(const_cast< QvisPythonFilterEditor*>(this));
    return QWidget::qt_metacast(_clname);
}

int QvisPythonFilterEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void QvisPythonFilterEditor::sourceTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QvisPythonFilterEditor::templateSelected(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
