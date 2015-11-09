/****************************************************************************
** Meta object code from reading C++ file 'MultiCurveViewer.h'
**
** Created: Wed Nov 4 16:32:39 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MultiCurveViewer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MultiCurveViewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MultiCurveViewer[] = {

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
      17,   24,   24,   24, 0x0a,
      25,   24,   24,   24, 0x08,
      38,   24,   24,   24, 0x08,
      63,  107,   24,   24, 0x08,
     112,  107,   24,   24, 0x08,
     155,  107,   24,   24, 0x08,
     202,  107,   24,   24, 0x08,
     255,  107,   24,   24, 0x08,
     312,   24,   24,   24, 0x08,
     325,   24,   24,   24, 0x08,
     335,   24,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MultiCurveViewer[] = {
    "MultiCurveViewer\0show()\0\0selectFile()\0"
    "variableChanged(QString)\0"
    "indexSelectChanged(const AttributeSubject*)\0"
    "atts\0multiCurveChanged(const AttributeSubject*)\0"
    "annotationChanged(const AnnotationAttributes*)\0"
    "viewAxisArrayChanged(const ViewAxisArrayAttributes*)\0"
    "annotationObjectListChanged(const AnnotationObjectList*)\0"
    "saveWindow()\0openGUI()\0finishPlot()\0"
};

void MultiCurveViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MultiCurveViewer *_t = static_cast<MultiCurveViewer *>(_o);
        switch (_id) {
        case 0: _t->show(); break;
        case 1: _t->selectFile(); break;
        case 2: _t->variableChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->indexSelectChanged((*reinterpret_cast< const AttributeSubject*(*)>(_a[1]))); break;
        case 4: _t->multiCurveChanged((*reinterpret_cast< const AttributeSubject*(*)>(_a[1]))); break;
        case 5: _t->annotationChanged((*reinterpret_cast< const AnnotationAttributes*(*)>(_a[1]))); break;
        case 6: _t->viewAxisArrayChanged((*reinterpret_cast< const ViewAxisArrayAttributes*(*)>(_a[1]))); break;
        case 7: _t->annotationObjectListChanged((*reinterpret_cast< const AnnotationObjectList*(*)>(_a[1]))); break;
        case 8: _t->saveWindow(); break;
        case 9: _t->openGUI(); break;
        case 10: _t->finishPlot(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MultiCurveViewer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MultiCurveViewer::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MultiCurveViewer,
      qt_meta_data_MultiCurveViewer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MultiCurveViewer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MultiCurveViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MultiCurveViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MultiCurveViewer))
        return static_cast<void*>(const_cast< MultiCurveViewer*>(this));
    if (!strcmp(_clname, "SimpleObserver"))
        return static_cast< SimpleObserver*>(const_cast< MultiCurveViewer*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MultiCurveViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
