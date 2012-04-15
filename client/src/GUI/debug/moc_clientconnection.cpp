/****************************************************************************
** Meta object code from reading C++ file 'clientconnection.h'
**
** Created: Sun 15. Apr 23:27:13 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../clientconnection.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clientconnection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ClientConnection[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x0a,
      33,   17,   17,   17, 0x0a,
      46,   17,   17,   17, 0x0a,
      79,   70,   62,   17, 0x0a,
     117,  113,   62,   17, 0x2a,
     141,   17,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ClientConnection[] = {
    "ClientConnection\0\0readOnServer()\0"
    "_connected()\0_disconnected()\0QString\0"
    "req,user\0prepareMsg(RequestType,UserInfo*)\0"
    "req\0prepareMsg(RequestType)\0"
    "_displayError(QAbstractSocket::SocketError)\0"
};

void ClientConnection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ClientConnection *_t = static_cast<ClientConnection *>(_o);
        switch (_id) {
        case 0: _t->readOnServer(); break;
        case 1: _t->_connected(); break;
        case 2: _t->_disconnected(); break;
        case 3: { QString _r = _t->prepareMsg((*reinterpret_cast< RequestType(*)>(_a[1])),(*reinterpret_cast< UserInfo*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 4: { QString _r = _t->prepareMsg((*reinterpret_cast< RequestType(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 5: _t->_displayError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ClientConnection::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ClientConnection::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ClientConnection,
      qt_meta_data_ClientConnection, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ClientConnection::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ClientConnection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ClientConnection::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ClientConnection))
        return static_cast<void*>(const_cast< ClientConnection*>(this));
    return QObject::qt_metacast(_clname);
}

int ClientConnection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
