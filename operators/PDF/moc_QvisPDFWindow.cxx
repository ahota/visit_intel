/****************************************************************************
** Meta object code from reading C++ file 'QvisPDFWindow.h'
**
** Created: Wed Nov 4 16:19:14 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisPDFWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisPDFWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisPDFWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   32,   32,   32, 0x08,
      33,   58,   32,   32, 0x08,
      62,   58,   32,   32, 0x08,
      87,   32,   32,   32, 0x08,
     108,   32,   32,   32, 0x08,
     129,   58,   32,   32, 0x08,
     153,   32,   32,   32, 0x08,
     181,   32,   32,   32, 0x08,
     209,   32,   32,   32, 0x08,
     227,   58,   32,   32, 0x08,
     252,   58,   32,   32, 0x08,
     277,   32,   32,   32, 0x08,
     298,   32,   32,   32, 0x08,
     319,   58,   32,   32, 0x08,
     343,   32,   32,   32, 0x08,
     371,   32,   32,   32, 0x08,
     399,   58,   32,   32, 0x08,
     419,   32,   32,   32, 0x08,
     437,   58,   32,   32, 0x08,
     462,   58,   32,   32, 0x08,
     487,   32,   32,   32, 0x08,
     508,   32,   32,   32, 0x08,
     529,   58,   32,   32, 0x08,
     553,   32,   32,   32, 0x08,
     581,   32,   32,   32, 0x08,
     609,   58,   32,   32, 0x08,
     632,   58,   32,   32, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisPDFWindow[] = {
    "QvisPDFWindow\0var1ProcessText()\0\0"
    "var1MinFlagChanged(bool)\0val\0"
    "var1MaxFlagChanged(bool)\0var1MinProcessText()\0"
    "var1MaxProcessText()\0var1ScalingChanged(int)\0"
    "var1SkewFactorProcessText()\0"
    "var1NumSamplesProcessText()\0"
    "var2ProcessText()\0var2MinFlagChanged(bool)\0"
    "var2MaxFlagChanged(bool)\0var2MinProcessText()\0"
    "var2MaxProcessText()\0var2ScalingChanged(int)\0"
    "var2SkewFactorProcessText()\0"
    "var2NumSamplesProcessText()\0"
    "numAxesChanged(int)\0var3ProcessText()\0"
    "var3MinFlagChanged(bool)\0"
    "var3MaxFlagChanged(bool)\0var3MinProcessText()\0"
    "var3MaxProcessText()\0var3ScalingChanged(int)\0"
    "var3SkewFactorProcessText()\0"
    "var3NumSamplesProcessText()\0"
    "scaleCubeChanged(bool)\0densityTypeChanged(int)\0"
};

void QvisPDFWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisPDFWindow *_t = static_cast<QvisPDFWindow *>(_o);
        switch (_id) {
        case 0: _t->var1ProcessText(); break;
        case 1: _t->var1MinFlagChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->var1MaxFlagChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->var1MinProcessText(); break;
        case 4: _t->var1MaxProcessText(); break;
        case 5: _t->var1ScalingChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->var1SkewFactorProcessText(); break;
        case 7: _t->var1NumSamplesProcessText(); break;
        case 8: _t->var2ProcessText(); break;
        case 9: _t->var2MinFlagChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->var2MaxFlagChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->var2MinProcessText(); break;
        case 12: _t->var2MaxProcessText(); break;
        case 13: _t->var2ScalingChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->var2SkewFactorProcessText(); break;
        case 15: _t->var2NumSamplesProcessText(); break;
        case 16: _t->numAxesChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->var3ProcessText(); break;
        case 18: _t->var3MinFlagChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->var3MaxFlagChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->var3MinProcessText(); break;
        case 21: _t->var3MaxProcessText(); break;
        case 22: _t->var3ScalingChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->var3SkewFactorProcessText(); break;
        case 24: _t->var3NumSamplesProcessText(); break;
        case 25: _t->scaleCubeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->densityTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisPDFWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisPDFWindow::staticMetaObject = {
    { &QvisOperatorWindow::staticMetaObject, qt_meta_stringdata_QvisPDFWindow,
      qt_meta_data_QvisPDFWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisPDFWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisPDFWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisPDFWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisPDFWindow))
        return static_cast<void*>(const_cast< QvisPDFWindow*>(this));
    return QvisOperatorWindow::qt_metacast(_clname);
}

int QvisPDFWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisOperatorWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
