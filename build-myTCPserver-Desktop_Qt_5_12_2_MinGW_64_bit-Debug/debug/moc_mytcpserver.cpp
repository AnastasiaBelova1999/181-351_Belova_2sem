/****************************************************************************
** Meta object code from reading C++ file 'mytcpserver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../myTCPserver/mytcpserver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mytcpserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyTcpServer_t {
    QByteArrayData data[17];
    char stringdata0[202];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyTcpServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyTcpServer_t qt_meta_stringdata_MyTcpServer = {
    {
QT_MOC_LITERAL(0, 0, 11), // "MyTcpServer"
QT_MOC_LITERAL(1, 12, 17), // "slotNewConnection"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 14), // "slotServerRead"
QT_MOC_LITERAL(4, 46, 22), // "slotClientDisconnected"
QT_MOC_LITERAL(5, 69, 21), // "QString_to_QByteArray"
QT_MOC_LITERAL(6, 91, 5), // "templ"
QT_MOC_LITERAL(7, 97, 21), // "QByteArray_to_QString"
QT_MOC_LITERAL(8, 119, 7), // "Routing"
QT_MOC_LITERAL(9, 127, 4), // "Data"
QT_MOC_LITERAL(10, 132, 10), // "descriptor"
QT_MOC_LITERAL(11, 143, 11), // "Check_login"
QT_MOC_LITERAL(12, 155, 14), // "Check_register"
QT_MOC_LITERAL(13, 170, 6), // "Delete"
QT_MOC_LITERAL(14, 177, 6), // "Change"
QT_MOC_LITERAL(15, 184, 6), // "status"
QT_MOC_LITERAL(16, 191, 10) // "status_pay"

    },
    "MyTcpServer\0slotNewConnection\0\0"
    "slotServerRead\0slotClientDisconnected\0"
    "QString_to_QByteArray\0templ\0"
    "QByteArray_to_QString\0Routing\0Data\0"
    "descriptor\0Check_login\0Check_register\0"
    "Delete\0Change\0status\0status_pay"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyTcpServer[] = {

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
       1,    0,   74,    2, 0x0a /* Public */,
       3,    0,   75,    2, 0x0a /* Public */,
       4,    0,   76,    2, 0x0a /* Public */,
       5,    1,   77,    2, 0x0a /* Public */,
       7,    1,   80,    2, 0x0a /* Public */,
       8,    2,   83,    2, 0x0a /* Public */,
      11,    2,   88,    2, 0x0a /* Public */,
      12,    2,   93,    2, 0x0a /* Public */,
      13,    2,   98,    2, 0x0a /* Public */,
      14,    2,  103,    2, 0x0a /* Public */,
      15,    1,  108,    2, 0x0a /* Public */,
      16,    1,  111,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QByteArray, QMetaType::QString,    6,
    QMetaType::QString, QMetaType::QByteArray,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    9,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    9,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    9,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    9,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    9,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,

       0        // eod
};

void MyTcpServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MyTcpServer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotNewConnection(); break;
        case 1: _t->slotServerRead(); break;
        case 2: _t->slotClientDisconnected(); break;
        case 3: { QByteArray _r = _t->QString_to_QByteArray((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = std::move(_r); }  break;
        case 4: { QString _r = _t->QByteArray_to_QString((*reinterpret_cast< QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->Routing((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->Check_login((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->Check_register((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->Delete((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->Change((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->status((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->status_pay((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MyTcpServer::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_MyTcpServer.data,
    qt_meta_data_MyTcpServer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MyTcpServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyTcpServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyTcpServer.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MyTcpServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
