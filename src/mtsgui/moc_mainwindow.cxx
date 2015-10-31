/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QRenderListener[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      31,   17,   16,   16, 0x05,
      97,   90,   16,   16, 0x05,
     157,  141,   16,   16, 0x05,
     219,  205,   16,   16, 0x05,
     254,   16,   16,   16, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QRenderListener[] = {
    "QRenderListener\0\0job,wu,worker\0"
    "workBegin(const RenderJob*,const RectangularWorkUnit*,int)\0"
    "job,wr\0workEnd(const RenderJob*,const ImageBlock*)\0"
    "job,offset,size\0"
    "workCanceled(const RenderJob*,Point2i,Vector2i)\0"
    "job,cancelled\0jobFinished(const RenderJob*,bool)\0"
    "refresh()\0"
};

void QRenderListener::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QRenderListener *_t = static_cast<QRenderListener *>(_o);
        switch (_id) {
        case 0: _t->workBegin((*reinterpret_cast< const RenderJob*(*)>(_a[1])),(*reinterpret_cast< const RectangularWorkUnit*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->workEnd((*reinterpret_cast< const RenderJob*(*)>(_a[1])),(*reinterpret_cast< const ImageBlock*(*)>(_a[2]))); break;
        case 2: _t->workCanceled((*reinterpret_cast< const RenderJob*(*)>(_a[1])),(*reinterpret_cast< const Point2i(*)>(_a[2])),(*reinterpret_cast< const Vector2i(*)>(_a[3]))); break;
        case 3: _t->jobFinished((*reinterpret_cast< const RenderJob*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->refresh(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QRenderListener::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QRenderListener::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QRenderListener,
      qt_meta_data_QRenderListener, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QRenderListener::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QRenderListener::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QRenderListener::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QRenderListener))
        return static_cast<void*>(const_cast< QRenderListener*>(this));
    if (!strcmp(_clname, "RenderListener"))
        return static_cast< RenderListener*>(const_cast< QRenderListener*>(this));
    return QObject::qt_metacast(_clname);
}

int QRenderListener::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void QRenderListener::workBegin(const RenderJob * _t1, const RectangularWorkUnit * _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QRenderListener::workEnd(const RenderJob * _t1, const ImageBlock * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QRenderListener::workCanceled(const RenderJob * _t1, const Point2i & _t2, const Vector2i & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QRenderListener::jobFinished(const RenderJob * _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QRenderListener::refresh()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      65,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      25,   11,   11,   11, 0x08,
      61,   11,   11,   11, 0x08,
      98,   11,   11,   11, 0x08,
     124,   11,   11,   11, 0x08,
     150,   11,   11,   11, 0x08,
     177,   11,   11,   11, 0x08,
     206,   11,   11,   11, 0x08,
     234,   11,   11,   11, 0x08,
     261,   11,   11,   11, 0x08,
     287,   11,   11,   11, 0x08,
     316,   11,   11,   11, 0x08,
     342,   11,   11,   11, 0x08,
     373,   11,   11,   11, 0x08,
     402,   11,   11,   11, 0x08,
     432,   11,   11,   11, 0x08,
     465,   11,   11,   11, 0x08,
     498,   11,   11,   11, 0x08,
     524,   11,   11,   11, 0x08,
     552,   11,   11,   11, 0x08,
     585,   11,   11,   11, 0x08,
     622,   11,   11,   11, 0x08,
     650,   11,   11,   11, 0x08,
     684,   11,   11,   11, 0x08,
     716,   11,   11,   11, 0x08,
     747,   11,   11,   11, 0x08,
     777,   11,   11,   11, 0x08,
     809,   11,   11,   11, 0x08,
     844,   11,   11,   11, 0x08,
     874,   11,   11,   11, 0x08,
     912,   11,   11,   11, 0x08,
     951,   11,   11,   11, 0x08,
     988,  982,   11,   11, 0x08,
    1023,  982, 1018,   11, 0x08,
    1064, 1056,   11,   11, 0x08,
    1095, 1092,   11,   11, 0x08,
    1147, 1140,   11,   11, 0x08,
    1182,   11,   11,   11, 0x08,
    1197,   11,   11,   11, 0x08,
    1227, 1213,   11,   11, 0x08,
    1295, 1288,   11,   11, 0x08,
    1357, 1341,   11,   11, 0x08,
    1407,   11,   11,   11, 0x08,
    1433, 1419,   11,   11, 0x08,
    1492, 1470,   11,   11, 0x08,
    1557, 1550,   11,   11, 0x08,
    1588, 1582,   11,   11, 0x08,
    1622,   11,   11,   11, 0x08,
    1639,   11,   11,   11, 0x08,
    1650,   11,   11,   11, 0x08,
    1665,   11,   11,   11, 0x08,
    1697, 1690,   11,   11, 0x08,
    1720, 1690,   11,   11, 0x08,
    1745, 1690,   11,   11, 0x08,
    1770, 1690,   11,   11, 0x08,
    1797, 1690,   11,   11, 0x08,
    1822, 1690,   11,   11, 0x08,
    1851,   11,   11,   11, 0x08,
    1892, 1870,   11,   11, 0x08,
    1943, 1928,   11,   11, 0x28,
    1984, 1975,   11,   11, 0x28,
    2019, 2012,   11,   11, 0x28,
    2048, 2043,   11,   11, 0x28,
    2068,   11,   11,   11, 0x08,
    2093, 2089,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0updateView()\0"
    "on_actionRenderSettings_triggered()\0"
    "on_actionPreviewSettings_triggered()\0"
    "on_actionOpen_triggered()\0"
    "on_actionExit_triggered()\0"
    "on_actionAbout_triggered()\0"
    "on_actionRefresh_triggered()\0"
    "on_actionRender_triggered()\0"
    "on_actionClose_triggered()\0"
    "on_actionStop_triggered()\0"
    "on_actionMagnify_triggered()\0"
    "on_actionCrop_triggered()\0"
    "on_actionResetView_triggered()\0"
    "on_actionShowLog_triggered()\0"
    "on_actionSettings_triggered()\0"
    "on_actionUpdateCheck_triggered()\0"
    "on_actionStartServer_triggered()\0"
    "on_actionSave_triggered()\0"
    "on_actionSaveAs_triggered()\0"
    "on_actionExportImage_triggered()\0"
    "on_actionReferenceManual_triggered()\0"
    "on_actionImport_triggered()\0"
    "on_actionDuplicateTab_triggered()\0"
    "on_actionAdjustSize_triggered()\0"
    "on_actionReportBug_triggered()\0"
    "on_actionFeedback_triggered()\0"
    "on_actionShowKDTree_triggered()\0"
    "on_actionFocusSelected_triggered()\0"
    "on_actionFocusAll_triggered()\0"
    "on_actionSceneDescription_triggered()\0"
    "on_actionEnableCommandLine_triggered()\0"
    "on_actionCopyImage_triggered()\0index\0"
    "on_tabBar_currentChanged(int)\0bool\0"
    "on_tabBar_tabCloseRequested(int)\0"
    "from,to\0on_tabBar_tabMoved(int,int)\0"
    "pt\0on_tabBar_customContextMenuRequested(QPoint)\0"
    "string\0on_glView_loadFileRequest(QString)\0"
    "onOpenRecent()\0onClearRecent()\0"
    "job,wu,worker\0"
    "onWorkBegin(const RenderJob*,const RectangularWorkUnit*,int)\0"
    "job,wr\0onWorkEnd(const RenderJob*,const ImageBlock*)\0"
    "job,offset,size\0"
    "onWorkCanceled(const RenderJob*,Point2i,Vector2i)\0"
    "onRefresh()\0job,cancelled\0"
    "onJobFinished(const RenderJob*,bool)\0"
    "job,name,progress,eta\0"
    "onProgressMessage(const RenderJob*,QString,float,QString)\0"
    "status\0onStatusMessage(QString)\0reply\0"
    "onNetworkFinished(QNetworkReply*)\0"
    "onServerClosed()\0updateUI()\0updateStatus()\0"
    "onPreviewSettingsClose()\0reason\0"
    "onOpenDialogClose(int)\0onExportDialogClose(int)\0"
    "onSaveAsDialogClose(int)\0"
    "onRenderSettingsClose(int)\0"
    "onImportDialogClose(int)\0"
    "onSceneInformationClose(int)\0"
    "onActivateCamera()\0type,x,y,width,height\0"
    "on_glView_crop(int,int,int,int,int)\0"
    "type,x,y,width\0on_glView_crop(int,int,int,int)\0"
    "type,x,y\0on_glView_crop(int,int,int)\0"
    "type,x\0on_glView_crop(int,int)\0type\0"
    "on_glView_crop(int)\0onSelectionChanged()\0"
    "rel\0onSwitchTab(int)\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->updateView(); break;
        case 1: _t->on_actionRenderSettings_triggered(); break;
        case 2: _t->on_actionPreviewSettings_triggered(); break;
        case 3: _t->on_actionOpen_triggered(); break;
        case 4: _t->on_actionExit_triggered(); break;
        case 5: _t->on_actionAbout_triggered(); break;
        case 6: _t->on_actionRefresh_triggered(); break;
        case 7: _t->on_actionRender_triggered(); break;
        case 8: _t->on_actionClose_triggered(); break;
        case 9: _t->on_actionStop_triggered(); break;
        case 10: _t->on_actionMagnify_triggered(); break;
        case 11: _t->on_actionCrop_triggered(); break;
        case 12: _t->on_actionResetView_triggered(); break;
        case 13: _t->on_actionShowLog_triggered(); break;
        case 14: _t->on_actionSettings_triggered(); break;
        case 15: _t->on_actionUpdateCheck_triggered(); break;
        case 16: _t->on_actionStartServer_triggered(); break;
        case 17: _t->on_actionSave_triggered(); break;
        case 18: _t->on_actionSaveAs_triggered(); break;
        case 19: _t->on_actionExportImage_triggered(); break;
        case 20: _t->on_actionReferenceManual_triggered(); break;
        case 21: _t->on_actionImport_triggered(); break;
        case 22: _t->on_actionDuplicateTab_triggered(); break;
        case 23: _t->on_actionAdjustSize_triggered(); break;
        case 24: _t->on_actionReportBug_triggered(); break;
        case 25: _t->on_actionFeedback_triggered(); break;
        case 26: _t->on_actionShowKDTree_triggered(); break;
        case 27: _t->on_actionFocusSelected_triggered(); break;
        case 28: _t->on_actionFocusAll_triggered(); break;
        case 29: _t->on_actionSceneDescription_triggered(); break;
        case 30: _t->on_actionEnableCommandLine_triggered(); break;
        case 31: _t->on_actionCopyImage_triggered(); break;
        case 32: _t->on_tabBar_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 33: { bool _r = _t->on_tabBar_tabCloseRequested((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 34: _t->on_tabBar_tabMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 35: _t->on_tabBar_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 36: _t->on_glView_loadFileRequest((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 37: _t->onOpenRecent(); break;
        case 38: _t->onClearRecent(); break;
        case 39: _t->onWorkBegin((*reinterpret_cast< const RenderJob*(*)>(_a[1])),(*reinterpret_cast< const RectangularWorkUnit*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 40: _t->onWorkEnd((*reinterpret_cast< const RenderJob*(*)>(_a[1])),(*reinterpret_cast< const ImageBlock*(*)>(_a[2]))); break;
        case 41: _t->onWorkCanceled((*reinterpret_cast< const RenderJob*(*)>(_a[1])),(*reinterpret_cast< const Point2i(*)>(_a[2])),(*reinterpret_cast< const Vector2i(*)>(_a[3]))); break;
        case 42: _t->onRefresh(); break;
        case 43: _t->onJobFinished((*reinterpret_cast< const RenderJob*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 44: _t->onProgressMessage((*reinterpret_cast< const RenderJob*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 45: _t->onStatusMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 46: _t->onNetworkFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 47: _t->onServerClosed(); break;
        case 48: _t->updateUI(); break;
        case 49: _t->updateStatus(); break;
        case 50: _t->onPreviewSettingsClose(); break;
        case 51: _t->onOpenDialogClose((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 52: _t->onExportDialogClose((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 53: _t->onSaveAsDialogClose((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 54: _t->onRenderSettingsClose((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 55: _t->onImportDialogClose((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 56: _t->onSceneInformationClose((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 57: _t->onActivateCamera(); break;
        case 58: _t->on_glView_crop((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 59: _t->on_glView_crop((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 60: _t->on_glView_crop((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 61: _t->on_glView_crop((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 62: _t->on_glView_crop((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 63: _t->onSelectionChanged(); break;
        case 64: _t->onSwitchTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 65)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 65;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::updateView()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
