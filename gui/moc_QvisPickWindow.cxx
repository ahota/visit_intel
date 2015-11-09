/****************************************************************************
** Meta object code from reading C++ file 'QvisPickWindow.h'
**
** Created: Wed Nov 4 16:17:57 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisPickWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisPickWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisPickWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      35,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   34,   34,   34, 0x05,
      35,   34,   34,   34, 0x05,

 // slots: signature, parameters, type, tag, flags
      78,   34,   34,   34, 0x0a,
      86,   34,   34,   34, 0x0a,
     100,   34,   34,   34, 0x0a,
     108,   34,   34,   34, 0x0a,
     119,   34,   34,   34, 0x0a,
     154,   34,   34,   34, 0x08,
     176,   34,   34,   34, 0x08,
     201,  228,   34,   34, 0x08,
     232,  228,   34,   34, 0x08,
     262,  228,   34,   34, 0x08,
     293,  228,   34,   34, 0x08,
     313,  228,   34,   34, 0x08,
     337,  228,   34,   34, 0x08,
     363,  228,   34,   34, 0x08,
     389,  228,   34,   34, 0x08,
     409,  228,   34,   34, 0x08,
     433,  228,   34,   34, 0x08,
     459,   34,   34,   34, 0x08,
     481,   34,   34,   34, 0x08,
     504,   34,   34,   34, 0x08,
     527,   34,   34,   34, 0x08,
     552,   34,   34,   34, 0x08,
     579,   34,   34,   34, 0x08,
     605,   34,   34,   34, 0x08,
     631,   34,   34,   34, 0x08,
     656,   34,   34,   34, 0x08,
     671,   34,   34,   34, 0x08,
     699,   34,   34,   34, 0x08,
     727,   34,   34,   34, 0x08,
     740,   34,   34,   34, 0x08,
     758,   34,   34,   34, 0x08,
     791,   34,   34,   34, 0x08,
     815,   34,   34,   34, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisPickWindow[] = {
    "QvisPickWindow\0initiateRedoPick()\0\0"
    "initiateRestorePickAttributesAfterRepick()\0"
    "apply()\0makeDefault()\0reset()\0redoPick()\0"
    "restorePickAttributesAfterRepick()\0"
    "variableProcessText()\0floatFormatProcessText()\0"
    "displayIncElsToggled(bool)\0val\0"
    "displayGlobalIdsToggled(bool)\0"
    "displayPickLetterToggled(bool)\0"
    "nodeIdToggled(bool)\0nodeDomLogToggled(bool)\0"
    "nodeBlockLogToggled(bool)\0"
    "nodePhysicalToggled(bool)\0zoneIdToggled(bool)\0"
    "zoneDomLogToggled(bool)\0"
    "zoneBlockLogToggled(bool)\0"
    "autoShowToggled(bool)\0savePicksToggled(bool)\0"
    "timeCurveToggled(bool)\0spreadsheetToggled(bool)\0"
    "conciseOutputToggled(bool)\0"
    "showMeshNameToggled(bool)\0"
    "showTimestepToggled(bool)\0"
    "addPickVariable(QString)\0savePickText()\0"
    "preserveCoordActivated(int)\0"
    "timeCurveTypeActivated(int)\0clearPicks()\0"
    "redoPickClicked()\0redoPickWithSpreadsheetClicked()\0"
    "optionsTabSelected(int)\0focusPickInDDTClicked()\0"
};

void QvisPickWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisPickWindow *_t = static_cast<QvisPickWindow *>(_o);
        switch (_id) {
        case 0: _t->initiateRedoPick(); break;
        case 1: _t->initiateRestorePickAttributesAfterRepick(); break;
        case 2: _t->apply(); break;
        case 3: _t->makeDefault(); break;
        case 4: _t->reset(); break;
        case 5: _t->redoPick(); break;
        case 6: _t->restorePickAttributesAfterRepick(); break;
        case 7: _t->variableProcessText(); break;
        case 8: _t->floatFormatProcessText(); break;
        case 9: _t->displayIncElsToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->displayGlobalIdsToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->displayPickLetterToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->nodeIdToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->nodeDomLogToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->nodeBlockLogToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->nodePhysicalToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->zoneIdToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->zoneDomLogToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->zoneBlockLogToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->autoShowToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->savePicksToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->timeCurveToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->spreadsheetToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->conciseOutputToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->showMeshNameToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->showTimestepToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->addPickVariable((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 27: _t->savePickText(); break;
        case 28: _t->preserveCoordActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->timeCurveTypeActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->clearPicks(); break;
        case 31: _t->redoPickClicked(); break;
        case 32: _t->redoPickWithSpreadsheetClicked(); break;
        case 33: _t->optionsTabSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 34: _t->focusPickInDDTClicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisPickWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisPickWindow::staticMetaObject = {
    { &QvisPostableWindowObserver::staticMetaObject, qt_meta_stringdata_QvisPickWindow,
      qt_meta_data_QvisPickWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisPickWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisPickWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisPickWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisPickWindow))
        return static_cast<void*>(const_cast< QvisPickWindow*>(this));
    return QvisPostableWindowObserver::qt_metacast(_clname);
}

int QvisPickWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisPostableWindowObserver::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    }
    return _id;
}

// SIGNAL 0
void QvisPickWindow::initiateRedoPick()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QvisPickWindow::initiateRestorePickAttributesAfterRepick()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
