/****************************************************************************
** Meta object code from reading C++ file 'readerclass.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../untitled2/readerclass.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'readerclass.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ReaderClass_t {
    QByteArrayData data[22];
    char stringdata0[250];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ReaderClass_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ReaderClass_t qt_meta_stringdata_ReaderClass = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ReaderClass"
QT_MOC_LITERAL(1, 12, 18), // "currentPageChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 4), // "page"
QT_MOC_LITERAL(4, 37, 19), // "currentChartChanged"
QT_MOC_LITERAL(5, 57, 5), // "Chart"
QT_MOC_LITERAL(6, 63, 17), // "bookSourceChanged"
QT_MOC_LITERAL(7, 81, 10), // "booksource"
QT_MOC_LITERAL(8, 92, 14), // "contentChanged"
QT_MOC_LITERAL(9, 107, 7), // "content"
QT_MOC_LITERAL(10, 115, 6), // "charts"
QT_MOC_LITERAL(11, 122, 25), // "QQmlListProperty<Chapter>"
QT_MOC_LITERAL(12, 148, 10), // "chartCount"
QT_MOC_LITERAL(13, 159, 11), // "appendChart"
QT_MOC_LITERAL(14, 171, 8), // "Chapter*"
QT_MOC_LITERAL(15, 180, 7), // "chapter"
QT_MOC_LITERAL(16, 188, 7), // "chartAt"
QT_MOC_LITERAL(17, 196, 5), // "index"
QT_MOC_LITERAL(18, 202, 11), // "clearCharts"
QT_MOC_LITERAL(19, 214, 11), // "currentPage"
QT_MOC_LITERAL(20, 226, 12), // "currentChart"
QT_MOC_LITERAL(21, 239, 10) // "bookSource"

    },
    "ReaderClass\0currentPageChanged\0\0page\0"
    "currentChartChanged\0Chart\0bookSourceChanged\0"
    "booksource\0contentChanged\0content\0"
    "charts\0QQmlListProperty<Chapter>\0"
    "chartCount\0appendChart\0Chapter*\0chapter\0"
    "chartAt\0index\0clearCharts\0currentPage\0"
    "currentChart\0bookSource"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ReaderClass[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       5,   80, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    1,   62,    2, 0x06 /* Public */,
       6,    1,   65,    2, 0x06 /* Public */,
       8,    1,   68,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   71,    2, 0x0a /* Public */,
      12,    0,   72,    2, 0x0a /* Public */,
      13,    1,   73,    2, 0x0a /* Public */,
      16,    1,   76,    2, 0x0a /* Public */,
      18,    0,   79,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    9,

 // slots: parameters
    0x80000000 | 11,
    QMetaType::Int,
    QMetaType::Void, 0x80000000 | 14,   15,
    0x80000000 | 14, QMetaType::Int,   17,
    QMetaType::Void,

 // properties: name, type, flags
      19, QMetaType::Int, 0x00495103,
      20, QMetaType::Int, 0x00495103,
      21, QMetaType::QString, 0x00495103,
       9, QMetaType::QString, 0x00495103,
      10, 0x80000000 | 11, 0x00095409,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       0,

       0        // eod
};

void ReaderClass::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ReaderClass *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentPageChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->currentChartChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->bookSourceChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->contentChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: { QQmlListProperty<Chapter> _r = _t->charts();
            if (_a[0]) *reinterpret_cast< QQmlListProperty<Chapter>*>(_a[0]) = std::move(_r); }  break;
        case 5: { int _r = _t->chartCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->appendChart((*reinterpret_cast< Chapter*(*)>(_a[1]))); break;
        case 7: { Chapter* _r = _t->chartAt((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Chapter**>(_a[0]) = std::move(_r); }  break;
        case 8: _t->clearCharts(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Chapter* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ReaderClass::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReaderClass::currentPageChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ReaderClass::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReaderClass::currentChartChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ReaderClass::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReaderClass::bookSourceChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ReaderClass::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReaderClass::contentChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ReaderClass *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->currentPage(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->currentChart(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->bookSource(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->content(); break;
        case 4: *reinterpret_cast< QQmlListProperty<Chapter>*>(_v) = _t->charts(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ReaderClass *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCurrentPage(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setCurrentChart(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setBookSource(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setContent(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ReaderClass::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ReaderClass.data,
    qt_meta_data_ReaderClass,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ReaderClass::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ReaderClass::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ReaderClass.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ReaderClass::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ReaderClass::currentPageChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ReaderClass::currentChartChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ReaderClass::bookSourceChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ReaderClass::contentChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
