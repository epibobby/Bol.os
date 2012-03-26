/****************************************************************************
** Meta object code from reading C++ file 'apimovie.h'
**
** Created: Mon 26. Mar 16:37:48 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../apimovie.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'apimovie.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ApiMovie[] = {

 // content:
       5,       // revision
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
      18,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      36,   30,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ApiMovie[] = {
    "ApiMovie\0\0found()\0JsonReady()\0reply\0"
    "remoteAnswer(QNetworkReply*)\0"
};

const QMetaObject ApiMovie::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ApiMovie,
      qt_meta_data_ApiMovie, 0 }
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
        switch (_id) {
        case 0: found(); break;
        case 1: JsonReady(); break;
        case 2: remoteAnswer((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void ApiMovie::found()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void ApiMovie::JsonReady()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
