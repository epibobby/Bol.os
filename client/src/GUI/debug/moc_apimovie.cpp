/****************************************************************************
** Meta object code from reading C++ file 'apimovie.h'
**
** Created: Mon 16. Apr 00:17:44 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../API/apimovie.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'apimovie.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ApiMovie[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,
      47,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      65,   59,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ApiMovie[] = {
    "ApiMovie\0\0found(QList<QMap<QString,QString> >)\0"
    "JsonReady()\0reply\0remoteAnswer(QNetworkReply*)\0"
};

void ApiMovie::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ApiMovie *_t = static_cast<ApiMovie *>(_o);
        switch (_id) {
        case 0: _t->found((*reinterpret_cast< QList<QMap<QString,QString> >(*)>(_a[1]))); break;
        case 1: _t->JsonReady(); break;
        case 2: _t->remoteAnswer((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ApiMovie::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ApiMovie::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ApiMovie,
      qt_meta_data_ApiMovie, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ApiMovie::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ApiMovie::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ApiMovie::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ApiMovie))
        return static_cast<void*>(const_cast< ApiMovie*>(this));
    return QObject::qt_metacast(_clname);
}

int ApiMovie::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void ApiMovie::found(QList<QMap<QString,QString> > _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ApiMovie::JsonReady()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
