/****************************************************************************
** Meta object code from reading C++ file 'manageTab.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TeacherClient/manageTab.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'manageTab.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ManageTab_t {
    QByteArrayData data[8];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ManageTab_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ManageTab_t qt_meta_stringdata_ManageTab = {
    {
QT_MOC_LITERAL(0, 0, 9), // "ManageTab"
QT_MOC_LITERAL(1, 10, 11), // "RefreshTree"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 35), // "on_subject_treeWidget_doubleC..."
QT_MOC_LITERAL(4, 59, 5), // "index"
QT_MOC_LITERAL(5, 65, 25), // "on_addSubject_btn_clicked"
QT_MOC_LITERAL(6, 91, 28), // "on_deleteSubject_btn_clicked"
QT_MOC_LITERAL(7, 120, 23) // "on_addCases_btn_clicked"

    },
    "ManageTab\0RefreshTree\0\0"
    "on_subject_treeWidget_doubleClicked\0"
    "index\0on_addSubject_btn_clicked\0"
    "on_deleteSubject_btn_clicked\0"
    "on_addCases_btn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ManageTab[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    1,   40,    2, 0x08 /* Private */,
       5,    0,   43,    2, 0x08 /* Private */,
       6,    0,   44,    2, 0x08 /* Private */,
       7,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ManageTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ManageTab *_t = static_cast<ManageTab *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->RefreshTree(); break;
        case 1: _t->on_subject_treeWidget_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->on_addSubject_btn_clicked(); break;
        case 3: _t->on_deleteSubject_btn_clicked(); break;
        case 4: _t->on_addCases_btn_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject ManageTab::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ManageTab.data,
      qt_meta_data_ManageTab,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ManageTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ManageTab::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ManageTab.stringdata0))
        return static_cast<void*>(const_cast< ManageTab*>(this));
    return QWidget::qt_metacast(_clname);
}

int ManageTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
