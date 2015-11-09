/****************************************************************************
** Meta object code from reading C++ file 'QvisParallelCoordinatesPlotWizardPage.h'
**
** Created: Wed Nov 4 16:18:49 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisParallelCoordinatesPlotWizardPage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisParallelCoordinatesPlotWizardPage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisParallelCoordinatesPlotWizardPage[] = {

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
      38,   68,   68,   68, 0x09,
      69,   68,   68,   68, 0x09,
      97,   68,   68,   68, 0x09,
     118,   68,   68,   68, 0x09,
     138,   68,   68,   68, 0x09,
     160,   68,   68,   68, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QvisParallelCoordinatesPlotWizardPage[] = {
    "QvisParallelCoordinatesPlotWizardPage\0"
    "OnScalarVarSelectionChanged()\0\0"
    "OnAxisVarSelectionChanged()\0"
    "OnAddButtonPressed()\0OnUpButtonPressed()\0"
    "OnDownButtonPressed()\0OnRemoveButtonPressed()\0"
};

void QvisParallelCoordinatesPlotWizardPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisParallelCoordinatesPlotWizardPage *_t = static_cast<QvisParallelCoordinatesPlotWizardPage *>(_o);
        switch (_id) {
        case 0: _t->OnScalarVarSelectionChanged(); break;
        case 1: _t->OnAxisVarSelectionChanged(); break;
        case 2: _t->OnAddButtonPressed(); break;
        case 3: _t->OnUpButtonPressed(); break;
        case 4: _t->OnDownButtonPressed(); break;
        case 5: _t->OnRemoveButtonPressed(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QvisParallelCoordinatesPlotWizardPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisParallelCoordinatesPlotWizardPage::staticMetaObject = {
    { &QWizardPage::staticMetaObject, qt_meta_stringdata_QvisParallelCoordinatesPlotWizardPage,
      qt_meta_data_QvisParallelCoordinatesPlotWizardPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisParallelCoordinatesPlotWizardPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisParallelCoordinatesPlotWizardPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisParallelCoordinatesPlotWizardPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisParallelCoordinatesPlotWizardPage))
        return static_cast<void*>(const_cast< QvisParallelCoordinatesPlotWizardPage*>(this));
    return QWizardPage::qt_metacast(_clname);
}

int QvisParallelCoordinatesPlotWizardPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
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
