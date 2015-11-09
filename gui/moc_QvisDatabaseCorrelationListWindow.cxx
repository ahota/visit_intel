/****************************************************************************
** Meta object code from reading C++ file 'QvisDatabaseCorrelationListWindow.h'
**
** Created: Wed Nov 4 16:17:57 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisDatabaseCorrelationListWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisDatabaseCorrelationListWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisDatabaseCorrelationListWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      34,   50,   50,   50, 0x0a,
      51,   50,   50,   50, 0x0a,
      64,   50,   50,   50, 0x09,
      72,   50,   50,   50, 0x09,
      89,   50,   50,   50, 0x09,
     107,   50,   50,   50, 0x09,
     127,   50,   50,   50, 0x09,
     153,   50,   50,   50, 0x09,
     177,   50,   50,   50, 0x09,
     205,   50,   50,   50, 0x09,
     242,   50,   50,   50, 0x09,
     272,   50,   50,   50, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QvisDatabaseCorrelationListWindow[] = {
    "QvisDatabaseCorrelationListWindow\0"
    "showMinimized()\0\0showNormal()\0apply()\0"
    "newCorrelation()\0editCorrelation()\0"
    "deleteCorrelation()\0highlightCorrelation(int)\0"
    "promptUserChecked(bool)\0"
    "whenToCorrelateChanged(int)\0"
    "defaultCorrelationMethodChanged(int)\0"
    "deleteWindow(QvisWindowBase*)\0"
    "delayedDeleteWindows()\0"
};

void QvisDatabaseCorrelationListWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisDatabaseCorrelationListWindow *_t = static_cast<QvisDatabaseCorrelationListWindow *>(_o);
        switch (_id) {
        case 0: _t->showMinimized(); break;
        case 1: _t->showNormal(); break;
        case 2: _t->apply(); break;
        case 3: _t->newCorrelation(); break;
        case 4: _t->editCorrelation(); break;
        case 5: _t->deleteCorrelation(); break;
        case 6: _t->highlightCorrelation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->promptUserChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->whenToCorrelateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->defaultCorrelationMethodChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->deleteWindow((*reinterpret_cast< QvisWindowBase*(*)>(_a[1]))); break;
        case 11: _t->delayedDeleteWindows(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisDatabaseCorrelationListWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisDatabaseCorrelationListWindow::staticMetaObject = {
    { &QvisPostableWindowObserver::staticMetaObject, qt_meta_stringdata_QvisDatabaseCorrelationListWindow,
      qt_meta_data_QvisDatabaseCorrelationListWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisDatabaseCorrelationListWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisDatabaseCorrelationListWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisDatabaseCorrelationListWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisDatabaseCorrelationListWindow))
        return static_cast<void*>(const_cast< QvisDatabaseCorrelationListWindow*>(this));
    return QvisPostableWindowObserver::qt_metacast(_clname);
}

int QvisDatabaseCorrelationListWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisPostableWindowObserver::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
