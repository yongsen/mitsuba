/****************************************************************************
** Meta object code from reading C++ file 'updatedlg.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "updatedlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'updatedlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UpdateDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x09,
      38,   13,   13,   13, 0x09,
      64,   13,   13,   13, 0x09,
      98,   92,   13,   13, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_UpdateDialog[] = {
    "UpdateDialog\0\0on_skipButton_clicked()\0"
    "on_remindButton_clicked()\0"
    "on_downloadButton_clicked()\0reply\0"
    "onNetworkFinished(QNetworkReply*)\0"
};

void UpdateDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UpdateDialog *_t = static_cast<UpdateDialog *>(_o);
        switch (_id) {
        case 0: _t->on_skipButton_clicked(); break;
        case 1: _t->on_remindButton_clicked(); break;
        case 2: _t->on_downloadButton_clicked(); break;
        case 3: _t->onNetworkFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UpdateDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UpdateDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_UpdateDialog,
      qt_meta_data_UpdateDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UpdateDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UpdateDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UpdateDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UpdateDialog))
        return static_cast<void*>(const_cast< UpdateDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int UpdateDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
