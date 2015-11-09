/****************************************************************************
** Meta object code from reading C++ file 'WebSocketConnection.h'
**
** Created: Wed Nov 4 16:21:19 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "WebSocketConnection.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WebSocketConnection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QWsSocket[] = {

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
      10,   33,   39,   39, 0x05,
      40,   33,   39,   39, 0x05,
      66,   80,   39,   39, 0x05,
      92,   39,   39,   39, 0x05,

 // slots: signature, parameters, type, tag, flags
     108,  123,   39,   39, 0x0a,
     130,   39,   39,   39, 0x0a,
     137,   39,   39,   39, 0x09,
     152,   39,   39,   39, 0x09,
     170,   39,   39,   39, 0x08,
     194,   39,   39,   39, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QWsSocket[] = {
    "QWsSocket\0frameReceived(QString)\0frame\0"
    "\0frameReceived(QByteArray)\0pong(quint64)\0"
    "elapsedTime\0framesWritten()\0close(QString)\0"
    "reason\0ping()\0dataReceived()\0"
    "dataReceivedAll()\0tcpSocketAboutToClose()\0"
    "tcpSocketDisconnected()\0"
};

void QWsSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QWsSocket *_t = static_cast<QWsSocket *>(_o);
        switch (_id) {
        case 0: _t->frameReceived((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->frameReceived((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 2: _t->pong((*reinterpret_cast< quint64(*)>(_a[1]))); break;
        case 3: _t->framesWritten(); break;
        case 4: _t->close((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->ping(); break;
        case 6: _t->dataReceived(); break;
        case 7: _t->dataReceivedAll(); break;
        case 8: _t->tcpSocketAboutToClose(); break;
        case 9: _t->tcpSocketDisconnected(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QWsSocket::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QWsSocket::staticMetaObject = {
    { &QAbstractSocket::staticMetaObject, qt_meta_stringdata_QWsSocket,
      qt_meta_data_QWsSocket, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QWsSocket::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QWsSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QWsSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QWsSocket))
        return static_cast<void*>(const_cast< QWsSocket*>(this));
    return QAbstractSocket::qt_metacast(_clname);
}

int QWsSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractSocket::qt_metacall(_c, _id, _a);
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
void QWsSocket::frameReceived(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QWsSocket::frameReceived(QByteArray _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QWsSocket::pong(quint64 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QWsSocket::framesWritten()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
static const uint qt_meta_data_WebSocketConnection[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   43,   49,   49, 0x08,
      50,   69,   49,   49, 0x08,
      73,   49,   49,   49, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_WebSocketConnection[] = {
    "WebSocketConnection\0ReadFrame(QByteArray&)\0"
    "array\0\0ReadFrame(QString)\0str\0"
    "closeConnection()\0"
};

void WebSocketConnection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WebSocketConnection *_t = static_cast<WebSocketConnection *>(_o);
        switch (_id) {
        case 0: _t->ReadFrame((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: _t->ReadFrame((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->closeConnection(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WebSocketConnection::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WebSocketConnection::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WebSocketConnection,
      qt_meta_data_WebSocketConnection, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WebSocketConnection::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WebSocketConnection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WebSocketConnection::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WebSocketConnection))
        return static_cast<void*>(const_cast< WebSocketConnection*>(this));
    if (!strcmp(_clname, "SocketConnection"))
        return static_cast< SocketConnection*>(const_cast< WebSocketConnection*>(this));
    return QObject::qt_metacast(_clname);
}

int WebSocketConnection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
