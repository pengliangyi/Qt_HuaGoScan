/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[20];
    char stringdata0[400];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 16), // "ImgViewAvailable"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 11), // "isAvailable"
QT_MOC_LITERAL(4, 41, 24), // "on_win_btn_close_clicked"
QT_MOC_LITERAL(5, 66, 19), // "on_btn_scan_clicked"
QT_MOC_LITERAL(6, 86, 19), // "on_btn_open_clicked"
QT_MOC_LITERAL(7, 106, 19), // "on_btn_save_clicked"
QT_MOC_LITERAL(8, 126, 21), // "on_btn_saveAs_clicked"
QT_MOC_LITERAL(9, 148, 20), // "on_btn_close_clicked"
QT_MOC_LITERAL(10, 169, 21), // "on_btn_zoomIn_clicked"
QT_MOC_LITERAL(11, 191, 22), // "on_btn_zoomOut_clicked"
QT_MOC_LITERAL(12, 214, 23), // "on_btn_zoomReal_clicked"
QT_MOC_LITERAL(13, 238, 22), // "on_btn_zoomFit_clicked"
QT_MOC_LITERAL(14, 261, 24), // "on_btn_antiClock_clicked"
QT_MOC_LITERAL(15, 286, 20), // "on_btn_clock_clicked"
QT_MOC_LITERAL(16, 307, 18), // "showSettingsDialog"
QT_MOC_LITERAL(17, 326, 27), // "on_ImgViewAvailable_changed"
QT_MOC_LITERAL(18, 354, 22), // "on_win_btn_max_clicked"
QT_MOC_LITERAL(19, 377, 22) // "on_win_btn_min_clicked"

    },
    "MainWindow\0ImgViewAvailable\0\0isAvailable\0"
    "on_win_btn_close_clicked\0on_btn_scan_clicked\0"
    "on_btn_open_clicked\0on_btn_save_clicked\0"
    "on_btn_saveAs_clicked\0on_btn_close_clicked\0"
    "on_btn_zoomIn_clicked\0on_btn_zoomOut_clicked\0"
    "on_btn_zoomReal_clicked\0on_btn_zoomFit_clicked\0"
    "on_btn_antiClock_clicked\0on_btn_clock_clicked\0"
    "showSettingsDialog\0on_ImgViewAvailable_changed\0"
    "on_win_btn_max_clicked\0on_win_btn_min_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,  102,    2, 0x08 /* Private */,
       5,    0,  103,    2, 0x08 /* Private */,
       6,    0,  104,    2, 0x08 /* Private */,
       7,    0,  105,    2, 0x08 /* Private */,
       8,    0,  106,    2, 0x08 /* Private */,
       9,    0,  107,    2, 0x08 /* Private */,
      10,    0,  108,    2, 0x08 /* Private */,
      11,    0,  109,    2, 0x08 /* Private */,
      12,    0,  110,    2, 0x08 /* Private */,
      13,    0,  111,    2, 0x08 /* Private */,
      14,    0,  112,    2, 0x08 /* Private */,
      15,    0,  113,    2, 0x08 /* Private */,
      16,    0,  114,    2, 0x08 /* Private */,
      17,    1,  115,    2, 0x08 /* Private */,
      18,    0,  118,    2, 0x08 /* Private */,
      19,    0,  119,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

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
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ImgViewAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_win_btn_close_clicked(); break;
        case 2: _t->on_btn_scan_clicked(); break;
        case 3: _t->on_btn_open_clicked(); break;
        case 4: _t->on_btn_save_clicked(); break;
        case 5: _t->on_btn_saveAs_clicked(); break;
        case 6: _t->on_btn_close_clicked(); break;
        case 7: _t->on_btn_zoomIn_clicked(); break;
        case 8: _t->on_btn_zoomOut_clicked(); break;
        case 9: _t->on_btn_zoomReal_clicked(); break;
        case 10: _t->on_btn_zoomFit_clicked(); break;
        case 11: _t->on_btn_antiClock_clicked(); break;
        case 12: _t->on_btn_clock_clicked(); break;
        case 13: _t->showSettingsDialog(); break;
        case 14: _t->on_ImgViewAvailable_changed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->on_win_btn_max_clicked(); break;
        case 16: _t->on_win_btn_min_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::ImgViewAvailable)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::ImgViewAvailable(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
