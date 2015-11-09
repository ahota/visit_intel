/****************************************************************************
** Meta object code from reading C++ file 'QvisMacroWindow.h'
**
** Created: Wed Nov 4 16:17:57 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisMacroWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisMacroWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisMacroWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   36,   36,   36, 0x05,

 // slots: signature, parameters, type, tag, flags
      37,   36,   36,   36, 0x0a,
      55,   36,   36,   36, 0x0a,
      69,   36,   36,   36, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisMacroWindow[] = {
    "QvisMacroWindow\0runCommand(QString)\0"
    "\0addMacro(QString)\0clearMacros()\0"
    "invokeMacro(int)\0"
};

void QvisMacroWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisMacroWindow *_t = static_cast<QvisMacroWindow *>(_o);
        switch (_id) {
        case 0: _t->runCommand((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->addMacro((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->clearMacros(); break;
        case 3: _t->invokeMacro((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisMacroWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisMacroWindow::staticMetaObject = {
    { &QvisPostableWindow::staticMetaObject, qt_meta_stringdata_QvisMacroWindow,
      qt_meta_data_QvisMacroWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisMacroWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisMacroWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisMacroWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisMacroWindow))
        return static_cast<void*>(const_cast< QvisMacroWindow*>(this));
    return QvisPostableWindow::qt_metacast(_clname);
}

int QvisMacroWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisPostableWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QvisMacroWindow::runCommand(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
