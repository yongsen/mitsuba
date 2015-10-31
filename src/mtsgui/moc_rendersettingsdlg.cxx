/****************************************************************************
** Meta object code from reading C++ file 'rendersettingsdlg.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "rendersettingsdlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rendersettingsdlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PropertyDelegate[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_PropertyDelegate[] = {
    "PropertyDelegate\0\0updateWidgetData()\0"
};

void PropertyDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PropertyDelegate *_t = static_cast<PropertyDelegate *>(_o);
        switch (_id) {
        case 0: _t->updateWidgetData(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PropertyDelegate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PropertyDelegate::staticMetaObject = {
    { &QStyledItemDelegate::staticMetaObject, qt_meta_stringdata_PropertyDelegate,
      qt_meta_data_PropertyDelegate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PropertyDelegate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PropertyDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PropertyDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PropertyDelegate))
        return static_cast<void*>(const_cast< PropertyDelegate*>(this));
    return QStyledItemDelegate::qt_metacast(_clname);
}

int PropertyDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_RenderSettingsDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      42,   22,   21,   21, 0x09,
     101,   95,   21,   21, 0x09,
     120,   21,   21,   21, 0x09,
     136,   21,   21,   21, 0x09,
     145,   21,   21,   21, 0x09,
     155,   21,   21,   21, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_RenderSettingsDialog[] = {
    "RenderSettingsDialog\0\0selected,deselected\0"
    "onTreeSelectionChange(QItemSelection,QItemSelection)\0"
    "index\0cbHighlighted(int)\0chkBoxPressed()\0"
    "update()\0refresh()\0dataChanged()\0"
};

void RenderSettingsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RenderSettingsDialog *_t = static_cast<RenderSettingsDialog *>(_o);
        switch (_id) {
        case 0: _t->onTreeSelectionChange((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 1: _t->cbHighlighted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->chkBoxPressed(); break;
        case 3: _t->update(); break;
        case 4: _t->refresh(); break;
        case 5: _t->dataChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RenderSettingsDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RenderSettingsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_RenderSettingsDialog,
      qt_meta_data_RenderSettingsDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RenderSettingsDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RenderSettingsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RenderSettingsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RenderSettingsDialog))
        return static_cast<void*>(const_cast< RenderSettingsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int RenderSettingsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
