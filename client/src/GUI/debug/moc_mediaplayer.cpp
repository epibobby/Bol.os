/****************************************************************************
** Meta object code from reading C++ file 'mediaplayer.h'
**
** Created: Sun 15. Apr 23:01:39 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mediaplayer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mediaplayer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MediaVideoWidget[] = {

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
      18,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      42,   17,   17,   17, 0x0a,
      62,   17,   17,   17, 0x0a,
      71,   17,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MediaVideoWidget[] = {
    "MediaVideoWidget\0\0fullScreenChanged(bool)\0"
    "setFullScreen(bool)\0menuOn()\0menuOff()\0"
};

void MediaVideoWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MediaVideoWidget *_t = static_cast<MediaVideoWidget *>(_o);
        switch (_id) {
        case 0: _t->fullScreenChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setFullScreen((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->menuOn(); break;
        case 3: _t->menuOff(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MediaVideoWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MediaVideoWidget::staticMetaObject = {
    { &Phonon::VideoWidget::staticMetaObject, qt_meta_stringdata_MediaVideoWidget,
      qt_meta_data_MediaVideoWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MediaVideoWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MediaVideoWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MediaVideoWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MediaVideoWidget))
        return static_cast<void*>(const_cast< MediaVideoWidget*>(this));
    typedef Phonon::VideoWidget QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int MediaVideoWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Phonon::VideoWidget QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
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
void MediaVideoWidget::fullScreenChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_MediaPlayer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x0a,
      24,   12,   12,   12, 0x0a,
      33,   12,   12,   12, 0x0a,
      43,   12,   12,   12, 0x0a,
      56,   12,   12,   12, 0x0a,
      69,   12,   12,   12, 0x0a,
      80,   12,   12,   12, 0x0a,
      92,   12,   12,   12, 0x0a,
     115,   12,   12,   12, 0x0a,
     139,   12,   12,   12, 0x0a,
     150,   12,   12,   12, 0x08,
     165,   12,   12,   12, 0x08,
     179,   12,   12,   12, 0x08,
     198,   12,   12,   12, 0x08,
     215,   12,   12,   12, 0x08,
     227,   12,   12,   12, 0x08,
     264,  246,   12,   12, 0x08,
     306,   12,   12,   12, 0x08,
     322,   12,   12,   12, 0x08,
     349,  343,   12,   12, 0x08,
     381,  373,   12,   12, 0x08,
     399,   12,   12,   12, 0x08,
     409,   12,   12,   12, 0x08,
     423,   12,   12,   12, 0x08,
     441,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MediaPlayer[] = {
    "MediaPlayer\0\0openFile()\0rewind()\0"
    "forward()\0updateInfo()\0updateTime()\0"
    "finished()\0playPause()\0scaleChanged(QAction*)\0"
    "aspectChanged(QAction*)\0shutdown()\0"
    "setAspect(int)\0setScale(int)\0"
    "setSaturation(int)\0setContrast(int)\0"
    "setHue(int)\0setBrightness(int)\0"
    "newstate,oldstate\0"
    "stateChanged(Phonon::State,Phonon::State)\0"
    "effectChanged()\0showSettingsDialog()\0"
    "point\0showContextMenu(QPoint)\0percent\0"
    "bufferStatus(int)\0openUrl()\0openRamFile()\0"
    "configureEffect()\0hasVideoChanged(bool)\0"
};

void MediaPlayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MediaPlayer *_t = static_cast<MediaPlayer *>(_o);
        switch (_id) {
        case 0: _t->openFile(); break;
        case 1: _t->rewind(); break;
        case 2: _t->forward(); break;
        case 3: _t->updateInfo(); break;
        case 4: _t->updateTime(); break;
        case 5: _t->finished(); break;
        case 6: _t->playPause(); break;
        case 7: _t->scaleChanged((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 8: _t->aspectChanged((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 9: _t->shutdown(); break;
        case 10: _t->setAspect((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->setScale((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->setSaturation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->setContrast((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->setHue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->setBrightness((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->stateChanged((*reinterpret_cast< Phonon::State(*)>(_a[1])),(*reinterpret_cast< Phonon::State(*)>(_a[2]))); break;
        case 17: _t->effectChanged(); break;
        case 18: _t->showSettingsDialog(); break;
        case 19: _t->showContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 20: _t->bufferStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->openUrl(); break;
        case 22: _t->openRamFile(); break;
        case 23: _t->configureEffect(); break;
        case 24: _t->hasVideoChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MediaPlayer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MediaPlayer::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MediaPlayer,
      qt_meta_data_MediaPlayer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MediaPlayer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MediaPlayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MediaPlayer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MediaPlayer))
        return static_cast<void*>(const_cast< MediaPlayer*>(this));
    return QWidget::qt_metacast(_clname);
}

int MediaPlayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
