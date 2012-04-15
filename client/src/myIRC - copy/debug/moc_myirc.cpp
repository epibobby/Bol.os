/****************************************************************************
** Meta object code from reading C++ file 'myirc.h'
**
** Created: Sat 14. Apr 16:42:44 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../myirc.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myirc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MyIRC[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       7,    6,    6,    6, 0x0a,
      25,    6,    6,    6, 0x0a,
      53,   48,    6,    6, 0x0a,
      75,   48,    6,    6, 0x0a,
      98,    6,    6,    6, 0x0a,
     112,    6,    6,    6, 0x0a,
     151,    6,  129,    6, 0x0a,
     170,  167,    6,    6, 0x0a,
     218,    6,  207,    6, 0x0a,
     233,  231,    6,    6, 0x0a,
     268,    6,  256,    6, 0x0a,
     286,  284,    6,    6, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MyIRC[] = {
    "MyIRC\0\0connectToServer()\0"
    "disconnectFromServer()\0chan\0"
    "joinChannel(QString&)\0leaveChannel(QString&)\0"
    "setNickname()\0setTheNickName()\0"
    "MainWindowController*\0getController()\0"
    "mc\0setController(MainWindowController*)\0"
    "MySession*\0getSession()\0s\0"
    "setSession(MySession*)\0MainWindow*\0"
    "getMainWindow()\0m\0setMainWindow(MainWindow*)\0"
};

void MyIRC::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MyIRC *_t = static_cast<MyIRC *>(_o);
        switch (_id) {
        case 0: _t->connectToServer(); break;
        case 1: _t->disconnectFromServer(); break;
        case 2: _t->joinChannel((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->leaveChannel((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->setNickname(); break;
        case 5: _t->setTheNickName(); break;
        case 6: { MainWindowController* _r = _t->getController();
            if (_a[0]) *reinterpret_cast< MainWindowController**>(_a[0]) = _r; }  break;
        case 7: _t->setController((*reinterpret_cast< MainWindowController*(*)>(_a[1]))); break;
        case 8: { MySession* _r = _t->getSession();
            if (_a[0]) *reinterpret_cast< MySession**>(_a[0]) = _r; }  break;
        case 9: _t->setSession((*reinterpret_cast< MySession*(*)>(_a[1]))); break;
        case 10: { MainWindow* _r = _t->getMainWindow();
            if (_a[0]) *reinterpret_cast< MainWindow**>(_a[0]) = _r; }  break;
        case 11: _t->setMainWindow((*reinterpret_cast< MainWindow*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MyIRC::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MyIRC::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MyIRC,
      qt_meta_data_MyIRC, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MyIRC::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MyIRC::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MyIRC::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MyIRC))
        return static_cast<void*>(const_cast< MyIRC*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MyIRC::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
