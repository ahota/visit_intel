/****************************************************************************
** Meta object code from reading C++ file 'QvisQueryWindow.h'
**
** Created: Wed Nov 4 16:17:58 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisQueryWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisQueryWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisQueryWindow[] = {

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
      16,   24,   24,   24, 0x08,
      25,   24,   24,   24, 0x08,
      38,   24,   24,   24, 0x08,
      52,   24,   24,   24, 0x08,
      70,   24,   24,   24, 0x08,
      94,   24,   24,   24, 0x08,
     117,   24,   24,   24, 0x08,
     140,   24,   24,   24, 0x08,
     169,   24,   24,   24, 0x08,
     193,   24,   24,   24, 0x08,
     210,   24,   24,   24, 0x08,
     231,   24,   24,   24, 0x08,
     254,   24,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisQueryWindow[] = {
    "QvisQueryWindow\0apply()\0\0handleText()\0"
    "selectQuery()\0clearResultText()\0"
    "displayModeChanged(int)\0useGlobalToggled(bool)\0"
    "dumpStepsToggled(bool)\0"
    "dumpCoordinatesToggled(bool)\0"
    "dumpValuesToggled(bool)\0saveResultText()\0"
    "addVariable(QString)\0addPyVariable(QString)\0"
    "pyTemplateSelected(QString)\0"
};

void QvisQueryWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisQueryWindow *_t = static_cast<QvisQueryWindow *>(_o);
        switch (_id) {
        case 0: _t->apply(); break;
        case 1: _t->handleText(); break;
        case 2: _t->selectQuery(); break;
        case 3: _t->clearResultText(); break;
        case 4: _t->displayModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->useGlobalToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->dumpStepsToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->dumpCoordinatesToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->dumpValuesToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->saveResultText(); break;
        case 10: _t->addVariable((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->addPyVariable((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->pyTemplateSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisQueryWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisQueryWindow::staticMetaObject = {
    { &QvisPostableWindowSimpleObserver::staticMetaObject, qt_meta_stringdata_QvisQueryWindow,
      qt_meta_data_QvisQueryWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisQueryWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisQueryWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisQueryWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisQueryWindow))
        return static_cast<void*>(const_cast< QvisQueryWindow*>(this));
    return QvisPostableWindowSimpleObserver::qt_metacast(_clname);
}

int QvisQueryWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisPostableWindowSimpleObserver::qt_metacall(_c, _id, _a);
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
