/****************************************************************************
** Meta object code from reading C++ file 'logonwindow.h'
**
** Created: Sun 15. Apr 23:27:05 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../logonwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'logonwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LogonWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x08,
      21,   12,   12,   12, 0x08,
      35,   12,   12,   12, 0x08,
      55,   12,   12,   12, 0x08,
      91,   12,   12,   12, 0x08,
     117,   12,   12,   12, 0x08,
     133,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_LogonWindow[] = {
    "LogonWindow\0\0_init()\0_initWindow()\0"
    "on_Config_clicked()\0"
    "on_actionCreate_Account_triggered()\0"
    "on_actionExit_triggered()\0on_Ok_clicked()\0"
    "on_Refresh_clicked()\0"
};

void LogonWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LogonWindow *_t = static_cast<LogonWindow *>(_o);
        switch (_id) {
        case 0: _t->_init(); break;
        case 1: _t->_initWindow(); break;
        case 2: _t->on_Config_clicked(); break;
        case 3: _t->on_actionCreate_Account_triggered(); break;
        case 4: _t->on_actionExit_triggered(); break;
        case 5: _t->on_Ok_clicked(); break;
        case 6: _t->on_Refresh_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData LogonWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LogonWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_LogonWindow,
      qt_meta_data_LogonWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LogonWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LogonWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LogonWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LogonWindow))
        return static_cast<void*>(const_cast< LogonWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int LogonWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
