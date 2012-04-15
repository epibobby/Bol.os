/****************************************************************************
** Meta object code from reading C++ file 'mainwindowcontroller.h'
**
** Created: Sun 15. Apr 23:27:20 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../IRC/mainwindowcontroller.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindowcontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WindowController[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x0a,
      37,   17,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_WindowController[] = {
    "WindowController\0\0onSelectedTab(int)\0"
    "onCloseTab(int)\0"
};

void WindowController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WindowController *_t = static_cast<WindowController *>(_o);
        switch (_id) {
        case 0: _t->onSelectedTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onCloseTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WindowController::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WindowController::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_WindowController,
      qt_meta_data_WindowController, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WindowController::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WindowController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WindowController::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WindowController))
        return static_cast<void*>(const_cast< WindowController*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int WindowController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
