/****************************************************************************
** Meta object code from reading C++ file 'controller.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../controller/controller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'controller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_s21__Controller_t {
    const uint offsetsAndSize[28];
    char stringdata0[171];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_s21__Controller_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_s21__Controller_t qt_meta_stringdata_s21__Controller = {
    {
QT_MOC_LITERAL(0, 15), // "s21::Controller"
QT_MOC_LITERAL(16, 13), // "SolutionReady"
QT_MOC_LITERAL(30, 0), // ""
QT_MOC_LITERAL(31, 17), // "std::vector<int>*"
QT_MOC_LITERAL(49, 12), // "vertex_index"
QT_MOC_LITERAL(62, 20), // "std::vector<double>*"
QT_MOC_LITERAL(83, 12), // "vertex_coord"
QT_MOC_LITERAL(96, 15), // "ErrorHasOccured"
QT_MOC_LITERAL(112, 12), // "SetFileName_"
QT_MOC_LITERAL(125, 9), // "file_name"
QT_MOC_LITERAL(135, 10), // "Transform_"
QT_MOC_LITERAL(146, 13), // "strategy_type"
QT_MOC_LITERAL(160, 5), // "value"
QT_MOC_LITERAL(166, 4) // "axis"

    },
    "s21::Controller\0SolutionReady\0\0"
    "std::vector<int>*\0vertex_index\0"
    "std::vector<double>*\0vertex_coord\0"
    "ErrorHasOccured\0SetFileName_\0file_name\0"
    "Transform_\0strategy_type\0value\0axis"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_s21__Controller[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   44,    2, 0x06,    1 /* Public */,
       7,    0,   49,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    1,   50,    2, 0x08,    5 /* Private */,
      10,    3,   53,    2, 0x08,    7 /* Private */,
      10,    2,   60,    2, 0x28,   11 /* Private | MethodCloned */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::Double, QMetaType::Int,   11,   12,   13,
    QMetaType::Void, QMetaType::Int, QMetaType::Double,   11,   12,

       0        // eod
};

void s21::Controller::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Controller *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->SolutionReady((*reinterpret_cast< std::vector<int>*(*)>(_a[1])),(*reinterpret_cast< std::vector<double>*(*)>(_a[2]))); break;
        case 1: _t->ErrorHasOccured(); break;
        case 2: _t->SetFileName_((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->Transform_((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->Transform_((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Controller::*)(std::vector<int> * , std::vector<double> * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Controller::SolutionReady)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Controller::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Controller::ErrorHasOccured)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject s21::Controller::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_s21__Controller.offsetsAndSize,
    qt_meta_data_s21__Controller,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_s21__Controller_t
, QtPrivate::TypeAndForceComplete<Controller, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::vector<int> *, std::false_type>, QtPrivate::TypeAndForceComplete<std::vector<double> *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>


>,
    nullptr
} };


const QMetaObject *s21::Controller::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *s21::Controller::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_s21__Controller.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int s21::Controller::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void s21::Controller::SolutionReady(std::vector<int> * _t1, std::vector<double> * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void s21::Controller::ErrorHasOccured()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
