/****************************************************************************
** Meta object code from reading C++ file 'algorithm.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../AmoebotSim/ui/algorithm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'algorithm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Algorithm_t {
    QByteArrayData data[8];
    char stringdata0[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Algorithm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Algorithm_t qt_meta_stringdata_Algorithm = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Algorithm"
QT_MOC_LITERAL(1, 10, 3), // "log"
QT_MOC_LITERAL(2, 14, 0), // ""
QT_MOC_LITERAL(3, 15, 3), // "msg"
QT_MOC_LITERAL(4, 19, 5), // "error"
QT_MOC_LITERAL(5, 25, 9), // "setSystem"
QT_MOC_LITERAL(6, 35, 23), // "std::shared_ptr<System>"
QT_MOC_LITERAL(7, 59, 6) // "system"

    },
    "Algorithm\0log\0\0msg\0error\0setSystem\0"
    "std::shared_ptr<System>\0system"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Algorithm[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,
       1,    1,   34,    2, 0x26 /* Public | MethodCloned */,
       5,    1,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void Algorithm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Algorithm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->log((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->log((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setSystem((*reinterpret_cast< std::shared_ptr<System>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Algorithm::*)(const QString , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Algorithm::log)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Algorithm::*)(std::shared_ptr<System> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Algorithm::setSystem)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Algorithm::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Algorithm.data,
    qt_meta_data_Algorithm,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Algorithm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Algorithm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Algorithm.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Algorithm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void Algorithm::log(const QString _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 2
void Algorithm::setSystem(std::shared_ptr<System> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_DiscoDemoAlg_t {
    QByteArrayData data[5];
    char stringdata0[50];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DiscoDemoAlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DiscoDemoAlg_t qt_meta_stringdata_DiscoDemoAlg = {
    {
QT_MOC_LITERAL(0, 0, 12), // "DiscoDemoAlg"
QT_MOC_LITERAL(1, 13, 11), // "instantiate"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 12), // "numParticles"
QT_MOC_LITERAL(4, 39, 10) // "counterMax"

    },
    "DiscoDemoAlg\0instantiate\0\0numParticles\0"
    "counterMax"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DiscoDemoAlg[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x0a /* Public */,
       1,    1,   34,    2, 0x2a /* Public | MethodCloned */,
       1,    0,   37,    2, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

       0        // eod
};

void DiscoDemoAlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DiscoDemoAlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->instantiate((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 1: _t->instantiate((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 2: _t->instantiate(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DiscoDemoAlg::staticMetaObject = { {
    QMetaObject::SuperData::link<Algorithm::staticMetaObject>(),
    qt_meta_stringdata_DiscoDemoAlg.data,
    qt_meta_data_DiscoDemoAlg,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DiscoDemoAlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DiscoDemoAlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DiscoDemoAlg.stringdata0))
        return static_cast<void*>(this);
    return Algorithm::qt_metacast(_clname);
}

int DiscoDemoAlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Algorithm::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_MetricsDemoAlg_t {
    QByteArrayData data[5];
    char stringdata0[52];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MetricsDemoAlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MetricsDemoAlg_t qt_meta_stringdata_MetricsDemoAlg = {
    {
QT_MOC_LITERAL(0, 0, 14), // "MetricsDemoAlg"
QT_MOC_LITERAL(1, 15, 11), // "instantiate"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 12), // "numParticles"
QT_MOC_LITERAL(4, 41, 10) // "counterMax"

    },
    "MetricsDemoAlg\0instantiate\0\0numParticles\0"
    "counterMax"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MetricsDemoAlg[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x0a /* Public */,
       1,    1,   34,    2, 0x2a /* Public | MethodCloned */,
       1,    0,   37,    2, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

       0        // eod
};

void MetricsDemoAlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MetricsDemoAlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->instantiate((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 1: _t->instantiate((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 2: _t->instantiate(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MetricsDemoAlg::staticMetaObject = { {
    QMetaObject::SuperData::link<Algorithm::staticMetaObject>(),
    qt_meta_stringdata_MetricsDemoAlg.data,
    qt_meta_data_MetricsDemoAlg,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MetricsDemoAlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MetricsDemoAlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MetricsDemoAlg.stringdata0))
        return static_cast<void*>(this);
    return Algorithm::qt_metacast(_clname);
}

int MetricsDemoAlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Algorithm::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_BallroomDemoAlg_t {
    QByteArrayData data[4];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BallroomDemoAlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BallroomDemoAlg_t qt_meta_stringdata_BallroomDemoAlg = {
    {
QT_MOC_LITERAL(0, 0, 15), // "BallroomDemoAlg"
QT_MOC_LITERAL(1, 16, 11), // "instantiate"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 12) // "numParticles"

    },
    "BallroomDemoAlg\0instantiate\0\0numParticles"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BallroomDemoAlg[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       1,    0,   27,    2, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

       0        // eod
};

void BallroomDemoAlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BallroomDemoAlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->instantiate((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 1: _t->instantiate(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BallroomDemoAlg::staticMetaObject = { {
    QMetaObject::SuperData::link<Algorithm::staticMetaObject>(),
    qt_meta_stringdata_BallroomDemoAlg.data,
    qt_meta_data_BallroomDemoAlg,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BallroomDemoAlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BallroomDemoAlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BallroomDemoAlg.stringdata0))
        return static_cast<void*>(this);
    return Algorithm::qt_metacast(_clname);
}

int BallroomDemoAlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Algorithm::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_TokenDemoAlg_t {
    QByteArrayData data[5];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TokenDemoAlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TokenDemoAlg_t qt_meta_stringdata_TokenDemoAlg = {
    {
QT_MOC_LITERAL(0, 0, 12), // "TokenDemoAlg"
QT_MOC_LITERAL(1, 13, 11), // "instantiate"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 12), // "numParticles"
QT_MOC_LITERAL(4, 39, 8) // "lifetime"

    },
    "TokenDemoAlg\0instantiate\0\0numParticles\0"
    "lifetime"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TokenDemoAlg[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x0a /* Public */,
       1,    1,   34,    2, 0x2a /* Public | MethodCloned */,
       1,    0,   37,    2, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

       0        // eod
};

void TokenDemoAlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TokenDemoAlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->instantiate((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 1: _t->instantiate((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 2: _t->instantiate(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TokenDemoAlg::staticMetaObject = { {
    QMetaObject::SuperData::link<Algorithm::staticMetaObject>(),
    qt_meta_stringdata_TokenDemoAlg.data,
    qt_meta_data_TokenDemoAlg,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TokenDemoAlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TokenDemoAlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TokenDemoAlg.stringdata0))
        return static_cast<void*>(this);
    return Algorithm::qt_metacast(_clname);
}

int TokenDemoAlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Algorithm::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_DynamicDemoAlg_t {
    QByteArrayData data[6];
    char stringdata0[58];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DynamicDemoAlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DynamicDemoAlg_t qt_meta_stringdata_DynamicDemoAlg = {
    {
QT_MOC_LITERAL(0, 0, 14), // "DynamicDemoAlg"
QT_MOC_LITERAL(1, 15, 11), // "instantiate"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 12), // "numParticles"
QT_MOC_LITERAL(4, 41, 8), // "growProb"
QT_MOC_LITERAL(5, 50, 7) // "dieProb"

    },
    "DynamicDemoAlg\0instantiate\0\0numParticles\0"
    "growProb\0dieProb"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DynamicDemoAlg[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   34,    2, 0x0a /* Public */,
       1,    2,   41,    2, 0x2a /* Public | MethodCloned */,
       1,    1,   46,    2, 0x2a /* Public | MethodCloned */,
       1,    0,   49,    2, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::Double, QMetaType::Double,    3,    4,    5,
    QMetaType::Void, QMetaType::UInt, QMetaType::Double,    3,    4,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void,

       0        // eod
};

void DynamicDemoAlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DynamicDemoAlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->instantiate((*reinterpret_cast< const uint(*)>(_a[1])),(*reinterpret_cast< const double(*)>(_a[2])),(*reinterpret_cast< const double(*)>(_a[3]))); break;
        case 1: _t->instantiate((*reinterpret_cast< const uint(*)>(_a[1])),(*reinterpret_cast< const double(*)>(_a[2]))); break;
        case 2: _t->instantiate((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        case 3: _t->instantiate(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DynamicDemoAlg::staticMetaObject = { {
    QMetaObject::SuperData::link<Algorithm::staticMetaObject>(),
    qt_meta_stringdata_DynamicDemoAlg.data,
    qt_meta_data_DynamicDemoAlg,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DynamicDemoAlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DynamicDemoAlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DynamicDemoAlg.stringdata0))
        return static_cast<void*>(this);
    return Algorithm::qt_metacast(_clname);
}

int DynamicDemoAlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Algorithm::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
struct qt_meta_stringdata_CompressionAlg_t {
    QByteArrayData data[14];
    char stringdata0[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CompressionAlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CompressionAlg_t qt_meta_stringdata_CompressionAlg = {
    {
QT_MOC_LITERAL(0, 0, 14), // "CompressionAlg"
QT_MOC_LITERAL(1, 15, 11), // "instantiate"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 15), // "numRedParticles"
QT_MOC_LITERAL(4, 44, 16), // "numBlueParticles"
QT_MOC_LITERAL(5, 61, 17), // "numGreenParticles"
QT_MOC_LITERAL(6, 79, 6), // "lambda"
QT_MOC_LITERAL(7, 86, 13), // "diffusionRate"
QT_MOC_LITERAL(8, 100, 15), // "bindingAffinity"
QT_MOC_LITERAL(9, 116, 18), // "seperationAffinity"
QT_MOC_LITERAL(10, 135, 15), // "convertToStable"
QT_MOC_LITERAL(11, 151, 14), // "detachFromLine"
QT_MOC_LITERAL(12, 166, 14), // "adsorptionRate"
QT_MOC_LITERAL(13, 181, 14) // "desorptionRate"

    },
    "CompressionAlg\0instantiate\0\0numRedParticles\0"
    "numBlueParticles\0numGreenParticles\0"
    "lambda\0diffusionRate\0bindingAffinity\0"
    "seperationAffinity\0convertToStable\0"
    "detachFromLine\0adsorptionRate\0"
    "desorptionRate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CompressionAlg[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,   11,   74,    2, 0x0a /* Public */,
       1,   10,   97,    2, 0x2a /* Public | MethodCloned */,
       1,    9,  118,    2, 0x2a /* Public | MethodCloned */,
       1,    8,  137,    2, 0x2a /* Public | MethodCloned */,
       1,    7,  154,    2, 0x2a /* Public | MethodCloned */,
       1,    6,  169,    2, 0x2a /* Public | MethodCloned */,
       1,    5,  182,    2, 0x2a /* Public | MethodCloned */,
       1,    4,  193,    2, 0x2a /* Public | MethodCloned */,
       1,    3,  202,    2, 0x2a /* Public | MethodCloned */,
       1,    2,  209,    2, 0x2a /* Public | MethodCloned */,
       1,    1,  214,    2, 0x2a /* Public | MethodCloned */,
       1,    0,  217,    2, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Int, QMetaType::Int,    3,    4,    5,    6,    7,    8,    9,   10,   11,   12,   13,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Int,    3,    4,    5,    6,    7,    8,    9,   10,   11,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,    5,    6,    7,    8,    9,   10,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,    5,    6,    7,    8,    9,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,    5,    6,    7,    8,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,    5,    6,    7,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Double, QMetaType::Double,    3,    4,    5,    6,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Double,    3,    4,    5,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

       0        // eod
};

void CompressionAlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CompressionAlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->instantiate((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])),(*reinterpret_cast< const double(*)>(_a[4])),(*reinterpret_cast< const double(*)>(_a[5])),(*reinterpret_cast< const double(*)>(_a[6])),(*reinterpret_cast< const double(*)>(_a[7])),(*reinterpret_cast< const double(*)>(_a[8])),(*reinterpret_cast< const double(*)>(_a[9])),(*reinterpret_cast< const int(*)>(_a[10])),(*reinterpret_cast< const int(*)>(_a[11]))); break;
        case 1: _t->instantiate((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])),(*reinterpret_cast< const double(*)>(_a[4])),(*reinterpret_cast< const double(*)>(_a[5])),(*reinterpret_cast< const double(*)>(_a[6])),(*reinterpret_cast< const double(*)>(_a[7])),(*reinterpret_cast< const double(*)>(_a[8])),(*reinterpret_cast< const double(*)>(_a[9])),(*reinterpret_cast< const int(*)>(_a[10]))); break;
        case 2: _t->instantiate((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])),(*reinterpret_cast< const double(*)>(_a[4])),(*reinterpret_cast< const double(*)>(_a[5])),(*reinterpret_cast< const double(*)>(_a[6])),(*reinterpret_cast< const double(*)>(_a[7])),(*reinterpret_cast< const double(*)>(_a[8])),(*reinterpret_cast< const double(*)>(_a[9]))); break;
        case 3: _t->instantiate((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])),(*reinterpret_cast< const double(*)>(_a[4])),(*reinterpret_cast< const double(*)>(_a[5])),(*reinterpret_cast< const double(*)>(_a[6])),(*reinterpret_cast< const double(*)>(_a[7])),(*reinterpret_cast< const double(*)>(_a[8]))); break;
        case 4: _t->instantiate((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])),(*reinterpret_cast< const double(*)>(_a[4])),(*reinterpret_cast< const double(*)>(_a[5])),(*reinterpret_cast< const double(*)>(_a[6])),(*reinterpret_cast< const double(*)>(_a[7]))); break;
        case 5: _t->instantiate((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])),(*reinterpret_cast< const double(*)>(_a[4])),(*reinterpret_cast< const double(*)>(_a[5])),(*reinterpret_cast< const double(*)>(_a[6]))); break;
        case 6: _t->instantiate((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])),(*reinterpret_cast< const double(*)>(_a[4])),(*reinterpret_cast< const double(*)>(_a[5]))); break;
        case 7: _t->instantiate((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])),(*reinterpret_cast< const double(*)>(_a[4]))); break;
        case 8: _t->instantiate((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3]))); break;
        case 9: _t->instantiate((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 10: _t->instantiate((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 11: _t->instantiate(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CompressionAlg::staticMetaObject = { {
    QMetaObject::SuperData::link<Algorithm::staticMetaObject>(),
    qt_meta_stringdata_CompressionAlg.data,
    qt_meta_data_CompressionAlg,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CompressionAlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CompressionAlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CompressionAlg.stringdata0))
        return static_cast<void*>(this);
    return Algorithm::qt_metacast(_clname);
}

int CompressionAlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Algorithm::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
struct qt_meta_stringdata_EnergyShapeAlg_t {
    QByteArrayData data[9];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EnergyShapeAlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EnergyShapeAlg_t qt_meta_stringdata_EnergyShapeAlg = {
    {
QT_MOC_LITERAL(0, 0, 14), // "EnergyShapeAlg"
QT_MOC_LITERAL(1, 15, 11), // "instantiate"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 12), // "numParticles"
QT_MOC_LITERAL(4, 41, 14), // "numEnergyRoots"
QT_MOC_LITERAL(5, 56, 8), // "holeProb"
QT_MOC_LITERAL(6, 65, 8), // "capacity"
QT_MOC_LITERAL(7, 74, 6), // "demand"
QT_MOC_LITERAL(8, 81, 12) // "transferRate"

    },
    "EnergyShapeAlg\0instantiate\0\0numParticles\0"
    "numEnergyRoots\0holeProb\0capacity\0"
    "demand\0transferRate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EnergyShapeAlg[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    6,   49,    2, 0x0a /* Public */,
       1,    5,   62,    2, 0x2a /* Public | MethodCloned */,
       1,    4,   73,    2, 0x2a /* Public | MethodCloned */,
       1,    3,   82,    2, 0x2a /* Public | MethodCloned */,
       1,    2,   89,    2, 0x2a /* Public | MethodCloned */,
       1,    1,   94,    2, 0x2a /* Public | MethodCloned */,
       1,    0,   97,    2, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,    5,    6,    7,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,    5,    6,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Double, QMetaType::Double,    3,    4,    5,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Double,    3,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

       0        // eod
};

void EnergyShapeAlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EnergyShapeAlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->instantiate((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const double(*)>(_a[3])),(*reinterpret_cast< const double(*)>(_a[4])),(*reinterpret_cast< const double(*)>(_a[5])),(*reinterpret_cast< const double(*)>(_a[6]))); break;
        case 1: _t->instantiate((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const double(*)>(_a[3])),(*reinterpret_cast< const double(*)>(_a[4])),(*reinterpret_cast< const double(*)>(_a[5]))); break;
        case 2: _t->instantiate((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const double(*)>(_a[3])),(*reinterpret_cast< const double(*)>(_a[4]))); break;
        case 3: _t->instantiate((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const double(*)>(_a[3]))); break;
        case 4: _t->instantiate((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 5: _t->instantiate((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 6: _t->instantiate(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EnergyShapeAlg::staticMetaObject = { {
    QMetaObject::SuperData::link<Algorithm::staticMetaObject>(),
    qt_meta_stringdata_EnergyShapeAlg.data,
    qt_meta_data_EnergyShapeAlg,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EnergyShapeAlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EnergyShapeAlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EnergyShapeAlg.stringdata0))
        return static_cast<void*>(this);
    return Algorithm::qt_metacast(_clname);
}

int EnergyShapeAlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Algorithm::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
struct qt_meta_stringdata_EnergySharingAlg_t {
    QByteArrayData data[9];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EnergySharingAlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EnergySharingAlg_t qt_meta_stringdata_EnergySharingAlg = {
    {
QT_MOC_LITERAL(0, 0, 16), // "EnergySharingAlg"
QT_MOC_LITERAL(1, 17, 11), // "instantiate"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 12), // "numParticles"
QT_MOC_LITERAL(4, 43, 14), // "numEnergyRoots"
QT_MOC_LITERAL(5, 58, 5), // "usage"
QT_MOC_LITERAL(6, 64, 8), // "capacity"
QT_MOC_LITERAL(7, 73, 6), // "demand"
QT_MOC_LITERAL(8, 80, 12) // "transferRate"

    },
    "EnergySharingAlg\0instantiate\0\0"
    "numParticles\0numEnergyRoots\0usage\0"
    "capacity\0demand\0transferRate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EnergySharingAlg[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    6,   49,    2, 0x0a /* Public */,
       1,    5,   62,    2, 0x2a /* Public | MethodCloned */,
       1,    4,   73,    2, 0x2a /* Public | MethodCloned */,
       1,    3,   82,    2, 0x2a /* Public | MethodCloned */,
       1,    2,   89,    2, 0x2a /* Public | MethodCloned */,
       1,    1,   94,    2, 0x2a /* Public | MethodCloned */,
       1,    0,   97,    2, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,    5,    6,    7,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Double, QMetaType::Double,    3,    4,    5,    6,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Double,    3,    4,    5,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

       0        // eod
};

void EnergySharingAlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EnergySharingAlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->instantiate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])),(*reinterpret_cast< const double(*)>(_a[4])),(*reinterpret_cast< const double(*)>(_a[5])),(*reinterpret_cast< const double(*)>(_a[6]))); break;
        case 1: _t->instantiate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])),(*reinterpret_cast< const double(*)>(_a[4])),(*reinterpret_cast< const double(*)>(_a[5]))); break;
        case 2: _t->instantiate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])),(*reinterpret_cast< const double(*)>(_a[4]))); break;
        case 3: _t->instantiate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3]))); break;
        case 4: _t->instantiate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 5: _t->instantiate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->instantiate(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EnergySharingAlg::staticMetaObject = { {
    QMetaObject::SuperData::link<Algorithm::staticMetaObject>(),
    qt_meta_stringdata_EnergySharingAlg.data,
    qt_meta_data_EnergySharingAlg,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EnergySharingAlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EnergySharingAlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EnergySharingAlg.stringdata0))
        return static_cast<void*>(this);
    return Algorithm::qt_metacast(_clname);
}

int EnergySharingAlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Algorithm::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
struct qt_meta_stringdata_InfObjCoatingAlg_t {
    QByteArrayData data[5];
    char stringdata0[52];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InfObjCoatingAlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InfObjCoatingAlg_t qt_meta_stringdata_InfObjCoatingAlg = {
    {
QT_MOC_LITERAL(0, 0, 16), // "InfObjCoatingAlg"
QT_MOC_LITERAL(1, 17, 11), // "instantiate"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 12), // "numParticles"
QT_MOC_LITERAL(4, 43, 8) // "holeProb"

    },
    "InfObjCoatingAlg\0instantiate\0\0"
    "numParticles\0holeProb"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InfObjCoatingAlg[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x0a /* Public */,
       1,    1,   34,    2, 0x2a /* Public | MethodCloned */,
       1,    0,   37,    2, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Double,    3,    4,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

       0        // eod
};

void InfObjCoatingAlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InfObjCoatingAlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->instantiate((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const double(*)>(_a[2]))); break;
        case 1: _t->instantiate((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 2: _t->instantiate(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject InfObjCoatingAlg::staticMetaObject = { {
    QMetaObject::SuperData::link<Algorithm::staticMetaObject>(),
    qt_meta_stringdata_InfObjCoatingAlg.data,
    qt_meta_data_InfObjCoatingAlg,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *InfObjCoatingAlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InfObjCoatingAlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InfObjCoatingAlg.stringdata0))
        return static_cast<void*>(this);
    return Algorithm::qt_metacast(_clname);
}

int InfObjCoatingAlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Algorithm::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_LeaderElectionAlg_t {
    QByteArrayData data[5];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LeaderElectionAlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LeaderElectionAlg_t qt_meta_stringdata_LeaderElectionAlg = {
    {
QT_MOC_LITERAL(0, 0, 17), // "LeaderElectionAlg"
QT_MOC_LITERAL(1, 18, 11), // "instantiate"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 12), // "numParticles"
QT_MOC_LITERAL(4, 44, 8) // "holeProb"

    },
    "LeaderElectionAlg\0instantiate\0\0"
    "numParticles\0holeProb"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LeaderElectionAlg[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x0a /* Public */,
       1,    1,   34,    2, 0x2a /* Public | MethodCloned */,
       1,    0,   37,    2, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Double,    3,    4,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

       0        // eod
};

void LeaderElectionAlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LeaderElectionAlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->instantiate((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const double(*)>(_a[2]))); break;
        case 1: _t->instantiate((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 2: _t->instantiate(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LeaderElectionAlg::staticMetaObject = { {
    QMetaObject::SuperData::link<Algorithm::staticMetaObject>(),
    qt_meta_stringdata_LeaderElectionAlg.data,
    qt_meta_data_LeaderElectionAlg,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LeaderElectionAlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LeaderElectionAlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LeaderElectionAlg.stringdata0))
        return static_cast<void*>(this);
    return Algorithm::qt_metacast(_clname);
}

int LeaderElectionAlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Algorithm::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_ShapeFormationAlg_t {
    QByteArrayData data[6];
    char stringdata0[58];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ShapeFormationAlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ShapeFormationAlg_t qt_meta_stringdata_ShapeFormationAlg = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ShapeFormationAlg"
QT_MOC_LITERAL(1, 18, 11), // "instantiate"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 12), // "numParticles"
QT_MOC_LITERAL(4, 44, 8), // "holeProb"
QT_MOC_LITERAL(5, 53, 4) // "mode"

    },
    "ShapeFormationAlg\0instantiate\0\0"
    "numParticles\0holeProb\0mode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ShapeFormationAlg[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   34,    2, 0x0a /* Public */,
       1,    2,   41,    2, 0x2a /* Public | MethodCloned */,
       1,    1,   46,    2, 0x2a /* Public | MethodCloned */,
       1,    0,   49,    2, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Double, QMetaType::QString,    3,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Double,    3,    4,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

       0        // eod
};

void ShapeFormationAlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ShapeFormationAlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->instantiate((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const double(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: _t->instantiate((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const double(*)>(_a[2]))); break;
        case 2: _t->instantiate((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 3: _t->instantiate(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ShapeFormationAlg::staticMetaObject = { {
    QMetaObject::SuperData::link<Algorithm::staticMetaObject>(),
    qt_meta_stringdata_ShapeFormationAlg.data,
    qt_meta_data_ShapeFormationAlg,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ShapeFormationAlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ShapeFormationAlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ShapeFormationAlg.stringdata0))
        return static_cast<void*>(this);
    return Algorithm::qt_metacast(_clname);
}

int ShapeFormationAlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Algorithm::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
