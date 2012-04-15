/****************************************************************************
** Meta object code from reading C++ file 'stackedwidgetmovienews.h'
**
** Created: Sun 15. Apr 23:01:50 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../stackedwidgetmovienews.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stackedwidgetmovienews.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StackedWidgetMovieNews[] = {

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
      24,   23,   23,   23, 0x08,
      43,   38,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_StackedWidgetMovieNews[] = {
    "StackedWidgetMovieNews\0\0ChangeMovie()\0"
    "list\0IncomingSheet(QList<QMap<QString,QString> >)\0"
};

void StackedWidgetMovieNews::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StackedWidgetMovieNews *_t = static_cast<StackedWidgetMovieNews *>(_o);
        switch (_id) {
        case 0: _t->ChangeMovie(); break;
        case 1: _t->IncomingSheet((*reinterpret_cast< QList<QMap<QString,QString> >(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData StackedWidgetMovieNews::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject StackedWidgetMovieNews::staticMetaObject = {
    { &QStackedWidget::staticMetaObject, qt_meta_stringdata_StackedWidgetMovieNews,
      qt_meta_data_StackedWidgetMovieNews, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StackedWidgetMovieNews::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StackedWidgetMovieNews::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StackedWidgetMovieNews::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StackedWidgetMovieNews))
        return static_cast<void*>(const_cast< StackedWidgetMovieNews*>(this));
    return QStackedWidget::qt_metacast(_clname);
}

int StackedWidgetMovieNews::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStackedWidget::qt_metacall(_c, _id, _a);
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
