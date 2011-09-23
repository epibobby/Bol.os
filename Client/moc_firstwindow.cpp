/****************************************************************************
** Meta object code from reading C++ file 'firstwindow.h'
**
** Created: Wed Sep 21 11:41:14 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "firstwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'firstwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FirstWindow[] = {

 // content:
       5,       // revision
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
      40,   12,   12,   12, 0x08,
      71,   12,   12,   12, 0x08,
     102,   12,   12,   12, 0x08,
     122,   12,   12,   12, 0x08,
     148,  136,   12,   12, 0x08,
     191,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FirstWindow[] = {
    "FirstWindow\0\0on_pushButton_Ok_clicked()\0"
    "on_pushButton_Cancel_clicked()\0"
    "on_pushButton_Create_clicked()\0"
    "requestNewFortune()\0readFortune()\0"
    "socketError\0displayError(QAbstractSocket::SocketError)\0"
    "sessionOpened()\0"
};

const QMetaObject FirstWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_FirstWindow,
      qt_meta_data_FirstWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FirstWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FirstWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FirstWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FirstWindow))
        return static_cast<void*>(const_cast< FirstWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int FirstWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButton_Ok_clicked(); break;
        case 1: on_pushButton_Cancel_clicked(); break;
        case 2: on_pushButton_Create_clicked(); break;
        case 3: requestNewFortune(); break;
        case 4: readFortune(); break;
        case 5: displayError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 6: sessionOpened(); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
