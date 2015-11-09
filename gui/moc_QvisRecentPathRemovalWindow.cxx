/****************************************************************************
** Meta object code from reading C++ file 'QvisRecentPathRemovalWindow.h'
**
** Created: Wed Nov 4 16:17:58 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisRecentPathRemovalWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisRecentPathRemovalWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisRecentPathRemovalWindow[] = {

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
      28,   35,   35,   35, 0x0a,
      36,   35,   35,   35, 0x08,
      50,   35,   35,   35, 0x08,
      67,   35,   35,   35, 0x08,
      85,   35,   35,   35, 0x08,
     100,   35,   35,   35, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisRecentPathRemovalWindow[] = {
    "QvisRecentPathRemovalWindow\0show()\0\0"
    "removePaths()\0removeAllPaths()\0"
    "invertSelection()\0applyDismiss()\0"
    "handleCancel()\0"
};

void QvisRecentPathRemovalWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisRecentPathRemovalWindow *_t = static_cast<QvisRecentPathRemovalWindow *>(_o);
        switch (_id) {
        case 0: _t->show(); break;
        case 1: _t->removePaths(); break;
        case 2: _t->removeAllPaths(); break;
        case 3: _t->invertSelection(); break;
        case 4: _t->applyDismiss(); break;
        case 5: _t->handleCancel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QvisRecentPathRemovalWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisRecentPathRemovalWindow::staticMetaObject = {
    { &QvisDelayedWindowObserver::staticMetaObject, qt_meta_stringdata_QvisRecentPathRemovalWindow,
      qt_meta_data_QvisRecentPathRemovalWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisRecentPathRemovalWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisRecentPathRemovalWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisRecentPathRemovalWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisRecentPathRemovalWindow))
        return static_cast<void*>(const_cast< QvisRecentPathRemovalWindow*>(this));
    return QvisDelayedWindowObserver::qt_metacast(_clname);
}

int QvisRecentPathRemovalWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisDelayedWindowObserver::qt_metacall(_c, _id, _a);
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
