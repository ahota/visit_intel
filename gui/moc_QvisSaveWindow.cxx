/****************************************************************************
** Meta object code from reading C++ file 'QvisSaveWindow.h'
**
** Created: Wed Nov 4 16:17:58 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisSaveWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisSaveWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisSaveWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      31,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   23,   23,   23, 0x0a,
      24,   23,   23,   23, 0x09,
      62,   23,   23,   23, 0x09,
      91,   23,   23,   23, 0x09,
     113,   23,   23,   23, 0x09,
     133,   23,   23,   23, 0x09,
     153,   23,   23,   23, 0x09,
     176,   23,   23,   23, 0x09,
     203,   23,   23,   23, 0x09,
     222,   23,   23,   23, 0x09,
     242,   23,   23,   23, 0x09,
     267,   23,   23,   23, 0x09,
     287,   23,   23,   23, 0x09,
     307,   23,   23,   23, 0x09,
     334,   23,   23,   23, 0x09,
     357,   23,   23,   23, 0x09,
     385,   23,   23,   23, 0x09,
     398,   23,   23,   23, 0x09,
     422,   23,   23,   23, 0x09,
     442,   23,   23,   23, 0x09,
     466,   23,   23,   23, 0x09,
     500,   23,   23,   23, 0x09,
     522,   23,   23,   23, 0x09,
     545,   23,   23,   23, 0x09,
     575,   23,   23,   23, 0x09,
     600,   23,   23,   23, 0x09,
     626,   23,   23,   23, 0x09,
     647,   23,   23,   23, 0x09,
     668,   23,   23,   23, 0x09,
     697,   23,   23,   23, 0x09,
     729,   23,   23,   23, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QvisSaveWindow[] = {
    "QvisSaveWindow\0apply()\0\0"
    "outputToCurrentDirectoryToggled(bool)\0"
    "processOutputDirectoryText()\0"
    "processFilenameText()\0familyToggled(bool)\0"
    "stereoToggled(bool)\0fileFormatChanged(int)\0"
    "resConstraintToggled(bool)\0"
    "processWidthText()\0processHeightText()\0"
    "progressiveToggled(bool)\0binaryToggled(bool)\0"
    "qualityChanged(int)\0screenCaptureToggled(bool)\0"
    "saveTiledToggled(bool)\0"
    "compressionTypeChanged(int)\0saveWindow()\0"
    "selectOutputDirectory()\0saveButtonClicked()\0"
    "forceMergeToggled(bool)\0"
    "advancedMultiWinSaveToggled(bool)\0"
    "processmwsWidthText()\0processmwsHeightText()\0"
    "mwsWindowComboBoxChanged(int)\0"
    "processmwsIndWidthText()\0"
    "processmwsIndHeightText()\0"
    "processmwsPosXText()\0processmwsPosYText()\0"
    "mwsLayerComboBoxChanged(int)\0"
    "omitWindowCheckBoxToggled(bool)\0"
    "imageTransparencyChanged(int)\0"
};

void QvisSaveWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisSaveWindow *_t = static_cast<QvisSaveWindow *>(_o);
        switch (_id) {
        case 0: _t->apply(); break;
        case 1: _t->outputToCurrentDirectoryToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->processOutputDirectoryText(); break;
        case 3: _t->processFilenameText(); break;
        case 4: _t->familyToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->stereoToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->fileFormatChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->resConstraintToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->processWidthText(); break;
        case 9: _t->processHeightText(); break;
        case 10: _t->progressiveToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->binaryToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->qualityChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->screenCaptureToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->saveTiledToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->compressionTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->saveWindow(); break;
        case 17: _t->selectOutputDirectory(); break;
        case 18: _t->saveButtonClicked(); break;
        case 19: _t->forceMergeToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->advancedMultiWinSaveToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->processmwsWidthText(); break;
        case 22: _t->processmwsHeightText(); break;
        case 23: _t->mwsWindowComboBoxChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->processmwsIndWidthText(); break;
        case 25: _t->processmwsIndHeightText(); break;
        case 26: _t->processmwsPosXText(); break;
        case 27: _t->processmwsPosYText(); break;
        case 28: _t->mwsLayerComboBoxChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->omitWindowCheckBoxToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: _t->imageTransparencyChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisSaveWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisSaveWindow::staticMetaObject = {
    { &QvisPostableWindowObserver::staticMetaObject, qt_meta_stringdata_QvisSaveWindow,
      qt_meta_data_QvisSaveWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisSaveWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisSaveWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisSaveWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisSaveWindow))
        return static_cast<void*>(const_cast< QvisSaveWindow*>(this));
    return QvisPostableWindowObserver::qt_metacast(_clname);
}

int QvisSaveWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisPostableWindowObserver::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
