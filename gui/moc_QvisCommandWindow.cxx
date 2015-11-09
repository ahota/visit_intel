/****************************************************************************
** Meta object code from reading C++ file 'QvisCommandWindow.h'
**
** Created: Wed Nov 4 16:17:57 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisCommandWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisCommandWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisCommandWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   38,   38,   38, 0x05,

 // slots: signature, parameters, type, tag, flags
      39,   38,   38,   38, 0x0a,
      68,   38,   38,   38, 0x08,
      88,   38,   38,   38, 0x08,
     106,   38,   38,   38, 0x08,
     127,   38,   38,   38, 0x08,
     147,   38,   38,   38, 0x08,
     165,   38,   38,   38, 0x08,
     190,   38,   38,   38, 0x08,
     217,   38,   38,   38, 0x08,
     237,   38,   38,   38, 0x08,
     258,   38,   38,   38, 0x08,
     275,   38,   38,   38, 0x08,
     290,   38,   38,   38, 0x08,
     305,   38,   38,   38, 0x08,
     320,   38,   38,   38, 0x08,
     335,   38,   38,   38, 0x08,
     350,   38,   38,   38, 0x08,
     365,   38,   38,   38, 0x08,
     380,   38,   38,   38, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisCommandWindow[] = {
    "QvisCommandWindow\0runCommand(QString)\0"
    "\0acceptRecordedMacro(QString)\0"
    "executeClicked(int)\0clearClicked(int)\0"
    "macroRecordClicked()\0macroPauseClicked()\0"
    "macroEndClicked()\0macroAppendClicked(bool)\0"
    "macroStorageActivated(int)\0"
    "macroClearClicked()\0macroUpdateClicked()\0"
    "macroCreate(int)\0textChanged0()\0"
    "textChanged1()\0textChanged2()\0"
    "textChanged3()\0textChanged4()\0"
    "textChanged5()\0textChanged6()\0"
    "textChanged7()\0"
};

void QvisCommandWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisCommandWindow *_t = static_cast<QvisCommandWindow *>(_o);
        switch (_id) {
        case 0: _t->runCommand((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->acceptRecordedMacro((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->executeClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->clearClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->macroRecordClicked(); break;
        case 5: _t->macroPauseClicked(); break;
        case 6: _t->macroEndClicked(); break;
        case 7: _t->macroAppendClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->macroStorageActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->macroClearClicked(); break;
        case 10: _t->macroUpdateClicked(); break;
        case 11: _t->macroCreate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->textChanged0(); break;
        case 13: _t->textChanged1(); break;
        case 14: _t->textChanged2(); break;
        case 15: _t->textChanged3(); break;
        case 16: _t->textChanged4(); break;
        case 17: _t->textChanged5(); break;
        case 18: _t->textChanged6(); break;
        case 19: _t->textChanged7(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisCommandWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisCommandWindow::staticMetaObject = {
    { &QvisPostableWindow::staticMetaObject, qt_meta_stringdata_QvisCommandWindow,
      qt_meta_data_QvisCommandWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisCommandWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisCommandWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisCommandWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisCommandWindow))
        return static_cast<void*>(const_cast< QvisCommandWindow*>(this));
    return QvisPostableWindow::qt_metacast(_clname);
}

int QvisCommandWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisPostableWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void QvisCommandWindow::runCommand(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
