/****************************************************************************
** Meta object code from reading C++ file 'ahorro.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../interfazBanco/ahorro.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ahorro.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Ahorro_t {
    const uint offsetsAndSize[8];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Ahorro_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Ahorro_t qt_meta_stringdata_Ahorro = {
    {
QT_MOC_LITERAL(0, 6), // "Ahorro"
QT_MOC_LITERAL(7, 27), // "on_btnVentanaAhorro_clicked"
QT_MOC_LITERAL(35, 0), // ""
QT_MOC_LITERAL(36, 27) // "on_btnVentanaElegir_clicked"

    },
    "Ahorro\0on_btnVentanaAhorro_clicked\0\0"
    "on_btnVentanaElegir_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Ahorro[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x08,    1 /* Private */,
       3,    0,   27,    2, 0x08,    2 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Ahorro::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Ahorro *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_btnVentanaAhorro_clicked(); break;
        case 1: _t->on_btnVentanaElegir_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject Ahorro::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Ahorro.offsetsAndSize,
    qt_meta_data_Ahorro,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Ahorro_t
, QtPrivate::TypeAndForceComplete<Ahorro, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Ahorro::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Ahorro::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Ahorro.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Usuario"))
        return static_cast< Usuario*>(this);
    return QDialog::qt_metacast(_clname);
}

int Ahorro::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
