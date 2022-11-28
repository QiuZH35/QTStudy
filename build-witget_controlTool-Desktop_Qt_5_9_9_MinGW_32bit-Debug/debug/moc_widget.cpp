/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../witget_controlTool/widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Widget_t {
    QByteArrayData data[16];
    char stringdata0[428];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Widget_t qt_meta_stringdata_Widget = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Widget"
QT_MOC_LITERAL(1, 7, 35), // "on_horizontalSliderRed_valueC..."
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 5), // "value"
QT_MOC_LITERAL(4, 50, 36), // "on_horizontalSliderBlue_value..."
QT_MOC_LITERAL(5, 87, 37), // "on_horizontalSliderGreen_valu..."
QT_MOC_LITERAL(6, 125, 37), // "on_horizontalSliderAlpha_valu..."
QT_MOC_LITERAL(7, 163, 38), // "on_horizontalSliderSetBar_val..."
QT_MOC_LITERAL(8, 202, 35), // "on_horizontalScrollBar_valueC..."
QT_MOC_LITERAL(9, 238, 20), // "on_dial_valueChanged"
QT_MOC_LITERAL(10, 259, 25), // "on_radioButtonBin_clicked"
QT_MOC_LITERAL(11, 285, 25), // "on_radioButtonOct_clicked"
QT_MOC_LITERAL(12, 311, 25), // "on_radioButtonDec_clicked"
QT_MOC_LITERAL(13, 337, 25), // "on_radioButtonHex_clicked"
QT_MOC_LITERAL(14, 363, 30), // "on_verticalSlider_valueChanged"
QT_MOC_LITERAL(15, 394, 33) // "on_verticalScrollBar_valueCha..."

    },
    "Widget\0on_horizontalSliderRed_valueChanged\0"
    "\0value\0on_horizontalSliderBlue_valueChanged\0"
    "on_horizontalSliderGreen_valueChanged\0"
    "on_horizontalSliderAlpha_valueChanged\0"
    "on_horizontalSliderSetBar_valueChanged\0"
    "on_horizontalScrollBar_valueChanged\0"
    "on_dial_valueChanged\0on_radioButtonBin_clicked\0"
    "on_radioButtonOct_clicked\0"
    "on_radioButtonDec_clicked\0"
    "on_radioButtonHex_clicked\0"
    "on_verticalSlider_valueChanged\0"
    "on_verticalScrollBar_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Widget[] = {

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
       1,    1,   79,    2, 0x08 /* Private */,
       4,    1,   82,    2, 0x08 /* Private */,
       5,    1,   85,    2, 0x08 /* Private */,
       6,    1,   88,    2, 0x08 /* Private */,
       7,    1,   91,    2, 0x08 /* Private */,
       8,    1,   94,    2, 0x08 /* Private */,
       9,    1,   97,    2, 0x08 /* Private */,
      10,    0,  100,    2, 0x08 /* Private */,
      11,    0,  101,    2, 0x08 /* Private */,
      12,    0,  102,    2, 0x08 /* Private */,
      13,    0,  103,    2, 0x08 /* Private */,
      14,    1,  104,    2, 0x08 /* Private */,
      15,    1,  107,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Widget *_t = static_cast<Widget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_horizontalSliderRed_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_horizontalSliderBlue_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_horizontalSliderGreen_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_horizontalSliderAlpha_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_horizontalSliderSetBar_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_horizontalScrollBar_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_dial_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_radioButtonBin_clicked(); break;
        case 8: _t->on_radioButtonOct_clicked(); break;
        case 9: _t->on_radioButtonDec_clicked(); break;
        case 10: _t->on_radioButtonHex_clicked(); break;
        case 11: _t->on_verticalSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_verticalScrollBar_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Widget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Widget.data,
      qt_meta_data_Widget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Widget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
