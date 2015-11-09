/****************************************************************************
** Meta object code from reading C++ file 'QvisVisItUpdate.h'
**
** Created: Wed Nov 4 16:17:58 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisVisItUpdate.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisVisItUpdate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisVisItUpdate[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   35,   35,   35, 0x05,
      36,   35,   35,   35, 0x05,

 // slots: signature, parameters, type, tag, flags
      66,   35,   35,   35, 0x0a,
      80,   35,   35,   35, 0x08,
      96,   35,   35,   35, 0x08,
     123,  153,   35,   35, 0x08,
     159,  153,   35,   35, 0x08,
     178,   35,   35,   35, 0x08,
     197,  235,   35,   35, 0x08,
     246,   35,   35,   35, 0x08,
     268,   35,   35,   35, 0x08,
     290,   35,   35,   35, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisVisItUpdate[] = {
    "QvisVisItUpdate\0updateNotAllowed()\0\0"
    "installationComplete(QString)\0"
    "startUpdate()\0initiateStage()\0"
    "determineReleaseHTML(bool)\0"
    "determineLatestDownload(bool)\0error\0"
    "downloadDone(bool)\0getRequiredFiles()\0"
    "reportDownloadProgress(qint64,qint64)\0"
    "done,total\0readInstallerStdout()\0"
    "readInstallerStderr()\0"
    "emitInstallationComplete(int)\0"
};

void QvisVisItUpdate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisVisItUpdate *_t = static_cast<QvisVisItUpdate *>(_o);
        switch (_id) {
        case 0: _t->updateNotAllowed(); break;
        case 1: _t->installationComplete((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->startUpdate(); break;
        case 3: _t->initiateStage(); break;
        case 4: _t->determineReleaseHTML((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->determineLatestDownload((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->downloadDone((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->getRequiredFiles(); break;
        case 8: _t->reportDownloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 9: _t->readInstallerStdout(); break;
        case 10: _t->readInstallerStderr(); break;
        case 11: _t->emitInstallationComplete((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisVisItUpdate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisVisItUpdate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QvisVisItUpdate,
      qt_meta_data_QvisVisItUpdate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisVisItUpdate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisVisItUpdate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisVisItUpdate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisVisItUpdate))
        return static_cast<void*>(const_cast< QvisVisItUpdate*>(this));
    if (!strcmp(_clname, "GUIBase"))
        return static_cast< GUIBase*>(const_cast< QvisVisItUpdate*>(this));
    return QObject::qt_metacast(_clname);
}

int QvisVisItUpdate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void QvisVisItUpdate::updateNotAllowed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QvisVisItUpdate::installationComplete(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
