/****************************************************************************
** Meta object code from reading C++ file 'ViewerSubject.h'
**
** Created: Wed Nov 4 16:21:19 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ViewerSubject.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ViewerSubject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ViewerSubject[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      39,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   44,   44,   44, 0x05,

 // slots: signature, parameters, type, tag, flags
      45,   44,   44,   44, 0x0a,
      65,   44,   44,   44, 0x08,
      87,  145,   44,   44, 0x08,
     151,  178,   44,   44, 0x08,
     185,  227,   44,   44, 0x08,
     234,   44,   44,   44, 0x08,
     262,   44,   44,   44, 0x08,
     289,   44,   44,   44, 0x08,
     307,   44,   44,   44, 0x08,
     331,   44,   44,   44, 0x08,
     344,   44,   44,   44, 0x08,
     365,   44,   44,   44, 0x08,
     391,  465,   44,   44, 0x08,
     476,  465,   44,   44, 0x08,
     543,  605,   44,   44, 0x08,
     620,  605,   44,   44, 0x08,
     683,   44,   44,   44, 0x08,
     702,   44,   44,   44, 0x08,
     727,   44,   44,   44, 0x08,
     757,   44,   44,   44, 0x08,
     782,   44,   44,   44, 0x08,
     799,   44,   44,   44, 0x08,
     821,   44,   44,   44, 0x08,
     855,  884,   44,   44, 0x08,
     888,  916,   44,   44, 0x08,
     928,   44,   44,   44, 0x28,
     953,  916,   44,   44, 0x08,
     979,   44,   44,   44, 0x28,
    1002,  916,   44,   44, 0x08,
    1023,   44,   44,   44, 0x28,
    1041,  916,   44,   44, 0x08,
    1063,   44,   44,   44, 0x28,
    1082, 1108,   44,   44, 0x08,
    1116, 1108,   44,   44, 0x08,
    1146, 1108,   44,   44, 0x08,
    1179, 1108,   44,   44, 0x08,
    1206,   44,   44,   44, 0x08,
    1230,   44,   44,   44, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ViewerSubject[] = {
    "ViewerSubject\0scheduleHeavyInitialization()\0"
    "\0ProcessFromParent()\0HeavyInitialization()\0"
    "AddInputToXfer(ViewerClientConnection*,AttributeSubject*)\0"
    ",subj\0ProcessSpecialOpcodes(int)\0"
    "opcode\0DisconnectClient(ViewerClientConnection*)\0"
    "client\0DiscoverClientInformation()\0"
    "CreateViewerDelayedState()\0HandleViewerRPC()\0"
    "HandlePostponedAction()\0HandleSync()\0"
    "HandleClientMethod()\0HandleClientInformation()\0"
    "HandleMetaDataUpdated(std::string,std::string,const avtDatabaseMetaDat"
    "a*)\0"
    "host,db,md\0"
    "HandleSILAttsUpdated(std::string,std::string,const SILAttributes*)\0"
    "DeferCommandFromSimulation(EngineKey,std::string,std::string)\0"
    "key,db,command\0"
    "HandleCommandFromSimulation(EngineKey,std::string,std::string)\0"
    "HandleColorTable()\0ProcessRendererMessage()\0"
    "ReadFromParentAndProcess(int)\0"
    "DelayedProcessSettings()\0SendKeepAlives()\0"
    "EnableSocketSignals()\0"
    "ReadFromSimulationAndProcess(int)\0"
    "ConnectWindow(ViewerWindow*)\0win\0"
    "ToggleMaintainViewMode(int)\0windowIndex\0"
    "ToggleMaintainViewMode()\0"
    "ToggleCameraViewMode(int)\0"
    "ToggleCameraViewMode()\0ToggleLockTools(int)\0"
    "ToggleLockTools()\0ToggleAllowPopup(int)\0"
    "ToggleAllowPopup()\0CopyViewToWindow(int,int)\0"
    "from,to\0CopyLightingToWindow(int,int)\0"
    "CopyAnnotationsToWindow(int,int)\0"
    "CopyPlotsToWindow(int,int)\0"
    "OpenDatabaseOnStartup()\0OpenScriptOnStartup()\0"
};

void ViewerSubject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ViewerSubject *_t = static_cast<ViewerSubject *>(_o);
        switch (_id) {
        case 0: _t->scheduleHeavyInitialization(); break;
        case 1: _t->ProcessFromParent(); break;
        case 2: _t->HeavyInitialization(); break;
        case 3: _t->AddInputToXfer((*reinterpret_cast< ViewerClientConnection*(*)>(_a[1])),(*reinterpret_cast< AttributeSubject*(*)>(_a[2]))); break;
        case 4: _t->ProcessSpecialOpcodes((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->DisconnectClient((*reinterpret_cast< ViewerClientConnection*(*)>(_a[1]))); break;
        case 6: _t->DiscoverClientInformation(); break;
        case 7: _t->CreateViewerDelayedState(); break;
        case 8: _t->HandleViewerRPC(); break;
        case 9: _t->HandlePostponedAction(); break;
        case 10: _t->HandleSync(); break;
        case 11: _t->HandleClientMethod(); break;
        case 12: _t->HandleClientInformation(); break;
        case 13: _t->HandleMetaDataUpdated((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2])),(*reinterpret_cast< const avtDatabaseMetaData*(*)>(_a[3]))); break;
        case 14: _t->HandleSILAttsUpdated((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2])),(*reinterpret_cast< const SILAttributes*(*)>(_a[3]))); break;
        case 15: _t->DeferCommandFromSimulation((*reinterpret_cast< const EngineKey(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2])),(*reinterpret_cast< const std::string(*)>(_a[3]))); break;
        case 16: _t->HandleCommandFromSimulation((*reinterpret_cast< const EngineKey(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2])),(*reinterpret_cast< const std::string(*)>(_a[3]))); break;
        case 17: _t->HandleColorTable(); break;
        case 18: _t->ProcessRendererMessage(); break;
        case 19: _t->ReadFromParentAndProcess((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->DelayedProcessSettings(); break;
        case 21: _t->SendKeepAlives(); break;
        case 22: _t->EnableSocketSignals(); break;
        case 23: _t->ReadFromSimulationAndProcess((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->ConnectWindow((*reinterpret_cast< ViewerWindow*(*)>(_a[1]))); break;
        case 25: _t->ToggleMaintainViewMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->ToggleMaintainViewMode(); break;
        case 27: _t->ToggleCameraViewMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->ToggleCameraViewMode(); break;
        case 29: _t->ToggleLockTools((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->ToggleLockTools(); break;
        case 31: _t->ToggleAllowPopup((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->ToggleAllowPopup(); break;
        case 33: _t->CopyViewToWindow((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 34: _t->CopyLightingToWindow((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 35: _t->CopyAnnotationsToWindow((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 36: _t->CopyPlotsToWindow((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 37: _t->OpenDatabaseOnStartup(); break;
        case 38: _t->OpenScriptOnStartup(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ViewerSubject::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ViewerSubject::staticMetaObject = {
    { &ViewerBase::staticMetaObject, qt_meta_stringdata_ViewerSubject,
      qt_meta_data_ViewerSubject, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ViewerSubject::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ViewerSubject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ViewerSubject::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ViewerSubject))
        return static_cast<void*>(const_cast< ViewerSubject*>(this));
    return ViewerBase::qt_metacast(_clname);
}

int ViewerSubject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ViewerBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 39)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 39;
    }
    return _id;
}

// SIGNAL 0
void ViewerSubject::scheduleHeavyInitialization()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
