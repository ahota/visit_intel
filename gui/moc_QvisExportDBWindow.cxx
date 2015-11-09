/****************************************************************************
** Meta object code from reading C++ file 'QvisExportDBWindow.h'
**
** Created: Wed Nov 4 16:17:57 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisExportDBWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisExportDBWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisExportDBWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   27,   27,   27, 0x0a,
      28,   27,   27,   27, 0x09,
      50,   27,   27,   27, 0x09,
      72,   27,   27,   27, 0x09,
      99,   27,   27,   27, 0x09,
     122,   27,   27,   27, 0x09,
     133,   27,   27,   27, 0x09,
     155,   27,   27,   27, 0x09,
     176,   27,   27,   27, 0x09,
     200,   27,   27,   27, 0x09,
     222,   27,   27,   27, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QvisExportDBWindow[] = {
    "QvisExportDBWindow\0apply()\0\0"
    "variableProcessText()\0processFilenameText()\0"
    "processDirectoryNameText()\0"
    "fileFormatChanged(int)\0exportDB()\0"
    "exportButtonClicked()\0addVariable(QString)\0"
    "selectOutputDirectory()\0delimiterChanged(int)\0"
    "allTimesToggled(bool)\0"
};

void QvisExportDBWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisExportDBWindow *_t = static_cast<QvisExportDBWindow *>(_o);
        switch (_id) {
        case 0: _t->apply(); break;
        case 1: _t->variableProcessText(); break;
        case 2: _t->processFilenameText(); break;
        case 3: _t->processDirectoryNameText(); break;
        case 4: _t->fileFormatChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->exportDB(); break;
        case 6: _t->exportButtonClicked(); break;
        case 7: _t->addVariable((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->selectOutputDirectory(); break;
        case 9: _t->delimiterChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->allTimesToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisExportDBWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisExportDBWindow::staticMetaObject = {
    { &QvisPostableWindowSimpleObserver::staticMetaObject, qt_meta_stringdata_QvisExportDBWindow,
      qt_meta_data_QvisExportDBWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisExportDBWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisExportDBWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisExportDBWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisExportDBWindow))
        return static_cast<void*>(const_cast< QvisExportDBWindow*>(this));
    return QvisPostableWindowSimpleObserver::qt_metacast(_clname);
}

int QvisExportDBWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisPostableWindowSimpleObserver::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
