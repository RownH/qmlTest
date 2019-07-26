/****************************************************************************
** Meta object code from reading C++ file 'colormarker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qmlCppTest/colormarker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'colormarker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ColorMarker_t {
    QByteArrayData data[18];
    char stringdata0[183];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ColorMarker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ColorMarker_t qt_meta_stringdata_ColorMarker = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ColorMarker"
QT_MOC_LITERAL(1, 12, 12), // "colorChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 5), // "color"
QT_MOC_LITERAL(4, 32, 11), // "currentTime"
QT_MOC_LITERAL(5, 44, 7), // "strTIme"
QT_MOC_LITERAL(6, 52, 5), // "start"
QT_MOC_LITERAL(7, 58, 4), // "stop"
QT_MOC_LITERAL(8, 63, 10), // "algorigthm"
QT_MOC_LITERAL(9, 74, 17), // "GenerateAlgorithm"
QT_MOC_LITERAL(10, 92, 12), // "setAlgorithm"
QT_MOC_LITERAL(11, 105, 9), // "algorithm"
QT_MOC_LITERAL(12, 115, 9), // "timeColor"
QT_MOC_LITERAL(13, 125, 9), // "RandomRGB"
QT_MOC_LITERAL(14, 135, 9), // "RandomRed"
QT_MOC_LITERAL(15, 145, 11), // "RandomGreen"
QT_MOC_LITERAL(16, 157, 10), // "RandomBlue"
QT_MOC_LITERAL(17, 168, 14) // "LinearIncrease"

    },
    "ColorMarker\0colorChanged\0\0color\0"
    "currentTime\0strTIme\0start\0stop\0"
    "algorigthm\0GenerateAlgorithm\0setAlgorithm\0"
    "algorithm\0timeColor\0RandomRGB\0RandomRed\0"
    "RandomGreen\0RandomBlue\0LinearIncrease"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ColorMarker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       2,   56, // properties
       1,   64, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   50,    2, 0x0a /* Public */,
       7,    0,   51,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       8,    0,   52,    2, 0x02 /* Public */,
      10,    1,   53,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 9,
    QMetaType::Void, 0x80000000 | 9,   11,

 // properties: name, type, flags
       3, QMetaType::QColor, 0x00495103,
      12, QMetaType::QColor, 0x00095103,

 // properties: notify_signal_id
       0,
       0,

 // enums: name, alias, flags, count, data
       9,    9, 0x0,    5,   69,

 // enum data: key, value
      13, uint(ColorMarker::RandomRGB),
      14, uint(ColorMarker::RandomRed),
      15, uint(ColorMarker::RandomGreen),
      16, uint(ColorMarker::RandomBlue),
      17, uint(ColorMarker::LinearIncrease),

       0        // eod
};

void ColorMarker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ColorMarker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->colorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 1: _t->currentTime((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->start(); break;
        case 3: _t->stop(); break;
        case 4: { GenerateAlgorithm _r = _t->algorigthm();
            if (_a[0]) *reinterpret_cast< GenerateAlgorithm*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->setAlgorithm((*reinterpret_cast< GenerateAlgorithm(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ColorMarker::*)(const QColor & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColorMarker::colorChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ColorMarker::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColorMarker::currentTime)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ColorMarker *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->color(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->timeColor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ColorMarker *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setTimeColor(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ColorMarker::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ColorMarker.data,
    qt_meta_data_ColorMarker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ColorMarker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColorMarker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ColorMarker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ColorMarker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ColorMarker::colorChanged(const QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ColorMarker::currentTime(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
