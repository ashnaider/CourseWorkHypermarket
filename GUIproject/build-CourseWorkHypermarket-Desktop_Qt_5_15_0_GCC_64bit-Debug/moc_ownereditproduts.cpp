/****************************************************************************
** Meta object code from reading C++ file 'ownereditproduts.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../CourseWorkHypermarket/ownereditproduts.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ownereditproduts.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OwnerEditProduts_t {
    QByteArrayData data[18];
    char stringdata0[417];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OwnerEditProduts_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OwnerEditProduts_t qt_meta_stringdata_OwnerEditProduts = {
    {
QT_MOC_LITERAL(0, 0, 16), // "OwnerEditProduts"
QT_MOC_LITERAL(1, 17, 19), // "goBackToOwnerButton"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 30), // "on_goBackToOwnerButton_clicked"
QT_MOC_LITERAL(4, 69, 45), // "on_productClassesComboBox_cur..."
QT_MOC_LITERAL(5, 115, 4), // "arg1"
QT_MOC_LITERAL(6, 120, 27), // "on_deletePushButton_clicked"
QT_MOC_LITERAL(7, 148, 25), // "on_editPushButton_clicked"
QT_MOC_LITERAL(8, 174, 27), // "on_cancelPushButton_clicked"
QT_MOC_LITERAL(9, 202, 25), // "on_savePushButton_clicked"
QT_MOC_LITERAL(10, 228, 27), // "on_addNewPushButton_clicked"
QT_MOC_LITERAL(11, 256, 34), // "on_revertChangesPushButton_cl..."
QT_MOC_LITERAL(12, 291, 28), // "on_saveAllpushButton_clicked"
QT_MOC_LITERAL(13, 320, 44), // "on_productListTableWidget_cur..."
QT_MOC_LITERAL(14, 365, 10), // "currentRow"
QT_MOC_LITERAL(15, 376, 13), // "currentColumn"
QT_MOC_LITERAL(16, 390, 11), // "previousRow"
QT_MOC_LITERAL(17, 402, 14) // "previousColumn"

    },
    "OwnerEditProduts\0goBackToOwnerButton\0"
    "\0on_goBackToOwnerButton_clicked\0"
    "on_productClassesComboBox_currentIndexChanged\0"
    "arg1\0on_deletePushButton_clicked\0"
    "on_editPushButton_clicked\0"
    "on_cancelPushButton_clicked\0"
    "on_savePushButton_clicked\0"
    "on_addNewPushButton_clicked\0"
    "on_revertChangesPushButton_clicked\0"
    "on_saveAllpushButton_clicked\0"
    "on_productListTableWidget_currentCellChanged\0"
    "currentRow\0currentColumn\0previousRow\0"
    "previousColumn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OwnerEditProduts[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   70,    2, 0x08 /* Private */,
       4,    1,   71,    2, 0x08 /* Private */,
       6,    0,   74,    2, 0x08 /* Private */,
       7,    0,   75,    2, 0x08 /* Private */,
       8,    0,   76,    2, 0x08 /* Private */,
       9,    0,   77,    2, 0x08 /* Private */,
      10,    0,   78,    2, 0x08 /* Private */,
      11,    0,   79,    2, 0x08 /* Private */,
      12,    0,   80,    2, 0x08 /* Private */,
      13,    4,   81,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   14,   15,   16,   17,

       0        // eod
};

void OwnerEditProduts::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OwnerEditProduts *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->goBackToOwnerButton(); break;
        case 1: _t->on_goBackToOwnerButton_clicked(); break;
        case 2: _t->on_productClassesComboBox_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_deletePushButton_clicked(); break;
        case 4: _t->on_editPushButton_clicked(); break;
        case 5: _t->on_cancelPushButton_clicked(); break;
        case 6: _t->on_savePushButton_clicked(); break;
        case 7: _t->on_addNewPushButton_clicked(); break;
        case 8: _t->on_revertChangesPushButton_clicked(); break;
        case 9: _t->on_saveAllpushButton_clicked(); break;
        case 10: _t->on_productListTableWidget_currentCellChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OwnerEditProduts::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OwnerEditProduts::goBackToOwnerButton)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OwnerEditProduts::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_OwnerEditProduts.data,
    qt_meta_data_OwnerEditProduts,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OwnerEditProduts::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OwnerEditProduts::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OwnerEditProduts.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int OwnerEditProduts::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void OwnerEditProduts::goBackToOwnerButton()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
