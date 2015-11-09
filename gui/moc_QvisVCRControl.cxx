/****************************************************************************
** Meta object code from reading C++ file 'QvisVCRControl.h'
**
** Created: Wed Nov 4 16:17:58 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisVCRControl.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisVCRControl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisVCRControl[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   27,   27,   27, 0x05,
      28,   27,   27,   27, 0x05,
      42,   27,   27,   27, 0x05,
      49,   27,   27,   27, 0x05,
      56,   27,   27,   27, 0x05,

 // slots: signature, parameters, type, tag, flags
      68,   27,   27,   27, 0x08,
      81,   27,   27,   27, 0x08,
      94,   27,   27,   27, 0x08,
     107,   27,   27,   27, 0x08,
     120,   27,   27,   27, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisVCRControl[] = {
    "QvisVCRControl\0prevFrame()\0\0reversePlay()\0"
    "stop()\0play()\0nextFrame()\0b0_clicked()\0"
    "b1_clicked()\0b2_clicked()\0b3_clicked()\0"
    "b4_clicked()\0"
};

void QvisVCRControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisVCRControl *_t = static_cast<QvisVCRControl *>(_o);
        switch (_id) {
        case 0: _t->prevFrame(); break;
        case 1: _t->reversePlay(); break;
        case 2: _t->stop(); break;
        case 3: _t->play(); break;
        case 4: _t->nextFrame(); break;
        case 5: _t->b0_clicked(); break;
        case 6: _t->b1_clicked(); break;
        case 7: _t->b2_clicked(); break;
        case 8: _t->b3_clicked(); break;
        case 9: _t->b4_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QvisVCRControl::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisVCRControl::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QvisVCRControl,
      qt_meta_data_QvisVCRControl, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisVCRControl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisVCRControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisVCRControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisVCRControl))
        return static_cast<void*>(const_cast< QvisVCRControl*>(this));
    return QWidget::qt_metacast(_clname);
}

int QvisVCRControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void QvisVCRControl::prevFrame()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QvisVCRControl::reversePlay()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QvisVCRControl::stop()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void QvisVCRControl::play()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void QvisVCRControl::nextFrame()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
QT_END_MOC_NAMESPACE
