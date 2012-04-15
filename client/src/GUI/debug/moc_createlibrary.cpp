/****************************************************************************
** Meta object code from reading C++ file 'createlibrary.h'
**
** Created: Mon 16. Apr 00:17:55 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../createlibrary.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'createlibrary.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CreateLibrary[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   15,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      42,   14,   14,   14, 0x08,
      58,   14,   14,   14, 0x08,
      78,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CreateLibrary[] = {
    "CreateLibrary\0\0,\0created(QString,QString)\0"
    "on_OK_clicked()\0on_Cancel_clicked()\0"
    "on_browse_clicked()\0"
};

void CreateLibrary::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CreateLibrary *_t = static_cast<CreateLibrary *>(_o);
        switch (_id) {
        case 0: _t->created((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->on_OK_clicked(); break;
        case 2: _t->on_Cancel_clicked(); break;
        case 3: _t->on_browse_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CreateLibrary::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CreateLibrary::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CreateLibrary,
      qt_meta_data_CreateLibrary, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CreateLibrary::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CreateLibrary::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CreateLibrary::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CreateLibrary))
        return static_cast<void*>(const_cast< CreateLibrary*>(this));
    return QDialog::qt_metacast(_clname);
}

int CreateLibrary::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void CreateLibrary::created(QString _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
