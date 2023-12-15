/****************************************************************************
** Meta object code from reading C++ file 'view.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../view/view.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'view.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_s21__Facade_t {
    const uint offsetsAndSize[12];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_s21__Facade_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_s21__Facade_t qt_meta_stringdata_s21__Facade = {
    {
QT_MOC_LITERAL(0, 11), // "s21::Facade"
QT_MOC_LITERAL(12, 12), // "SetTransform"
QT_MOC_LITERAL(25, 0), // ""
QT_MOC_LITERAL(26, 13), // "strategy_type"
QT_MOC_LITERAL(40, 5), // "value"
QT_MOC_LITERAL(46, 4) // "axis"

    },
    "s21::Facade\0SetTransform\0\0strategy_type\0"
    "value\0axis"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_s21__Facade[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   20,    2, 0x06,    1 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Double, QMetaType::Int,    3,    4,    5,

       0        // eod
};

void s21::Facade::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Facade *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->SetTransform((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Facade::*)(int , double , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Facade::SetTransform)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject s21::Facade::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_s21__Facade.offsetsAndSize,
    qt_meta_data_s21__Facade,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_s21__Facade_t
, QtPrivate::TypeAndForceComplete<Facade, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>



>,
    nullptr
} };


const QMetaObject *s21::Facade::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *s21::Facade::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_s21__Facade.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int s21::Facade::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void s21::Facade::SetTransform(int _t1, double _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_s21__View_t {
    const uint offsetsAndSize[40];
    char stringdata0[261];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_s21__View_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_s21__View_t qt_meta_stringdata_s21__View = {
    {
QT_MOC_LITERAL(0, 9), // "s21::View"
QT_MOC_LITERAL(10, 8), // "SetModel"
QT_MOC_LITERAL(19, 0), // ""
QT_MOC_LITERAL(20, 9), // "file_name"
QT_MOC_LITERAL(30, 15), // "HandleSolution_"
QT_MOC_LITERAL(46, 17), // "std::vector<int>*"
QT_MOC_LITERAL(64, 13), // "vertex_index_"
QT_MOC_LITERAL(78, 20), // "std::vector<double>*"
QT_MOC_LITERAL(99, 13), // "vertex_coord_"
QT_MOC_LITERAL(113, 12), // "HandleError_"
QT_MOC_LITERAL(126, 19), // "OpenFileBtnClicked_"
QT_MOC_LITERAL(146, 13), // "ClearSliders_"
QT_MOC_LITERAL(160, 15), // "TransformModel_"
QT_MOC_LITERAL(176, 7), // "Record_"
QT_MOC_LITERAL(184, 16), // "QAbstractButton*"
QT_MOC_LITERAL(201, 6), // "button"
QT_MOC_LITERAL(208, 9), // "SetColor_"
QT_MOC_LITERAL(218, 10), // "ChangeTab_"
QT_MOC_LITERAL(229, 20), // "ChangeSaveFormatTab_"
QT_MOC_LITERAL(250, 10) // "SaveImage_"

    },
    "s21::View\0SetModel\0\0file_name\0"
    "HandleSolution_\0std::vector<int>*\0"
    "vertex_index_\0std::vector<double>*\0"
    "vertex_coord_\0HandleError_\0"
    "OpenFileBtnClicked_\0ClearSliders_\0"
    "TransformModel_\0Record_\0QAbstractButton*\0"
    "button\0SetColor_\0ChangeTab_\0"
    "ChangeSaveFormatTab_\0SaveImage_"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_s21__View[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   80,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    2,   83,    2, 0x08,    3 /* Private */,
       9,    0,   88,    2, 0x08,    6 /* Private */,
      10,    0,   89,    2, 0x08,    7 /* Private */,
      11,    0,   90,    2, 0x08,    8 /* Private */,
      12,    0,   91,    2, 0x08,    9 /* Private */,
      13,    1,   92,    2, 0x08,   10 /* Private */,
      16,    1,   95,    2, 0x08,   12 /* Private */,
      17,    1,   98,    2, 0x08,   14 /* Private */,
      18,    0,  101,    2, 0x08,   16 /* Private */,
      19,    0,  102,    2, 0x08,   17 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 7,    6,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void s21::View::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<View *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->SetModel((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->HandleSolution_((*reinterpret_cast< std::vector<int>*(*)>(_a[1])),(*reinterpret_cast< std::vector<double>*(*)>(_a[2]))); break;
        case 2: _t->HandleError_(); break;
        case 3: _t->OpenFileBtnClicked_(); break;
        case 4: _t->ClearSliders_(); break;
        case 5: _t->TransformModel_(); break;
        case 6: _t->Record_((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 7: _t->SetColor_((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 8: _t->ChangeTab_((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 9: _t->ChangeSaveFormatTab_(); break;
        case 10: _t->SaveImage_(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (View::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::SetModel)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject s21::View::staticMetaObject = { {
    QMetaObject::SuperData::link<QOpenGLWidget::staticMetaObject>(),
    qt_meta_stringdata_s21__View.offsetsAndSize,
    qt_meta_data_s21__View,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_s21__View_t
, QtPrivate::TypeAndForceComplete<View, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::vector<int> *, std::false_type>, QtPrivate::TypeAndForceComplete<std::vector<double> *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QAbstractButton *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QAbstractButton *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QAbstractButton *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *s21::View::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *s21::View::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_s21__View.stringdata0))
        return static_cast<void*>(this);
    return QOpenGLWidget::qt_metacast(_clname);
}

int s21::View::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QOpenGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void s21::View::SetModel(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
