/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QTableWidget/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[18];
    char stringdata0[460];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 28), // "on_btnSetTableHeader_clicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 20), // "on_btnSetRow_clicked"
QT_MOC_LITERAL(4, 62, 30), // "on_checkBoxSetRowColor_clicked"
QT_MOC_LITERAL(5, 93, 7), // "checked"
QT_MOC_LITERAL(6, 101, 27), // "on_btnInitTableData_clicked"
QT_MOC_LITERAL(7, 129, 20), // "on_btnInsert_clicked"
QT_MOC_LITERAL(8, 150, 20), // "on_btnAppend_clicked"
QT_MOC_LITERAL(9, 171, 23), // "on_btnDeleteRow_clicked"
QT_MOC_LITERAL(10, 195, 27), // "on_btnAutoRowHeight_clicked"
QT_MOC_LITERAL(11, 223, 27), // "on_btnAutoColWeight_clicked"
QT_MOC_LITERAL(12, 251, 29), // "on_btnReadTableToText_clicked"
QT_MOC_LITERAL(13, 281, 33), // "on_checkBoxSetTableUpdate_cli..."
QT_MOC_LITERAL(14, 315, 38), // "on_checkBoxSetDisplayColHeade..."
QT_MOC_LITERAL(15, 354, 40), // "on_checkBoxSetDisplayTableHea..."
QT_MOC_LITERAL(16, 395, 31), // "on_radioButtonChooseRow_clicked"
QT_MOC_LITERAL(17, 427, 32) // "on_radioButtonChooseCell_clicked"

    },
    "MainWindow\0on_btnSetTableHeader_clicked\0"
    "\0on_btnSetRow_clicked\0"
    "on_checkBoxSetRowColor_clicked\0checked\0"
    "on_btnInitTableData_clicked\0"
    "on_btnInsert_clicked\0on_btnAppend_clicked\0"
    "on_btnDeleteRow_clicked\0"
    "on_btnAutoRowHeight_clicked\0"
    "on_btnAutoColWeight_clicked\0"
    "on_btnReadTableToText_clicked\0"
    "on_checkBoxSetTableUpdate_clicked\0"
    "on_checkBoxSetDisplayColHeader_clicked\0"
    "on_checkBoxSetDisplayTableHeader_clicked\0"
    "on_radioButtonChooseRow_clicked\0"
    "on_radioButtonChooseCell_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x08 /* Private */,
       3,    0,   95,    2, 0x08 /* Private */,
       4,    1,   96,    2, 0x08 /* Private */,
       6,    0,   99,    2, 0x08 /* Private */,
       7,    0,  100,    2, 0x08 /* Private */,
       8,    0,  101,    2, 0x08 /* Private */,
       9,    0,  102,    2, 0x08 /* Private */,
      10,    0,  103,    2, 0x08 /* Private */,
      11,    0,  104,    2, 0x08 /* Private */,
      12,    0,  105,    2, 0x08 /* Private */,
      13,    1,  106,    2, 0x08 /* Private */,
      14,    0,  109,    2, 0x08 /* Private */,
      15,    1,  110,    2, 0x08 /* Private */,
      14,    1,  113,    2, 0x08 /* Private */,
      16,    0,  116,    2, 0x08 /* Private */,
      17,    0,  117,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnSetTableHeader_clicked(); break;
        case 1: _t->on_btnSetRow_clicked(); break;
        case 2: _t->on_checkBoxSetRowColor_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_btnInitTableData_clicked(); break;
        case 4: _t->on_btnInsert_clicked(); break;
        case 5: _t->on_btnAppend_clicked(); break;
        case 6: _t->on_btnDeleteRow_clicked(); break;
        case 7: _t->on_btnAutoRowHeight_clicked(); break;
        case 8: _t->on_btnAutoColWeight_clicked(); break;
        case 9: _t->on_btnReadTableToText_clicked(); break;
        case 10: _t->on_checkBoxSetTableUpdate_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->on_checkBoxSetDisplayTableHeader_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->on_checkBoxSetDisplayColHeader_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->on_radioButtonChooseRow_clicked(); break;
        case 15: _t->on_radioButtonChooseCell_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
