/****************************************************************************
** Meta object code from reading C++ file 'billet_measurement.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../billet_measurement.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'billet_measurement.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Billet_Measurement_t {
    QByteArrayData data[15];
    char stringdata0[220];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Billet_Measurement_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Billet_Measurement_t qt_meta_stringdata_Billet_Measurement = {
    {
QT_MOC_LITERAL(0, 0, 18), // "Billet_Measurement"
QT_MOC_LITERAL(1, 19, 14), // "SlotCamConnect"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 14), // "SlotCamDisconn"
QT_MOC_LITERAL(4, 50, 13), // "SlotStartGrab"
QT_MOC_LITERAL(5, 64, 13), // "SlotPauseGrab"
QT_MOC_LITERAL(6, 78, 10), // "SlotSetCam"
QT_MOC_LITERAL(7, 89, 10), // "SlotGetCam"
QT_MOC_LITERAL(8, 100, 17), // "SlotCancelCamPara"
QT_MOC_LITERAL(9, 118, 15), // "SlotExTriggerOn"
QT_MOC_LITERAL(10, 134, 16), // "SlotExTriggerOff"
QT_MOC_LITERAL(11, 151, 21), // "SlotSetExTriggerParam"
QT_MOC_LITERAL(12, 173, 16), // "SlotTriggerBtnOk"
QT_MOC_LITERAL(13, 190, 20), // "SlotTriggerBtnCancel"
QT_MOC_LITERAL(14, 211, 8) // "InitSlot"

    },
    "Billet_Measurement\0SlotCamConnect\0\0"
    "SlotCamDisconn\0SlotStartGrab\0SlotPauseGrab\0"
    "SlotSetCam\0SlotGetCam\0SlotCancelCamPara\0"
    "SlotExTriggerOn\0SlotExTriggerOff\0"
    "SlotSetExTriggerParam\0SlotTriggerBtnOk\0"
    "SlotTriggerBtnCancel\0InitSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Billet_Measurement[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    0,   90,    2, 0x08 /* Private */,
      14,    0,   91,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Billet_Measurement::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Billet_Measurement *_t = static_cast<Billet_Measurement *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SlotCamConnect(); break;
        case 1: _t->SlotCamDisconn(); break;
        case 2: _t->SlotStartGrab(); break;
        case 3: _t->SlotPauseGrab(); break;
        case 4: _t->SlotSetCam(); break;
        case 5: _t->SlotGetCam(); break;
        case 6: _t->SlotCancelCamPara(); break;
        case 7: _t->SlotExTriggerOn(); break;
        case 8: _t->SlotExTriggerOff(); break;
        case 9: _t->SlotSetExTriggerParam(); break;
        case 10: _t->SlotTriggerBtnOk(); break;
        case 11: _t->SlotTriggerBtnCancel(); break;
        case 12: _t->InitSlot(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Billet_Measurement::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Billet_Measurement.data,
      qt_meta_data_Billet_Measurement,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Billet_Measurement::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Billet_Measurement::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Billet_Measurement.stringdata0))
        return static_cast<void*>(const_cast< Billet_Measurement*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Billet_Measurement::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
