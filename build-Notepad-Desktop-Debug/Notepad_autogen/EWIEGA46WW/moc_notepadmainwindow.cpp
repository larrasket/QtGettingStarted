/****************************************************************************
** Meta object code from reading C++ file 'notepadmainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Notepad/notepadmainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'notepadmainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NotepadMainWindow_t {
    const uint offsetsAndSize[14];
    char stringdata0[116];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_NotepadMainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_NotepadMainWindow_t qt_meta_stringdata_NotepadMainWindow = {
    {
QT_MOC_LITERAL(0, 17), // "NotepadMainWindow"
QT_MOC_LITERAL(18, 23), // "on_spinBox_valueChanged"
QT_MOC_LITERAL(42, 0), // ""
QT_MOC_LITERAL(43, 4), // "arg1"
QT_MOC_LITERAL(48, 23), // "on_saveAndQuite_clicked"
QT_MOC_LITERAL(72, 21), // "on_saveButton_clicked"
QT_MOC_LITERAL(94, 21) // "on_OpenButton_clicked"

    },
    "NotepadMainWindow\0on_spinBox_valueChanged\0"
    "\0arg1\0on_saveAndQuite_clicked\0"
    "on_saveButton_clicked\0on_OpenButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NotepadMainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x08,    1 /* Private */,
       4,    0,   41,    2, 0x08,    3 /* Private */,
       5,    0,   42,    2, 0x08,    4 /* Private */,
       6,    0,   43,    2, 0x08,    5 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void NotepadMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NotepadMainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_spinBox_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->on_saveAndQuite_clicked(); break;
        case 2: _t->on_saveButton_clicked(); break;
        case 3: _t->on_OpenButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject NotepadMainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_NotepadMainWindow.offsetsAndSize,
    qt_meta_data_NotepadMainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_NotepadMainWindow_t
, QtPrivate::TypeAndForceComplete<NotepadMainWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *NotepadMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NotepadMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NotepadMainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int NotepadMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
