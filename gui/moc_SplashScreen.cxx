/****************************************************************************
** Meta object code from reading C++ file 'SplashScreen.h'
**
** Created: Wed Nov 4 16:17:58 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "SplashScreen.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SplashScreen.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SplashScreen[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   29,   29,   29, 0x05,
      30,   29,   29,   29, 0x05,

 // slots: signature, parameters, type, tag, flags
      49,   29,   29,   29, 0x0a,
      56,   29,   29,   29, 0x0a,
      63,   29,   29,   29, 0x0a,
      77,   29,   29,   29, 0x08,
      97,   29,   29,   29, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SplashScreen[] = {
    "SplashScreen\0showCopyright()\0\0"
    "showContributors()\0show()\0hide()\0"
    "nextPicture()\0emitShowCopyright()\0"
    "emitShowContributors()\0"
};

void SplashScreen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SplashScreen *_t = static_cast<SplashScreen *>(_o);
        switch (_id) {
        case 0: _t->showCopyright(); break;
        case 1: _t->showContributors(); break;
        case 2: _t->show(); break;
        case 3: _t->hide(); break;
        case 4: _t->nextPicture(); break;
        case 5: _t->emitShowCopyright(); break;
        case 6: _t->emitShowContributors(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SplashScreen::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SplashScreen::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_SplashScreen,
      qt_meta_data_SplashScreen, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SplashScreen::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SplashScreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SplashScreen::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SplashScreen))
        return static_cast<void*>(const_cast< SplashScreen*>(this));
    return QFrame::qt_metacast(_clname);
}

int SplashScreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void SplashScreen::showCopyright()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void SplashScreen::showContributors()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
