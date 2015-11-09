/****************************************************************************
** Meta object code from reading C++ file 'QvisPersistentParticlesWindow.h'
**
** Created: Wed Nov 4 16:19:16 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisPersistentParticlesWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisPersistentParticlesWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisPersistentParticlesWindow[] = {

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
      30,   54,   54,   54, 0x08,
      55,   81,   54,   54, 0x08,
      85,   54,   54,   54, 0x08,
     108,   81,   54,   54, 0x08,
     133,   54,   54,   54, 0x08,
     155,   54,   54,   54, 0x08,
     178,   54,   54,   54, 0x08,
     198,  229,   54,   54, 0x08,
     237,  229,   54,   54, 0x08,
     268,  229,   54,   54, 0x08,
     299,   81,   54,   54, 0x08,
     329,   81,   54,   54, 0x08,
     353,  229,   54,   54, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisPersistentParticlesWindow[] = {
    "QvisPersistentParticlesWindow\0"
    "startIndexProcessText()\0\0"
    "startPathTypeChanged(int)\0val\0"
    "stopIndexProcessText()\0stopPathTypeChanged(int)\0"
    "updateStopIndexText()\0updateStartIndexText()\0"
    "strideProcessText()\0traceVariableXChanged(QString)\0"
    "varName\0traceVariableYChanged(QString)\0"
    "traceVariableZChanged(QString)\0"
    "connectParticlesChanged(bool)\0"
    "showPointsChanged(bool)\0"
    "indexVariableChanged(QString)\0"
};

void QvisPersistentParticlesWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisPersistentParticlesWindow *_t = static_cast<QvisPersistentParticlesWindow *>(_o);
        switch (_id) {
        case 0: _t->startIndexProcessText(); break;
        case 1: _t->startPathTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->stopIndexProcessText(); break;
        case 3: _t->stopPathTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->updateStopIndexText(); break;
        case 5: _t->updateStartIndexText(); break;
        case 6: _t->strideProcessText(); break;
        case 7: _t->traceVariableXChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->traceVariableYChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->traceVariableZChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->connectParticlesChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->showPointsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->indexVariableChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisPersistentParticlesWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisPersistentParticlesWindow::staticMetaObject = {
    { &QvisOperatorWindow::staticMetaObject, qt_meta_stringdata_QvisPersistentParticlesWindow,
      qt_meta_data_QvisPersistentParticlesWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisPersistentParticlesWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisPersistentParticlesWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisPersistentParticlesWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisPersistentParticlesWindow))
        return static_cast<void*>(const_cast< QvisPersistentParticlesWindow*>(this));
    return QvisOperatorWindow::qt_metacast(_clname);
}

int QvisPersistentParticlesWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
