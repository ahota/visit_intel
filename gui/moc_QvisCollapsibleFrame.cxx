/****************************************************************************
** Meta object code from reading C++ file 'QvisCollapsibleFrame.h'
**
** Created: Wed Nov 4 16:17:58 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisCollapsibleFrame.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisCollapsibleFrame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisTitleBar[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   51,   57,   57, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QvisTitleBar[] = {
    "QvisTitleBar\0showOrHide(QvisTitleBar::LayoutState)\0"
    "state\0\0"
};

void QvisTitleBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisTitleBar *_t = static_cast<QvisTitleBar *>(_o);
        switch (_id) {
        case 0: _t->showOrHide((*reinterpret_cast< QvisTitleBar::LayoutState(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisTitleBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisTitleBar::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_QvisTitleBar,
      qt_meta_data_QvisTitleBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisTitleBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisTitleBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisTitleBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisTitleBar))
        return static_cast<void*>(const_cast< QvisTitleBar*>(this));
    return QLabel::qt_metacast(_clname);
}

int QvisTitleBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QvisTitleBar::showOrHide(QvisTitleBar::LayoutState _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_QvisCollapsibleFrame[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   36,   36,   36, 0x05,

 // slots: signature, parameters, type, tag, flags
      37,   75,   36,   36, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisCollapsibleFrame[] = {
    "QvisCollapsibleFrame\0updateLayout()\0"
    "\0showOrHide(QvisTitleBar::LayoutState)\0"
    "state\0"
};

void QvisCollapsibleFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisCollapsibleFrame *_t = static_cast<QvisCollapsibleFrame *>(_o);
        switch (_id) {
        case 0: _t->updateLayout(); break;
        case 1: _t->showOrHide((*reinterpret_cast< QvisTitleBar::LayoutState(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisCollapsibleFrame::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisCollapsibleFrame::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QvisCollapsibleFrame,
      qt_meta_data_QvisCollapsibleFrame, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisCollapsibleFrame::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisCollapsibleFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisCollapsibleFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisCollapsibleFrame))
        return static_cast<void*>(const_cast< QvisCollapsibleFrame*>(this));
    return QWidget::qt_metacast(_clname);
}

int QvisCollapsibleFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QvisCollapsibleFrame::updateLayout()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_QvisCollapsibleLayout[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   37,   37,   37, 0x08,
      38,   37,   37,   37, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisCollapsibleLayout[] = {
    "QvisCollapsibleLayout\0updateLayout()\0"
    "\0adjustWindowSize()\0"
};

void QvisCollapsibleLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisCollapsibleLayout *_t = static_cast<QvisCollapsibleLayout *>(_o);
        switch (_id) {
        case 0: _t->updateLayout(); break;
        case 1: _t->adjustWindowSize(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QvisCollapsibleLayout::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisCollapsibleLayout::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QvisCollapsibleLayout,
      qt_meta_data_QvisCollapsibleLayout, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisCollapsibleLayout::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisCollapsibleLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisCollapsibleLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisCollapsibleLayout))
        return static_cast<void*>(const_cast< QvisCollapsibleLayout*>(this));
    return QWidget::qt_metacast(_clname);
}

int QvisCollapsibleLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
