/****************************************************************************
** Meta object code from reading C++ file 'saveandupdate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../untitled3/saveandupdate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'saveandupdate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_saveAndUpdate_t {
    QByteArrayData data[16];
    char stringdata0[168];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_saveAndUpdate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_saveAndUpdate_t qt_meta_stringdata_saveAndUpdate = {
    {
QT_MOC_LITERAL(0, 0, 13), // "saveAndUpdate"
QT_MOC_LITERAL(1, 14, 7), // "players"
QT_MOC_LITERAL(2, 22, 28), // "QQmlListProperty<gamePlayer>"
QT_MOC_LITERAL(3, 51, 0), // ""
QT_MOC_LITERAL(4, 52, 12), // "playersCount"
QT_MOC_LITERAL(5, 65, 12), // "appendPlayer"
QT_MOC_LITERAL(6, 78, 11), // "gamePlayer*"
QT_MOC_LITERAL(7, 90, 7), // "chapter"
QT_MOC_LITERAL(8, 98, 8), // "playerAt"
QT_MOC_LITERAL(9, 107, 5), // "index"
QT_MOC_LITERAL(10, 113, 12), // "clearPlayers"
QT_MOC_LITERAL(11, 126, 6), // "append"
QT_MOC_LITERAL(12, 133, 4), // "name"
QT_MOC_LITERAL(13, 138, 5), // "grade"
QT_MOC_LITERAL(14, 144, 11), // "saveHistory"
QT_MOC_LITERAL(15, 156, 11) // "loadHistory"

    },
    "saveAndUpdate\0players\0"
    "QQmlListProperty<gamePlayer>\0\0"
    "playersCount\0appendPlayer\0gamePlayer*\0"
    "chapter\0playerAt\0index\0clearPlayers\0"
    "append\0name\0grade\0saveHistory\0loadHistory"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_saveAndUpdate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       1,   70, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    3, 0x0a /* Public */,
       4,    0,   55,    3, 0x0a /* Public */,
       5,    1,   56,    3, 0x0a /* Public */,
       8,    1,   59,    3, 0x0a /* Public */,
      10,    0,   62,    3, 0x0a /* Public */,
      11,    2,   63,    3, 0x0a /* Public */,
      14,    0,   68,    3, 0x0a /* Public */,
      15,    0,   69,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    QMetaType::Int,
    QMetaType::Void, 0x80000000 | 6,    7,
    0x80000000 | 6, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   12,   13,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00095409,

       0        // eod
};

void saveAndUpdate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<saveAndUpdate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QQmlListProperty<gamePlayer> _r = _t->players();
            if (_a[0]) *reinterpret_cast< QQmlListProperty<gamePlayer>*>(_a[0]) = std::move(_r); }  break;
        case 1: { int _r = _t->playersCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->appendPlayer((*reinterpret_cast< gamePlayer*(*)>(_a[1]))); break;
        case 3: { gamePlayer* _r = _t->playerAt((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< gamePlayer**>(_a[0]) = std::move(_r); }  break;
        case 4: _t->clearPlayers(); break;
        case 5: _t->append((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->saveHistory(); break;
        case 7: _t->loadHistory(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< gamePlayer* >(); break;
            }
            break;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<saveAndUpdate *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQmlListProperty<gamePlayer>*>(_v) = _t->players(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject saveAndUpdate::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_saveAndUpdate.data,
    qt_meta_data_saveAndUpdate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *saveAndUpdate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *saveAndUpdate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_saveAndUpdate.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int saveAndUpdate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
