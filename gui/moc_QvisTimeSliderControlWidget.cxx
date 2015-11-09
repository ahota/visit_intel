/****************************************************************************
** Meta object code from reading C++ file 'QvisTimeSliderControlWidget.h'
**
** Created: Wed Nov 4 16:17:58 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisTimeSliderControlWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisTimeSliderControlWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisTimeSliderControlWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   48,   48,   48, 0x05,

 // slots: signature, parameters, type, tag, flags
      49,   48,   48,   48, 0x08,
      77,   48,   48,   48, 0x08,
      92,   48,   48,   48, 0x08,
     106,   48,   48,   48, 0x08,
     113,   48,   48,   48, 0x08,
     120,   48,   48,   48, 0x08,
     134,   48,   48,   48, 0x08,
     148,  164,   48,   48, 0x08,
     168,   48,   48,   48, 0x08,
     180,  164,   48,   48, 0x08,
     198,   48,   48,   48, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisTimeSliderControlWidget[] = {
    "QvisTimeSliderControlWidget\0"
    "reopenOnNextFrame()\0\0changeActiveTimeSlider(int)\0"
    "backwardStep()\0reversePlay()\0stop()\0"
    "play()\0forwardStep()\0sliderStart()\0"
    "sliderMove(int)\0val\0sliderEnd()\0"
    "sliderChange(int)\0processTimeText()\0"
};

void QvisTimeSliderControlWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisTimeSliderControlWidget *_t = static_cast<QvisTimeSliderControlWidget *>(_o);
        switch (_id) {
        case 0: _t->reopenOnNextFrame(); break;
        case 1: _t->changeActiveTimeSlider((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->backwardStep(); break;
        case 3: _t->reversePlay(); break;
        case 4: _t->stop(); break;
        case 5: _t->play(); break;
        case 6: _t->forwardStep(); break;
        case 7: _t->sliderStart(); break;
        case 8: _t->sliderMove((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->sliderEnd(); break;
        case 10: _t->sliderChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->processTimeText(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisTimeSliderControlWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisTimeSliderControlWidget::staticMetaObject = {
    { &QGroupBox::staticMetaObject, qt_meta_stringdata_QvisTimeSliderControlWidget,
      qt_meta_data_QvisTimeSliderControlWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisTimeSliderControlWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisTimeSliderControlWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisTimeSliderControlWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisTimeSliderControlWidget))
        return static_cast<void*>(const_cast< QvisTimeSliderControlWidget*>(this));
    if (!strcmp(_clname, "SimpleObserver"))
        return static_cast< SimpleObserver*>(const_cast< QvisTimeSliderControlWidget*>(this));
    if (!strcmp(_clname, "GUIBase"))
        return static_cast< GUIBase*>(const_cast< QvisTimeSliderControlWidget*>(this));
    return QGroupBox::qt_metacast(_clname);
}

int QvisTimeSliderControlWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
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
void QvisTimeSliderControlWidget::reopenOnNextFrame()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
