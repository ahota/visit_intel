/****************************************************************************
** Meta object code from reading C++ file 'QvisKeyframeWindow.h'
**
** Created: Wed Nov 4 16:17:58 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisKeyframeWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisKeyframeWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisKeyframeWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   27,   27,   27, 0x0a,
      28,   27,   27,   27, 0x08,
      49,   27,   27,   27, 0x08,
      78,   27,   27,   27, 0x08,
     102,   27,   27,   27, 0x08,
     117,   27,   27,   27, 0x08,
     134,   27,   27,   27, 0x08,
     152,   27,   27,   27, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisKeyframeWindow[] = {
    "QvisKeyframeWindow\0apply()\0\0"
    "nFramesProcessText()\0keyframeEnabledToggled(bool)\0"
    "userSetNFrames(QString)\0newSelection()\0"
    "stateKFClicked()\0addViewKeyframe()\0"
    "useViewKFClicked(bool)\0"
};

void QvisKeyframeWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisKeyframeWindow *_t = static_cast<QvisKeyframeWindow *>(_o);
        switch (_id) {
        case 0: _t->apply(); break;
        case 1: _t->nFramesProcessText(); break;
        case 2: _t->keyframeEnabledToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->userSetNFrames((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->newSelection(); break;
        case 5: _t->stateKFClicked(); break;
        case 6: _t->addViewKeyframe(); break;
        case 7: _t->useViewKFClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisKeyframeWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisKeyframeWindow::staticMetaObject = {
    { &QvisPostableWindowSimpleObserver::staticMetaObject, qt_meta_stringdata_QvisKeyframeWindow,
      qt_meta_data_QvisKeyframeWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisKeyframeWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisKeyframeWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisKeyframeWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisKeyframeWindow))
        return static_cast<void*>(const_cast< QvisKeyframeWindow*>(this));
    return QvisPostableWindowSimpleObserver::qt_metacast(_clname);
}

int QvisKeyframeWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisPostableWindowSimpleObserver::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
