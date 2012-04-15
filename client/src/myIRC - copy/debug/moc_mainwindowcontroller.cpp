/****************************************************************************
** Meta object code from reading C++ file 'mainwindowcontroller.h'
**
** Created: Sat 14. Apr 16:42:42 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindowcontroller.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindowcontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindowController[] = {

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
      22,   21,   21,   21, 0x0a,
      41,   21,   21,   21, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MainWindowController[] = {
    "MainWindowController\0\0onSelectedTab(int)\0"
    "onCloseTab(int)\0"
};

void MainWindowController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindowController *_t = static_cast<MainWindowController *>(_o);
        switch (_id) {
        case 0: _t->onSelectedTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onCloseTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindowController::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindowController::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindowController,
      qt_meta_data_MainWindowController, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindowController::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindowController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindowController::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindowController))
        return static_cast<void*>(const_cast< MainWindowController*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindowController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
