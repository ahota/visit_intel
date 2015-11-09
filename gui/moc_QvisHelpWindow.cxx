/****************************************************************************
** Meta object code from reading C++ file 'QvisHelpWindow.h'
**
** Created: Wed Nov 4 16:17:57 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QvisHelpWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QvisHelpWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QvisHelpWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   34,   34,   34, 0x0a,
      35,   34,   34,   34, 0x0a,
      57,   34,   34,   34, 0x0a,
      90,   34,   34,   34, 0x0a,
     112,  130,   34,   34, 0x0a,
     136,   34,   34,   34, 0x0a,
     143,   34,   34,   34, 0x08,
     165,   34,   34,   34, 0x08,
     187,   34,   34,   34, 0x08,
     206,   34,   34,   34, 0x08,
     228,   34,   34,   34, 0x08,
     255,   34,   34,   34, 0x08,
     287,   34,   34,   34, 0x08,
     320,   34,   34,   34, 0x08,
     336,  358,   34,   34, 0x08,
     364,   34,   34,   34, 0x08,
     378,  404,  416,   34, 0x08,
     421,  442,  416,   34, 0x28,
     447,   34,   34,   34, 0x08,
     466,   34,   34,   34, 0x08,
     485,   34,   34,   34, 0x08,
     505,  532,   34,   34, 0x08,
     538,   34,   34,   34, 0x08,
     561,   34,   34,   34, 0x08,
     575,   34,   34,   34, 0x08,
     592,   34,   34,   34, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QvisHelpWindow[] = {
    "QvisHelpWindow\0displayCopyright()\0\0"
    "displayReleaseNotes()\0"
    "displayReleaseNotesIfAvailable()\0"
    "displayContributors()\0openHelp(QString)\0"
    "entry\0show()\0activeTabChanged(int)\0"
    "activateContentsTab()\0activateIndexTab()\0"
    "activateBookmarkTab()\0openHelp(QTreeWidgetItem*)\0"
    "topicExpanded(QTreeWidgetItem*)\0"
    "topicCollapsed(QTreeWidgetItem*)\0"
    "displayNoHelp()\0displayTitle(QString)\0"
    "title\0displayHome()\0displayPage(QString,bool)\0"
    "page,reload\0bool\0displayPage(QString)\0"
    "page\0increaseFontSize()\0decreaseFontSize()\0"
    "displayIndexTopic()\0lookForIndexTopic(QString)\0"
    "topic\0displayBookmarkTopic()\0addBookmark()\0"
    "removeBookmark()\0anchorClicked(QUrl)\0"
};

void QvisHelpWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QvisHelpWindow *_t = static_cast<QvisHelpWindow *>(_o);
        switch (_id) {
        case 0: _t->displayCopyright(); break;
        case 1: _t->displayReleaseNotes(); break;
        case 2: _t->displayReleaseNotesIfAvailable(); break;
        case 3: _t->displayContributors(); break;
        case 4: _t->openHelp((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->show(); break;
        case 6: _t->activeTabChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->activateContentsTab(); break;
        case 8: _t->activateIndexTab(); break;
        case 9: _t->activateBookmarkTab(); break;
        case 10: _t->openHelp((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 11: _t->topicExpanded((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 12: _t->topicCollapsed((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 13: _t->displayNoHelp(); break;
        case 14: _t->displayTitle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->displayHome(); break;
        case 16: { bool _r = _t->displayPage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->displayPage((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: _t->increaseFontSize(); break;
        case 19: _t->decreaseFontSize(); break;
        case 20: _t->displayIndexTopic(); break;
        case 21: _t->lookForIndexTopic((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 22: _t->displayBookmarkTopic(); break;
        case 23: _t->addBookmark(); break;
        case 24: _t->removeBookmark(); break;
        case 25: _t->anchorClicked((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QvisHelpWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QvisHelpWindow::staticMetaObject = {
    { &QvisDelayedWindow::staticMetaObject, qt_meta_stringdata_QvisHelpWindow,
      qt_meta_data_QvisHelpWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QvisHelpWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QvisHelpWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QvisHelpWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QvisHelpWindow))
        return static_cast<void*>(const_cast< QvisHelpWindow*>(this));
    return QvisDelayedWindow::qt_metacast(_clname);
}

int QvisHelpWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QvisDelayedWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
