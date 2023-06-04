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
    uint offsetsAndSizes[40];
    char stringdata0[5];
    char stringdata1[8];
    char stringdata2[1];
    char stringdata3[4];
    char stringdata4[5];
    char stringdata5[29];
    char stringdata6[14];
    char stringdata7[11];
    char stringdata8[6];
    char stringdata9[16];
    char stringdata10[12];
    char stringdata11[2];
    char stringdata12[13];
    char stringdata13[20];
    char stringdata14[21];
    char stringdata15[11];
    char stringdata16[7];
    char stringdata17[15];
    char stringdata18[10];
    char stringdata19[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Game_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_Game_t qt_meta_stringdata_Game = {
    {
        QT_MOC_LITERAL(0, 4),  // "Game"
        QT_MOC_LITERAL(5, 7),  // "passPos"
        QT_MOC_LITERAL(13, 0),  // ""
        QT_MOC_LITERAL(14, 3),  // "RED"
        QT_MOC_LITERAL(18, 4),  // "BLUE"
        QT_MOC_LITERAL(23, 28),  // "on_GameSettingButton_clicked"
        QT_MOC_LITERAL(52, 13),  // "keyPressEvent"
        QT_MOC_LITERAL(66, 10),  // "QKeyEvent*"
        QT_MOC_LITERAL(77, 5),  // "event"
        QT_MOC_LITERAL(83, 15),  // "keyReleaseEvent"
        QT_MOC_LITERAL(99, 11),  // "recQuitSign"
        QT_MOC_LITERAL(111, 1),  // "a"
        QT_MOC_LITERAL(113, 12),  // "timeContinue"
        QT_MOC_LITERAL(126, 19),  // "RedLabelTextSetting"
        QT_MOC_LITERAL(146, 20),  // "BlueLabelTextSetting"
        QT_MOC_LITERAL(167, 10),  // "keySlotOut"
        QT_MOC_LITERAL(178, 6),  // "reBorn"
        QT_MOC_LITERAL(185, 14),  // "setTimeCounter"
        QT_MOC_LITERAL(200, 9),  // "yieldBean"
        QT_MOC_LITERAL(210, 7)   // "sendPos"
    },
    "Game",
    "passPos",
    "",
    "RED",
    "BLUE",
    "on_GameSettingButton_clicked",
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
    "setTimeCounter",
    "yieldBean",
    "sendPos"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_Game[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   92,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   97,    2, 0x08,    4 /* Private */,
       6,    1,   98,    2, 0x08,    5 /* Private */,
       9,    1,  101,    2, 0x08,    7 /* Private */,
      10,    1,  104,    2, 0x08,    9 /* Private */,
      12,    0,  107,    2, 0x08,   11 /* Private */,
      13,    0,  108,    2, 0x08,   12 /* Private */,
      14,    0,  109,    2, 0x08,   13 /* Private */,
      15,    0,  110,    2, 0x08,   14 /* Private */,
      16,    1,  111,    2, 0x08,   15 /* Private */,
      17,    0,  114,    2, 0x08,   17 /* Private */,
      18,    0,  115,    2, 0x08,   18 /* Private */,
      19,    0,  116,    2, 0x08,   19 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPointF, QMetaType::QPointF,    3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void,
    QMetaType::Void,
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
        // method 'passPos'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPointF &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPointF &, std::false_type>,
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
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'yieldBean'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sendPos'
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
        case 0: _t->passPos((*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[2]))); break;
        case 1: _t->on_GameSettingButton_clicked(); break;
        case 2: _t->keyPressEvent((*reinterpret_cast< std::add_pointer_t<QKeyEvent*>>(_a[1]))); break;
        case 3: _t->keyReleaseEvent((*reinterpret_cast< std::add_pointer_t<QKeyEvent*>>(_a[1]))); break;
        case 4: _t->recQuitSign((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->timeContinue(); break;
        case 6: _t->RedLabelTextSetting(); break;
        case 7: _t->BlueLabelTextSetting(); break;
        case 8: _t->keySlotOut(); break;
        case 9: _t->reBorn((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->setTimeCounter(); break;
        case 11: _t->yieldBean(); break;
        case 12: _t->sendPos(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Game::*)(const QPointF & , const QPointF & );
            if (_t _q_method = &Game::passPos; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
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
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void Game::passPos(const QPointF & _t1, const QPointF & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
