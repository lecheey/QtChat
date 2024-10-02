/****************************************************************************
** Meta object code from reading C++ file 'userlistwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/userlistwidget.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'userlistwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
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
struct qt_meta_stringdata_UserListWidget_t {
    uint offsetsAndSizes[22];
    char stringdata0[15];
    char stringdata1[8];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[13];
    char stringdata5[7];
    char stringdata6[10];
    char stringdata7[23];
    char stringdata8[26];
    char stringdata9[19];
    char stringdata10[23];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_UserListWidget_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_UserListWidget_t qt_meta_stringdata_UserListWidget = {
    {
        QT_MOC_LITERAL(0, 14),  // "UserListWidget"
        QT_MOC_LITERAL(15, 7),  // "getinfo"
        QT_MOC_LITERAL(23, 0),  // ""
        QT_MOC_LITERAL(24, 8),  // "username"
        QT_MOC_LITERAL(33, 12),  // "disconnected"
        QT_MOC_LITERAL(46, 6),  // "banned"
        QT_MOC_LITERAL(53, 9),  // "unblocked"
        QT_MOC_LITERAL(63, 22),  // "on_getUserInfo_clicked"
        QT_MOC_LITERAL(86, 25),  // "on_disconnectUser_clicked"
        QT_MOC_LITERAL(112, 18),  // "on_banUser_clicked"
        QT_MOC_LITERAL(131, 22)   // "on_unblockUser_clicked"
    },
    "UserListWidget",
    "getinfo",
    "",
    "username",
    "disconnected",
    "banned",
    "unblocked",
    "on_getUserInfo_clicked",
    "on_disconnectUser_clicked",
    "on_banUser_clicked",
    "on_unblockUser_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_UserListWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   62,    2, 0x06,    1 /* Public */,
       4,    1,   65,    2, 0x06,    3 /* Public */,
       5,    1,   68,    2, 0x06,    5 /* Public */,
       6,    1,   71,    2, 0x06,    7 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   74,    2, 0x08,    9 /* Private */,
       8,    0,   75,    2, 0x08,   10 /* Private */,
       9,    0,   76,    2, 0x08,   11 /* Private */,
      10,    0,   77,    2, 0x08,   12 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject UserListWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_UserListWidget.offsetsAndSizes,
    qt_meta_data_UserListWidget,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_UserListWidget_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<UserListWidget, std::true_type>,
        // method 'getinfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'disconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'banned'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'unblocked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'on_getUserInfo_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_disconnectUser_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_banUser_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_unblockUser_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void UserListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UserListWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->getinfo((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->disconnected((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->banned((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->unblocked((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->on_getUserInfo_clicked(); break;
        case 5: _t->on_disconnectUser_clicked(); break;
        case 6: _t->on_banUser_clicked(); break;
        case 7: _t->on_unblockUser_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UserListWidget::*)(QString );
            if (_t _q_method = &UserListWidget::getinfo; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (UserListWidget::*)(QString );
            if (_t _q_method = &UserListWidget::disconnected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (UserListWidget::*)(QString );
            if (_t _q_method = &UserListWidget::banned; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (UserListWidget::*)(QString );
            if (_t _q_method = &UserListWidget::unblocked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *UserListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UserListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UserListWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int UserListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void UserListWidget::getinfo(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UserListWidget::disconnected(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UserListWidget::banned(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void UserListWidget::unblocked(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
