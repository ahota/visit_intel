/****************************************************************************
** Meta object code from reading C++ file 'QvisAnnotationWidget.h'
**
** Created: Wed Nov 4 16:32:39 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisAnnotationWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisAnnotationWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisAnnotationWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   68,   68,   68, 0x05,
      69,   68,   68,   68, 0x05,
     122,   68,   68,   68, 0x05,

 // slots: signature, parameters, type, tag, flags
     179,  198,   68,   68, 0x08,
     202,  230,   68,   68, 0x08,
     236,  198,   68,   68, 0x08,
     259,  198,   68,   68, 0x08,
     284,  198,   68,   68, 0x08,
     303,  230,   68,   68, 0x08,
     331,  198,   68,   68, 0x08,
     354,  198,   68,   68, 0x08,
     379,  230,   68,   68, 0x08,
     408,  198,   68,   68, 0x08,
     432,  198,   68,   68, 0x08,
     458,  198,   68,   68, 0x08,
     476,   68,   68,   68, 0x08,
     504,   68,   68,   68, 0x08,
     532,   68,   68,   68, 0x08,
     562,   68,   68,   68, 0x08,
     588,   68,   68,   68, 0x08,
     614,   68,   68,   68, 0x08,
     640,   68,   68,   68, 0x08,
     666,   68,   68,   68, 0x08,
     688,   68,   68,   68, 0x08,
     708,   68,   68,   68, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisAnnotationWidget[] = {
    "QvisAnnotationWidget\0"
    "annotationChanged(const AnnotationAttributes*)\0"
    "\0viewAxisArrayChanged(const ViewAxisArrayAttributes*)\0"
    "annotationObjectListChanged(const AnnotationObjectList*)\0"
    "titleToggled(bool)\0val\0"
    "titleFontFamilyChanged(int)\0value\0"
    "titleBoldToggled(bool)\0titleItalicToggled(bool)\0"
    "labelToggled(bool)\0labelFontFamilyChanged(int)\0"
    "labelBoldToggled(bool)\0labelItalicToggled(bool)\0"
    "legendFontFamilyChanged(int)\0"
    "legendBoldToggled(bool)\0"
    "legendItalicToggled(bool)\0tickToggled(bool)\0"
    "processTitleFontScaleText()\0"
    "processLabelFontScaleText()\0"
    "processLegendFontHeightText()\0"
    "processMajorMinimumText()\0"
    "processMajorMaximumText()\0"
    "processMinorSpacingText()\0"
    "processMajorSpacingText()\0"
    "processViewportText()\0processDomainText()\0"
    "processRangeText()\0"
};

void QvisAnnotationWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisAnnotationWidget *_t = static_cast<QvisAnnotationWidget *>(_o);
        switch (_id) {
        case 0: _t->annotationChanged((*reinterpret_cast< const AnnotationAttributes*(*)>(_a[1]))); break;
        case 1: _t->viewAxisArrayChanged((*reinterpret_cast< const ViewAxisArrayAttributes*(*)>(_a[1]))); break;
        case 2: _t->annotationObjectListChanged((*reinterpret_cast< const AnnotationObjectList*(*)>(_a[1]))); break;
        case 3: _t->titleToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->titleFontFamilyChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->titleBoldToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->titleItalicToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->labelToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->labelFontFamilyChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->labelBoldToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->labelItalicToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->legendFontFamilyChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->legendBoldToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->legendItalicToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->tickToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->processTitleFontScaleText(); break;
        case 16: _t->processLabelFontScaleText(); break;
        case 17: _t->processLegendFontHeightText(); break;
        case 18: _t->processMajorMinimumText(); break;
        case 19: _t->processMajorMaximumText(); break;
        case 20: _t->processMinorSpacingText(); break;
        case 21: _t->processMajorSpacingText(); break;
        case 22: _t->processViewportText(); break;
        case 23: _t->processDomainText(); break;
        case 24: _t->processRangeText(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisAnnotationWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisAnnotationWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QvisAnnotationWidget,
      qt_meta_data_QvisAnnotationWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisAnnotationWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisAnnotationWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisAnnotationWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisAnnotationWidget))
        return static_cast<void*>(const_cast< QvisAnnotationWidget*>(this));
    if (!strcmp(_clname, "SimpleObserver"))
        return static_cast< SimpleObserver*>(const_cast< QvisAnnotationWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QvisAnnotationWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}

// SIGNAL 0
void QvisAnnotationWidget::annotationChanged(const AnnotationAttributes * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QvisAnnotationWidget::viewAxisArrayChanged(const ViewAxisArrayAttributes * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QvisAnnotationWidget::annotationObjectListChanged(const AnnotationObjectList * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
