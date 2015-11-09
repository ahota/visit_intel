/****************************************************************************
** Meta object code from reading C++ file 'QvisViewportWidget.h'
**
** Created: Wed Nov 4 16:17:58 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisViewportWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisViewportWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisViewportWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   66,   89,   89, 0x05,
      90,   66,   89,   89, 0x05,
     139,   89,   89,   89, 0x05,
     164,   89,   89,   89, 0x05,

 // slots: signature, parameters, type, tag, flags
     191,  236,  253,   89, 0x0a,
     261,  298,  253,   89, 0x0a,
     314,   89,   89,   89, 0x0a,
     338,   89,   89,   89, 0x0a,
     365,   89,   89,   89, 0x0a,
     373,   89,   89,   89, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisViewportWidget[] = {
    "QvisViewportWidget\0"
    "viewportAdded(QString,float,float,float,float)\0"
    ",left,bottom,right,top\0\0"
    "viewportChanged(QString,float,float,float,float)\0"
    "viewportRemoved(QString)\0"
    "viewportActivated(QString)\0"
    "addViewport(QString,float,float,float,float)\0"
    ",llx,lly,urx,ury\0QString\0"
    "addViewport(float,float,float,float)\0"
    "llx,lly,urx,ury\0removeViewport(QString)\0"
    "setActiveViewport(QString)\0clear()\0"
    "onSceneSelectionChanged()\0"
};

void QvisViewportWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisViewportWidget *_t = static_cast<QvisViewportWidget *>(_o);
        switch (_id) {
        case 0: _t->viewportAdded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5]))); break;
        case 1: _t->viewportChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5]))); break;
        case 2: _t->viewportRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->viewportActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: { QString _r = _t->addViewport((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 5: { QString _r = _t->addViewport((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 6: _t->removeViewport((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->setActiveViewport((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->clear(); break;
        case 9: _t->onSceneSelectionChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisViewportWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisViewportWidget::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_QvisViewportWidget,
      qt_meta_data_QvisViewportWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisViewportWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisViewportWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisViewportWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisViewportWidget))
        return static_cast<void*>(const_cast< QvisViewportWidget*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int QvisViewportWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
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
void QvisViewportWidget::viewportAdded(const QString & _t1, float _t2, float _t3, float _t4, float _t5)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QvisViewportWidget::viewportChanged(const QString & _t1, float _t2, float _t3, float _t4, float _t5)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QvisViewportWidget::viewportRemoved(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QvisViewportWidget::viewportActivated(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
