/****************************************************************************
** Meta object code from reading C++ file 'game.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../PacmanFight/game.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'game.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_Game_t {
    uint offsetsAndSizes[30];
    char stringdata0[5];
    char stringdata1[29];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[11];
    char stringdata5[6];
    char stringdata6[16];
    char stringdata7[12];
    char stringdata8[2];
    char stringdata9[13];
    char stringdata10[20];
    char stringdata11[21];
    char stringdata12[11];
    char stringdata13[7];
    char stringdata14[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Game_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_Game_t qt_meta_stringdata_Game = {
    {
        QT_MOC_LITERAL(0, 4),  // "Game"
        QT_MOC_LITERAL(5, 28),  // "on_GameSettingButton_clicked"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 13),  // "keyPressEvent"
        QT_MOC_LITERAL(49, 10),  // "QKeyEvent*"
        QT_MOC_LITERAL(60, 5),  // "event"
        QT_MOC_LITERAL(66, 15),  // "keyReleaseEvent"
        QT_MOC_LITERAL(82, 11),  // "recQuitSign"
        QT_MOC_LITERAL(94, 1),  // "a"
        QT_MOC_LITERAL(96, 12),  // "timeContinue"
        QT_MOC_LITERAL(109, 19),  // "RedLabelTextSetting"
        QT_MOC_LITERAL(129, 20),  // "BlueLabelTextSetting"
        QT_MOC_LITERAL(150, 10),  // "keySlotOut"
        QT_MOC_LITERAL(161, 6),  // "reBorn"
        QT_MOC_LITERAL(168, 14)   // "setTimeCounter"
    },
    "Game",
    "on_GameSettingButton_clicked",
    "",
    "keyPressEvent",
    "QKeyEvent*",
    "event",
    "keyReleaseEvent",
    "recQuitSign",
    "a",
    "timeContinue",
    "RedLabelTextSetting",
    "BlueLabelTextSetting",
    "keySlotOut",
    "reBorn",
    "setTimeCounter"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_Game[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x08,    1 /* Private */,
       3,    1,   75,    2, 0x08,    2 /* Private */,
       6,    1,   78,    2, 0x08,    4 /* Private */,
       7,    1,   81,    2, 0x08,    6 /* Private */,
       9,    0,   84,    2, 0x08,    8 /* Private */,
      10,    0,   85,    2, 0x08,    9 /* Private */,
      11,    0,   86,    2, 0x08,   10 /* Private */,
      12,    0,   87,    2, 0x08,   11 /* Private */,
      13,    1,   88,    2, 0x08,   12 /* Private */,
      14,    0,   91,    2, 0x08,   14 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Game::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Game.offsetsAndSizes,
    qt_meta_data_Game,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_Game_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Game, std::true_type>,
        // method 'on_GameSettingButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'keyPressEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QKeyEvent *, std::false_type>,
        // method 'keyReleaseEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QKeyEvent *, std::false_type>,
        // method 'recQuitSign'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'timeContinue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'RedLabelTextSetting'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'BlueLabelTextSetting'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'keySlotOut'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reBorn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setTimeCounter'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Game::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Game *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_GameSettingButton_clicked(); break;
        case 1: _t->keyPressEvent((*reinterpret_cast< std::add_pointer_t<QKeyEvent*>>(_a[1]))); break;
        case 2: _t->keyReleaseEvent((*reinterpret_cast< std::add_pointer_t<QKeyEvent*>>(_a[1]))); break;
        case 3: _t->recQuitSign((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->timeContinue(); break;
        case 5: _t->RedLabelTextSetting(); break;
        case 6: _t->BlueLabelTextSetting(); break;
        case 7: _t->keySlotOut(); break;
        case 8: _t->reBorn((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->setTimeCounter(); break;
        default: ;
        }
    }
}

const QMetaObject *Game::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Game::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Game.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Game::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
