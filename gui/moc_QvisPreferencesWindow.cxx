/****************************************************************************
** Meta object code from reading C++ file 'QvisPreferencesWindow.h'
**
** Created: Wed Nov 4 16:17:57 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisPreferencesWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisPreferencesWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisPreferencesWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   51,   51,   51, 0x05,
      52,   51,   51,   51, 0x05,
      76,   51,   51,   51, 0x05,
     107,   51,   51,   51, 0x05,

 // slots: signature, parameters, type, tag, flags
     133,  168,   51,   51, 0x08,
     172,  168,   51,   51, 0x08,
     206,  168,   51,   51, 0x08,
     238,  168,   51,   51, 0x08,
     272,  168,   51,   51, 0x08,
     312,  168,   51,   51, 0x08,
     350,  168,   51,   51, 0x08,
     379,   51,   51,   51, 0x08,
     406,   51,   51,   51, 0x08,
     444,   51,   51,   51, 0x08,
     482,   51,   51,   51, 0x08,
     513,   51,   51,   51, 0x08,
     547,   51,   51,   51, 0x08,
     582,   51,   51,   51, 0x08,
     625,   51,   51,   51, 0x08,
     653,   51,   51,   51, 0x08,
     689,   51,   51,   51, 0x08,
     724,  168,   51,   51, 0x08,
     753,   51,   51,   51, 0x08,
     779,   51,   51,   51, 0x08,
     812,   51,   51,   51, 0x08,
     848,   51,   51,   51, 0x08,
     874,   51,   51,   51, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisPreferencesWindow[] = {
    "QvisPreferencesWindow\0"
    "changeTimeFormat(TimeFormat)\0\0"
    "showSelectedFiles(bool)\0"
    "allowFileSelectionChange(bool)\0"
    "enableWarningPopups(bool)\0"
    "cloneWindowOnFirstRefToggled(bool)\0"
    "val\0postWindowsWhenShownToggled(bool)\0"
    "makeDefaultConfirmToggled(bool)\0"
    "tryHarderCyclesTimesToggled(bool)\0"
    "automaticallyApplyOperatorToggled(bool)\0"
    "handleTimeStateDisplayModeChange(int)\0"
    "timeStateNDigitsChanged(int)\0"
    "selectedFilesToggled(bool)\0"
    "allowFileSelectionChangeToggled(bool)\0"
    "treatAllDBsAsTimeVaryingToggled(bool)\0"
    "createMeshQualityToggled(bool)\0"
    "createTimeDerivativeToggled(bool)\0"
    "createVectorMagnitudeToggled(bool)\0"
    "newPlotsInheritSILRestrictionToggled(bool)\0"
    "expandNewPlotsToggled(bool)\0"
    "userDirForSessionFilesToggled(bool)\0"
    "saveCrashRecoveryFileToggled(bool)\0"
    "ignoreDbExtentsToggled(bool)\0"
    "replacePlotsToggled(bool)\0"
    "enableWarningPopupsToggled(bool)\0"
    "userRestoreSessionFileToggled(bool)\0"
    "precisionTypeChanged(int)\0"
    "backendTypeChanged(int)\0"
};

void QvisPreferencesWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisPreferencesWindow *_t = static_cast<QvisPreferencesWindow *>(_o);
        switch (_id) {
        case 0: _t->changeTimeFormat((*reinterpret_cast< const TimeFormat(*)>(_a[1]))); break;
        case 1: _t->showSelectedFiles((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->allowFileSelectionChange((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->enableWarningPopups((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->cloneWindowOnFirstRefToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->postWindowsWhenShownToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->makeDefaultConfirmToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->tryHarderCyclesTimesToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->automaticallyApplyOperatorToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->handleTimeStateDisplayModeChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->timeStateNDigitsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->selectedFilesToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->allowFileSelectionChangeToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->treatAllDBsAsTimeVaryingToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->createMeshQualityToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->createTimeDerivativeToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->createVectorMagnitudeToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->newPlotsInheritSILRestrictionToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->expandNewPlotsToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->userDirForSessionFilesToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->saveCrashRecoveryFileToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->ignoreDbExtentsToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->replacePlotsToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->enableWarningPopupsToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->userRestoreSessionFileToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->precisionTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->backendTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisPreferencesWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisPreferencesWindow::staticMetaObject = {
    { &QvisPostableWindowObserver::staticMetaObject, qt_meta_stringdata_QvisPreferencesWindow,
      qt_meta_data_QvisPreferencesWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisPreferencesWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisPreferencesWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisPreferencesWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisPreferencesWindow))
        return static_cast<void*>(const_cast< QvisPreferencesWindow*>(this));
    return QvisPostableWindowObserver::qt_metacast(_clname);
}

int QvisPreferencesWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisPostableWindowObserver::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    return _id;
}

// SIGNAL 0
void QvisPreferencesWindow::changeTimeFormat(const TimeFormat & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QvisPreferencesWindow::showSelectedFiles(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QvisPreferencesWindow::allowFileSelectionChange(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QvisPreferencesWindow::enableWarningPopups(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
