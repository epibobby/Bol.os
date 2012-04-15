/****************************************************************************
** Meta object code from reading C++ file 'sessionWrapper.h'
**
** Created: Mon 16. Apr 00:18:01 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../IRC/sessionWrapper.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sessionWrapper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Session[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,    9,    8,    8, 0x05,
      71,   54,    8,    8, 0x05,
     117,  105,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
     145,    8,    8,    8, 0x0a,
     167,  159,    8,    8, 0x0a,
     212,  198,    8,    8, 0x0a,
     253,  245,    8,    8, 0x0a,
     288,  277,    8,    8, 0x0a,
     329,  320,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Session[] = {
    "Session\0\0channel,output\0"
    "outputString(QString,QString)\0"
    "channel,nameList\0newNamesList(QString,QStringList)\0"
    "channelList\0newChannelList(QStringList)\0"
    "onConnected()\0message\0"
    "onMessageReceived(IrcMessage*)\0"
    "channel,input\0onInputReceived(QString,QString)\0"
    "channel\0onRefreshNames(QString)\0"
    "connection\0onUpdateConnection(Connection*)\0"
    "password\0onPassword(QString*)\0"
};

void Session::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Session *_t = static_cast<Session *>(_o);
        switch (_id) {
        case 0: _t->outputString((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->newNamesList((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2]))); break;
        case 2: _t->newChannelList((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 3: _t->onConnected(); break;
        case 4: _t->onMessageReceived((*reinterpret_cast< IrcMessage*(*)>(_a[1]))); break;
        case 5: _t->onInputReceived((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 6: _t->onRefreshNames((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->onUpdateConnection((*reinterpret_cast< Connection*(*)>(_a[1]))); break;
        case 8: _t->onPassword((*reinterpret_cast< QString*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Session::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Session::staticMetaObject = {
    { &IrcSession::staticMetaObject, qt_meta_stringdata_Session,
      qt_meta_data_Session, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Session::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Session::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Session::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Session))
        return static_cast<void*>(const_cast< Session*>(this));
    return IrcSession::qt_metacast(_clname);
}

int Session::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IrcSession::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void Session::outputString(QString _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Session::newNamesList(QString _t1, QStringList _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Session::newChannelList(QStringList _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
