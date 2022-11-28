/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QlistWidget_and_QToolButton/mainwindow.h"
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
    QByteArrayData data[20];
    char stringdata0[397];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 25), // "on_toolBox_currentChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 5), // "index"
QT_MOC_LITERAL(4, 44, 23), // "on_actionInit_triggered"
QT_MOC_LITERAL(5, 68, 24), // "on_actionClear_triggered"
QT_MOC_LITERAL(6, 93, 25), // "on_actionInsert_triggered"
QT_MOC_LITERAL(7, 119, 22), // "on_actionAdd_triggered"
QT_MOC_LITERAL(8, 142, 25), // "on_actionDelete_triggered"
QT_MOC_LITERAL(9, 168, 28), // "on_actionAllChoose_triggered"
QT_MOC_LITERAL(10, 197, 30), // "on_actionAllUnChoose_triggered"
QT_MOC_LITERAL(11, 228, 28), // "on_actionNotChoose_triggered"
QT_MOC_LITERAL(12, 257, 19), // "on_checkBox_clicked"
QT_MOC_LITERAL(13, 277, 7), // "checked"
QT_MOC_LITERAL(14, 285, 32), // "on_listWidget_currentItemChanged"
QT_MOC_LITERAL(15, 318, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(16, 335, 7), // "current"
QT_MOC_LITERAL(17, 343, 8), // "previous"
QT_MOC_LITERAL(18, 352, 40), // "on_listWidget_customContextMe..."
QT_MOC_LITERAL(19, 393, 3) // "pos"

    },
    "MainWindow\0on_toolBox_currentChanged\0"
    "\0index\0on_actionInit_triggered\0"
    "on_actionClear_triggered\0"
    "on_actionInsert_triggered\0"
    "on_actionAdd_triggered\0on_actionDelete_triggered\0"
    "on_actionAllChoose_triggered\0"
    "on_actionAllUnChoose_triggered\0"
    "on_actionNotChoose_triggered\0"
    "on_checkBox_clicked\0checked\0"
    "on_listWidget_currentItemChanged\0"
    "QListWidgetItem*\0current\0previous\0"
    "on_listWidget_customContextMenuRequested\0"
    "pos"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x08 /* Private */,
       4,    0,   77,    2, 0x08 /* Private */,
       5,    0,   78,    2, 0x08 /* Private */,
       6,    0,   79,    2, 0x08 /* Private */,
       7,    0,   80,    2, 0x08 /* Private */,
       8,    0,   81,    2, 0x08 /* Private */,
       9,    0,   82,    2, 0x08 /* Private */,
      10,    0,   83,    2, 0x08 /* Private */,
      11,    0,   84,    2, 0x08 /* Private */,
      12,    1,   85,    2, 0x08 /* Private */,
      14,    2,   88,    2, 0x08 /* Private */,
      18,    1,   93,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 15,   16,   17,
    QMetaType::Void, QMetaType::QPoint,   19,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_toolBox_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_actionInit_triggered(); break;
        case 2: _t->on_actionClear_triggered(); break;
        case 3: _t->on_actionInsert_triggered(); break;
        case 4: _t->on_actionAdd_triggered(); break;
        case 5: _t->on_actionDelete_triggered(); break;
        case 6: _t->on_actionAllChoose_triggered(); break;
        case 7: _t->on_actionAllUnChoose_triggered(); break;
        case 8: _t->on_actionNotChoose_triggered(); break;
        case 9: _t->on_checkBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->on_listWidget_currentItemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 11: _t->on_listWidget_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
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
