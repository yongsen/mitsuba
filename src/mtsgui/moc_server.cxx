/****************************************************************************
** Meta object code from reading C++ file 'server.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "server.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'server.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ServerWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      37,   23,   13,   13, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ServerWidget[] = {
    "ServerWidget\0\0closed()\0level,message\0"
    "onTextMessage(ELogLevel,QString)\0"
};

void ServerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ServerWidget *_t = static_cast<ServerWidget *>(_o);
        switch (_id) {
        case 0: _t->closed(); break;
        case 1: _t->onTextMessage((*reinterpret_cast< ELogLevel(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ServerWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ServerWidget::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ServerWidget,
      qt_meta_data_ServerWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ServerWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ServerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ServerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ServerWidget))
        return static_cast<void*>(const_cast< ServerWidget*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ServerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ServerWidget::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
