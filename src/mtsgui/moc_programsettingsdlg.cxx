/****************************************************************************
** Meta object code from reading C++ file 'programsettingsdlg.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "programsettingsdlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'programsettingsdlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ProgramSettingsDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x0a,
      33,   22,   22,   22, 0x09,
      60,   22,   22,   22, 0x09,
      90,   22,   22,   22, 0x09,
     123,   22,   22,   22, 0x09,
     168,  159,   22,   22, 0x09,
     240,  159,   22,   22, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ProgramSettingsDialog[] = {
    "ProgramSettingsDialog\0\0refresh()\0"
    "on_addPathButton_clicked()\0"
    "on_removePathButton_clicked()\0"
    "on_addConnectionButton_clicked()\0"
    "on_removeConnectionButton_clicked()\0"
    "cur,prev\0"
    "on_searchPathList_currentItemChanged(QListWidgetItem*,QListWidgetItem*"
    ")\0"
    "on_connectionList_currentItemChanged(QListWidgetItem*,QListWidgetItem*"
    ")\0"
};

void ProgramSettingsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ProgramSettingsDialog *_t = static_cast<ProgramSettingsDialog *>(_o);
        switch (_id) {
        case 0: _t->refresh(); break;
        case 1: _t->on_addPathButton_clicked(); break;
        case 2: _t->on_removePathButton_clicked(); break;
        case 3: _t->on_addConnectionButton_clicked(); break;
        case 4: _t->on_removeConnectionButton_clicked(); break;
        case 5: _t->on_searchPathList_currentItemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 6: _t->on_connectionList_currentItemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ProgramSettingsDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ProgramSettingsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ProgramSettingsDialog,
      qt_meta_data_ProgramSettingsDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ProgramSettingsDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ProgramSettingsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ProgramSettingsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ProgramSettingsDialog))
        return static_cast<void*>(const_cast< ProgramSettingsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ProgramSettingsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
