/****************************************************************************
** Meta object code from reading C++ file 'blinky.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../2019-pd2-pacman/blinky.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'blinky.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Blinky_t {
    QByteArrayData data[6];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Blinky_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Blinky_t qt_meta_stringdata_Blinky = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Blinky"
QT_MOC_LITERAL(1, 7, 9), // "keepmove1"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 9), // "keepmove2"
QT_MOC_LITERAL(4, 28, 9), // "keepmove3"
QT_MOC_LITERAL(5, 38, 9) // "keepmove4"

    },
    "Blinky\0keepmove1\0\0keepmove2\0keepmove3\0"
    "keepmove4"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Blinky[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    0,   35,    2, 0x0a /* Public */,
       4,    0,   36,    2, 0x0a /* Public */,
       5,    0,   37,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Blinky::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Blinky *_t = static_cast<Blinky *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->keepmove1(); break;
        case 1: _t->keepmove2(); break;
        case 2: _t->keepmove3(); break;
        case 3: _t->keepmove4(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Blinky::staticMetaObject = {
    { &Moveitem::staticMetaObject, qt_meta_stringdata_Blinky.data,
      qt_meta_data_Blinky,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Blinky::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Blinky::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Blinky.stringdata0))
        return static_cast<void*>(this);
    return Moveitem::qt_metacast(_clname);
}

int Blinky::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Moveitem::qt_metacall(_c, _id, _a);
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
