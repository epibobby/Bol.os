/****************************************************************************
** Meta object code from reading C++ file 'mySession.h'
**
** Created: Mon 16. Apr 00:18:02 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../IRC/mySession.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mySession.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MySession[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x0a,
      29,   10,   10,   10, 0x0a,
      60,   10,   10,   10, 0x0a,
      83,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MySession[] = {
    "MySession\0\0connectToServer()\0"
    "onMessageReceived(IrcMessage*)\0"
    "disConnectFromServer()\0onConnected()\0"
};

void MySession::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MySession *_t = static_cast<MySession *>(_o);
        switch (_id) {
        case 0: _t->connectToServer(); break;
        case 1: _t->onMessageReceived((*reinterpret_cast< IrcMessage*(*)>(_a[1]))); break;
        case 2: _t->disConnectFromServer(); break;
        case 3: _t->onConnected(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MySession::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MySession::staticMetaObject = {
    { &IrcSession::staticMetaObject, qt_meta_stringdata_MySession,
      qt_meta_data_MySession, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MySession::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MySession::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MySession::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MySession))
        return static_cast<void*>(const_cast< MySession*>(this));
    return IrcSession::qt_metacast(_clname);
}

int MySession::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IrcSession::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
