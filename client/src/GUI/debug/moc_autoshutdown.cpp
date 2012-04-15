/****************************************************************************
** Meta object code from reading C++ file 'autoshutdown.h'
**
** Created: Sun 15. Apr 23:01:42 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../autoshutdown.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'autoshutdown.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AutoShutdown[] = {

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
      14,   13,   13,   13, 0x08,
      25,   13,   13,   13, 0x08,
      33,   13,   13,   13, 0x08,
      43,   13,   13,   13, 0x08,
      65,   13,   13,   13, 0x08,
      84,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AutoShutdown[] = {
    "AutoShutdown\0\0Shutdown()\0Sleep()\0"
    "Restart()\0on_Shutdown_clicked()\0"
    "on_Sleep_clicked()\0on_Restart_clicked()\0"
};

void AutoShutdown::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AutoShutdown *_t = static_cast<AutoShutdown *>(_o);
        switch (_id) {
        case 0: _t->Shutdown(); break;
        case 1: _t->Sleep(); break;
        case 2: _t->Restart(); break;
        case 3: _t->on_Shutdown_clicked(); break;
        case 4: _t->on_Sleep_clicked(); break;
        case 5: _t->on_Restart_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData AutoShutdown::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AutoShutdown::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AutoShutdown,
      qt_meta_data_AutoShutdown, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AutoShutdown::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AutoShutdown::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AutoShutdown::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AutoShutdown))
        return static_cast<void*>(const_cast< AutoShutdown*>(this));
    return QWidget::qt_metacast(_clname);
}

int AutoShutdown::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
