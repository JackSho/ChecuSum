/****************************************************************************
** Meta object code from reading C++ file 'CalculateTaskManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../CalculateTaskManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CalculateTaskManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CalculateTaskManager_t {
    QByteArrayData data[10];
    char stringdata[143];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_CalculateTaskManager_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_CalculateTaskManager_t qt_meta_stringdata_CalculateTaskManager = {
    {
QT_MOC_LITERAL(0, 0, 20),
QT_MOC_LITERAL(1, 21, 20),
QT_MOC_LITERAL(2, 42, 0),
QT_MOC_LITERAL(3, 43, 7),
QT_MOC_LITERAL(4, 51, 12),
QT_MOC_LITERAL(5, 64, 12),
QT_MOC_LITERAL(6, 77, 13),
QT_MOC_LITERAL(7, 91, 17),
QT_MOC_LITERAL(8, 109, 8),
QT_MOC_LITERAL(9, 118, 23)
    },
    "CalculateTaskManager\0sig_CalculateSuccess\0"
    "\0success\0FileCheckSum\0fileCheckSum\0"
    "sig_Completed\0slot_TaskFinished\0"
    "filePath\0slot_CalculateCompleted\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CalculateTaskManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06,
       6,    0,   39,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       7,    1,   40,    2, 0x08,
       9,    2,   43,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 4,    3,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 4,    3,    5,

       0        // eod
};

void CalculateTaskManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CalculateTaskManager *_t = static_cast<CalculateTaskManager *>(_o);
        switch (_id) {
        case 0: _t->sig_CalculateSuccess((*reinterpret_cast< const bool(*)>(_a[1])),(*reinterpret_cast< const FileCheckSum(*)>(_a[2]))); break;
        case 1: _t->sig_Completed(); break;
        case 2: _t->slot_TaskFinished((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->slot_CalculateCompleted((*reinterpret_cast< const bool(*)>(_a[1])),(*reinterpret_cast< const FileCheckSum(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CalculateTaskManager::*_t)(const bool & , const FileCheckSum & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CalculateTaskManager::sig_CalculateSuccess)) {
                *result = 0;
            }
        }
        {
            typedef void (CalculateTaskManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CalculateTaskManager::sig_Completed)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject CalculateTaskManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CalculateTaskManager.data,
      qt_meta_data_CalculateTaskManager,  qt_static_metacall, 0, 0}
};


const QMetaObject *CalculateTaskManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CalculateTaskManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CalculateTaskManager.stringdata))
        return static_cast<void*>(const_cast< CalculateTaskManager*>(this));
    return QObject::qt_metacast(_clname);
}

int CalculateTaskManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void CalculateTaskManager::sig_CalculateSuccess(const bool & _t1, const FileCheckSum & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CalculateTaskManager::sig_Completed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
