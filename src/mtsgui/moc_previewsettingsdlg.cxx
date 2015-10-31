/****************************************************************************
** Meta object code from reading C++ file 'previewsettingsdlg.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "previewsettingsdlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'previewsettingsdlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PreviewSettingsDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   23,   22,   22, 0x05,
      64,   53,   22,   22, 0x05,
     105,   96,   22,   22, 0x05,
     137,  128,   22,   22, 0x05,
     171,  160,   22,   22, 0x05,
     203,  196,   22,   22, 0x05,
     240,  196,   22,   22, 0x05,
     289,  285,   22,   22, 0x05,
     320,  315,   22,   22, 0x05,
     347,   22,   22,   22, 0x05,
     377,   22,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
     405,   22,   22,   22, 0x0a,
     435,  429,   22,   22, 0x09,
     473,  429,   22,   22, 0x09,
     515,  509,   22,   22, 0x09,
     555,  429,   22,   22, 0x09,
     591,  429,   22,   22, 0x09,
     631,  429,   22,   22, 0x09,
     674,  668,   22,   22, 0x09,
     708,  668,   22,   22, 0x09,
     749,  668,   22,   22, 0x09,
     788,   22,   22,   22, 0x09,
     813,  509,   22,   22, 0x09,
     850,  509,   22,   22, 0x09,
     891,  429,   22,   22, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_PreviewSettingsDialog[] = {
    "PreviewSettingsDialog\0\0length\0"
    "pathLengthChanged(int)\0resolution\0"
    "shadowMapResolutionChanged(int)\0"
    "clamping\0clampingChanged(Float)\0"
    "exposure\0exposureChanged(Float)\0"
    "srgb,gamma\0gammaChanged(bool,Float)\0"
    "method\0previewMethodChanged(EPreviewMethod)\0"
    "toneMappingMethodChanged(EToneMappingMethod)\0"
    "key\0reinhardKeyChanged(Float)\0burn\0"
    "reinhardBurnChanged(Float)\0"
    "diffuseReceiversChanged(bool)\0"
    "diffuseSourcesChanged(bool)\0"
    "setPreviewEnabled(bool)\0value\0"
    "on_pathLengthSlider_valueChanged(int)\0"
    "on_clampingSlider_valueChanged(int)\0"
    "index\0on_shadowResolutionCombo_activated(int)\0"
    "on_exposureSlider_valueChanged(int)\0"
    "on_exposureSpinBox_valueChanged(double)\0"
    "on_gammaSpinBox_valueChanged(double)\0"
    "state\0on_sRGBCheckBox_stateChanged(int)\0"
    "on_diffuseReceiversBox_stateChanged(int)\0"
    "on_diffuseSourcesBox_stateChanged(int)\0"
    "on_resetButton_clicked()\0"
    "on_previewMethodCombo_activated(int)\0"
    "on_toneMappingMethodCombo_activated(int)\0"
    "on_keySlider_valueChanged(int)\0"
};

void PreviewSettingsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PreviewSettingsDialog *_t = static_cast<PreviewSettingsDialog *>(_o);
        switch (_id) {
        case 0: _t->pathLengthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->shadowMapResolutionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->clampingChanged((*reinterpret_cast< Float(*)>(_a[1]))); break;
        case 3: _t->exposureChanged((*reinterpret_cast< Float(*)>(_a[1]))); break;
        case 4: _t->gammaChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< Float(*)>(_a[2]))); break;
        case 5: _t->previewMethodChanged((*reinterpret_cast< EPreviewMethod(*)>(_a[1]))); break;
        case 6: _t->toneMappingMethodChanged((*reinterpret_cast< EToneMappingMethod(*)>(_a[1]))); break;
        case 7: _t->reinhardKeyChanged((*reinterpret_cast< Float(*)>(_a[1]))); break;
        case 8: _t->reinhardBurnChanged((*reinterpret_cast< Float(*)>(_a[1]))); break;
        case 9: _t->diffuseReceiversChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->diffuseSourcesChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->setPreviewEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->on_pathLengthSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->on_clampingSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->on_shadowResolutionCombo_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->on_exposureSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->on_exposureSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 17: _t->on_gammaSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 18: _t->on_sRGBCheckBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->on_diffuseReceiversBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->on_diffuseSourcesBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->on_resetButton_clicked(); break;
        case 22: _t->on_previewMethodCombo_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->on_toneMappingMethodCombo_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->on_keySlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PreviewSettingsDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PreviewSettingsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PreviewSettingsDialog,
      qt_meta_data_PreviewSettingsDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PreviewSettingsDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PreviewSettingsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PreviewSettingsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PreviewSettingsDialog))
        return static_cast<void*>(const_cast< PreviewSettingsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int PreviewSettingsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}

// SIGNAL 0
void PreviewSettingsDialog::pathLengthChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PreviewSettingsDialog::shadowMapResolutionChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PreviewSettingsDialog::clampingChanged(Float _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PreviewSettingsDialog::exposureChanged(Float _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PreviewSettingsDialog::gammaChanged(bool _t1, Float _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void PreviewSettingsDialog::previewMethodChanged(EPreviewMethod _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void PreviewSettingsDialog::toneMappingMethodChanged(EToneMappingMethod _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void PreviewSettingsDialog::reinhardKeyChanged(Float _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void PreviewSettingsDialog::reinhardBurnChanged(Float _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void PreviewSettingsDialog::diffuseReceiversChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void PreviewSettingsDialog::diffuseSourcesChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
QT_END_MOC_NAMESPACE
