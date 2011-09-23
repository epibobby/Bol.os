/****************************************************************************
** Meta object code from reading C++ file 'createcount.h'
**
** Created: Wed Sep 21 11:41:16 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "createcount.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'createcount.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CreateCount[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x08,
      37,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CreateCount[] = {
    "CreateCount\0\0on_pushButton_clicked()\0"
    "CheckPassword()\0"
};

const QMetaObject CreateCount::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CreateCount,
      qt_meta_data_CreateCount, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CreateCount::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CreateCount::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CreateCount::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CreateCount))
        return static_cast<void*>(const_cast< CreateCount*>(this));
    return QDialog::qt_metacast(_clname);
}

int CreateCount::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButton_clicked(); break;
        case 1: CheckPassword(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
