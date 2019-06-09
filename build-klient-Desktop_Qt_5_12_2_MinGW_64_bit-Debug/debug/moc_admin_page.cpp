/****************************************************************************
** Meta object code from reading C++ file 'admin_page.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../klient/admin_page.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'admin_page.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_admin_page_t {
    QByteArrayData data[15];
    char stringdata0[153];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_admin_page_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_admin_page_t qt_meta_stringdata_admin_page = {
    {
QT_MOC_LITERAL(0, 0, 10), // "admin_page"
QT_MOC_LITERAL(1, 11, 6), // "Delete"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 5), // "login"
QT_MOC_LITERAL(4, 25, 13), // "close_windows"
QT_MOC_LITERAL(5, 39, 8), // "set_data"
QT_MOC_LITERAL(6, 48, 1), // "a"
QT_MOC_LITERAL(7, 50, 1), // "b"
QT_MOC_LITERAL(8, 52, 2), // "cc"
QT_MOC_LITERAL(9, 55, 28), // "on_pushButton_delete_clicked"
QT_MOC_LITERAL(10, 84, 10), // "set_data_2"
QT_MOC_LITERAL(11, 95, 3), // "arg"
QT_MOC_LITERAL(12, 99, 26), // "on_pushButton_back_clicked"
QT_MOC_LITERAL(13, 126, 21), // "on_comboBox_activated"
QT_MOC_LITERAL(14, 148, 4) // "arg1"

    },
    "admin_page\0Delete\0\0login\0close_windows\0"
    "set_data\0a\0b\0cc\0on_pushButton_delete_clicked\0"
    "set_data_2\0arg\0on_pushButton_back_clicked\0"
    "on_comboBox_activated\0arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_admin_page[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    0,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    3,   53,    2, 0x0a /* Public */,
       9,    0,   60,    2, 0x08 /* Private */,
      10,    1,   61,    2, 0x08 /* Private */,
      12,    0,   64,    2, 0x08 /* Private */,
      13,    1,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    6,    7,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,

       0        // eod
};

void admin_page::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<admin_page *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Delete((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->close_windows(); break;
        case 2: _t->set_data((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 3: _t->on_pushButton_delete_clicked(); break;
        case 4: _t->set_data_2((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->on_pushButton_back_clicked(); break;
        case 6: _t->on_comboBox_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (admin_page::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&admin_page::Delete)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (admin_page::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&admin_page::close_windows)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject admin_page::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_admin_page.data,
    qt_meta_data_admin_page,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *admin_page::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *admin_page::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_admin_page.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int admin_page::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void admin_page::Delete(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void admin_page::close_windows()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
