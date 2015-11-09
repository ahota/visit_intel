/****************************************************************************
** Meta object code from reading C++ file 'QvisScatterPlotWizardPage.h'
**
** Created: Wed Nov 4 16:18:49 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisScatterPlotWizardPage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisScatterPlotWizardPage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisScatterPlotWizardPage[] = {

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
      26,   50,   50,   50, 0x09,
      51,   50,   50,   50, 0x09,
      75,   50,   50,   50, 0x09,
      99,   50,   50,   50, 0x09,
     127,   50,   50,   50, 0x09,
     140,   50,   50,   50, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QvisScatterPlotWizardPage[] = {
    "QvisScatterPlotWizardPage\0"
    "choseXVariable(QString)\0\0"
    "choseYVariable(QString)\0choseZVariable(QString)\0"
    "choseColorVariable(QString)\0decideZ(int)\0"
    "decideColor(int)\0"
};

void QvisScatterPlotWizardPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisScatterPlotWizardPage *_t = static_cast<QvisScatterPlotWizardPage *>(_o);
        switch (_id) {
        case 0: _t->choseXVariable((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->choseYVariable((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->choseZVariable((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->choseColorVariable((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->decideZ((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->decideColor((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisScatterPlotWizardPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisScatterPlotWizardPage::staticMetaObject = {
    { &QWizardPage::staticMetaObject, qt_meta_stringdata_QvisScatterPlotWizardPage,
      qt_meta_data_QvisScatterPlotWizardPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisScatterPlotWizardPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisScatterPlotWizardPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisScatterPlotWizardPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisScatterPlotWizardPage))
        return static_cast<void*>(const_cast< QvisScatterPlotWizardPage*>(this));
    return QWizardPage::qt_metacast(_clname);
}

int QvisScatterPlotWizardPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
