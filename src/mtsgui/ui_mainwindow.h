/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QScrollBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>
#include "glwidget.h"
#include "tabbar.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionRender;
    QAction *actionStop;
    QAction *actionRefresh;
    QAction *actionRenderSettings;
    QAction *actionExit;
    QAction *actionAbout;
    QAction *actionSave;
    QAction *actionSaveAs;
    QAction *actionShowLog;
    QAction *actionPreviewSettings;
    QAction *actionImport;
    QAction *actionSettings;
    QAction *actionStartServer;
    QAction *actionUpdateCheck;
    QAction *actionReferenceManual;
    QAction *actionClose;
    QAction *actionExportImage;
    QAction *actionDuplicateTab;
    QAction *actionAdjustSize;
    QAction *actionCopyImage;
    QAction *actionFeedback;
    QAction *actionReportBug;
    QAction *actionShowKDTree;
    QAction *actionSceneDescription;
    QAction *actionEnableCommandLine;
    QAction *actionMagnify;
    QAction *actionCrop;
    QAction *actionResetView;
    QAction *actionFocusSelected;
    QAction *actionFocusAll;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    GLWidget *glView;
    QScrollBar *vScrollBar;
    QScrollBar *hScrollBar;
    CustomTabBar *tabBar;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuOpen_Recent;
    QMenu *menuHelp;
    QMenu *menuTools;
    QMenu *menuView;
    QMenu *menuCamera;
    QMenu *menuDeveloper;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(605, 378);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/appicon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setAutoFillBackground(true);
        MainWindow->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->setAnimated(false);
        MainWindow->setDocumentMode(true);
        MainWindow->setDockNestingEnabled(false);
        MainWindow->setUnifiedTitleAndToolBarOnMac(true);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionOpen->setCheckable(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resources/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionRender = new QAction(MainWindow);
        actionRender->setObjectName(QString::fromUtf8("actionRender"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/resources/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRender->setIcon(icon2);
        actionStop = new QAction(MainWindow);
        actionStop->setObjectName(QString::fromUtf8("actionStop"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/resources/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStop->setIcon(icon3);
        actionRefresh = new QAction(MainWindow);
        actionRefresh->setObjectName(QString::fromUtf8("actionRefresh"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/resources/refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRefresh->setIcon(icon4);
        actionRenderSettings = new QAction(MainWindow);
        actionRenderSettings->setObjectName(QString::fromUtf8("actionRenderSettings"));
        actionRenderSettings->setEnabled(true);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/resources/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRenderSettings->setIcon(icon5);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/resources/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon6);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/resources/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon7);
        actionSaveAs = new QAction(MainWindow);
        actionSaveAs->setObjectName(QString::fromUtf8("actionSaveAs"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/resources/saveas.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveAs->setIcon(icon8);
        actionShowLog = new QAction(MainWindow);
        actionShowLog->setObjectName(QString::fromUtf8("actionShowLog"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/resources/log.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShowLog->setIcon(icon9);
        actionPreviewSettings = new QAction(MainWindow);
        actionPreviewSettings->setObjectName(QString::fromUtf8("actionPreviewSettings"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/resources/preview.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPreviewSettings->setIcon(icon10);
        actionImport = new QAction(MainWindow);
        actionImport->setObjectName(QString::fromUtf8("actionImport"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/resources/import.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionImport->setIcon(icon11);
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName(QString::fromUtf8("actionSettings"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/resources/preferences.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSettings->setIcon(icon12);
        actionStartServer = new QAction(MainWindow);
        actionStartServer->setObjectName(QString::fromUtf8("actionStartServer"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/resources/server.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStartServer->setIcon(icon13);
        actionUpdateCheck = new QAction(MainWindow);
        actionUpdateCheck->setObjectName(QString::fromUtf8("actionUpdateCheck"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/resources/update.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUpdateCheck->setIcon(icon14);
        actionReferenceManual = new QAction(MainWindow);
        actionReferenceManual->setObjectName(QString::fromUtf8("actionReferenceManual"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/resources/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReferenceManual->setIcon(icon15);
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/resources/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClose->setIcon(icon16);
        actionExportImage = new QAction(MainWindow);
        actionExportImage->setObjectName(QString::fromUtf8("actionExportImage"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/resources/picture.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExportImage->setIcon(icon17);
        actionDuplicateTab = new QAction(MainWindow);
        actionDuplicateTab->setObjectName(QString::fromUtf8("actionDuplicateTab"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/resources/duplicatetab.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDuplicateTab->setIcon(icon18);
        actionAdjustSize = new QAction(MainWindow);
        actionAdjustSize->setObjectName(QString::fromUtf8("actionAdjustSize"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/resources/adjustsize.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdjustSize->setIcon(icon19);
        actionCopyImage = new QAction(MainWindow);
        actionCopyImage->setObjectName(QString::fromUtf8("actionCopyImage"));
        actionFeedback = new QAction(MainWindow);
        actionFeedback->setObjectName(QString::fromUtf8("actionFeedback"));
        actionReportBug = new QAction(MainWindow);
        actionReportBug->setObjectName(QString::fromUtf8("actionReportBug"));
        actionShowKDTree = new QAction(MainWindow);
        actionShowKDTree->setObjectName(QString::fromUtf8("actionShowKDTree"));
        actionShowKDTree->setCheckable(true);
        actionSceneDescription = new QAction(MainWindow);
        actionSceneDescription->setObjectName(QString::fromUtf8("actionSceneDescription"));
        actionEnableCommandLine = new QAction(MainWindow);
        actionEnableCommandLine->setObjectName(QString::fromUtf8("actionEnableCommandLine"));
        actionMagnify = new QAction(MainWindow);
        actionMagnify->setObjectName(QString::fromUtf8("actionMagnify"));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/resources/zoomcrop.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMagnify->setIcon(icon20);
        actionCrop = new QAction(MainWindow);
        actionCrop->setObjectName(QString::fromUtf8("actionCrop"));
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/resources/crop.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCrop->setIcon(icon21);
        actionResetView = new QAction(MainWindow);
        actionResetView->setObjectName(QString::fromUtf8("actionResetView"));
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/resources/zoom-reset.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionResetView->setIcon(icon22);
        actionFocusSelected = new QAction(MainWindow);
        actionFocusSelected->setObjectName(QString::fromUtf8("actionFocusSelected"));
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/resources/zoom.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFocusSelected->setIcon(icon23);
        actionFocusAll = new QAction(MainWindow);
        actionFocusAll->setObjectName(QString::fromUtf8("actionFocusAll"));
        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/resources/zoom-best-fit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFocusAll->setIcon(icon24);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        glView = new GLWidget(centralWidget);
        glView->setObjectName(QString::fromUtf8("glView"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(glView->sizePolicy().hasHeightForWidth());
        glView->setSizePolicy(sizePolicy);

        gridLayout->addWidget(glView, 1, 0, 1, 1);

        vScrollBar = new QScrollBar(centralWidget);
        vScrollBar->setObjectName(QString::fromUtf8("vScrollBar"));
        vScrollBar->setSingleStep(25);
        vScrollBar->setOrientation(Qt::Vertical);

        gridLayout->addWidget(vScrollBar, 1, 1, 1, 1);

        hScrollBar = new QScrollBar(centralWidget);
        hScrollBar->setObjectName(QString::fromUtf8("hScrollBar"));
        hScrollBar->setEnabled(true);
        hScrollBar->setSingleStep(25);
        hScrollBar->setTracking(true);
        hScrollBar->setOrientation(Qt::Horizontal);
        hScrollBar->setInvertedAppearance(false);
        hScrollBar->setInvertedControls(true);

        gridLayout->addWidget(hScrollBar, 2, 0, 1, 1);

        tabBar = new CustomTabBar(centralWidget);
        tabBar->setObjectName(QString::fromUtf8("tabBar"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabBar->sizePolicy().hasHeightForWidth());
        tabBar->setSizePolicy(sizePolicy1);
        tabBar->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(tabBar, 0, 0, 1, 2);

        gridLayout->setRowStretch(1, 1);
        gridLayout->setColumnStretch(0, 1);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 605, 26));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuOpen_Recent = new QMenu(menuFile);
        menuOpen_Recent->setObjectName(QString::fromUtf8("menuOpen_Recent"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuHelp->setSeparatorsCollapsible(true);
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuCamera = new QMenu(menuView);
        menuCamera->setObjectName(QString::fromUtf8("menuCamera"));
        QIcon icon25;
        icon25.addFile(QString::fromUtf8(":/resources/camera.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuCamera->setIcon(icon25);
        menuDeveloper = new QMenu(menuView);
        menuDeveloper->setObjectName(QString::fromUtf8("menuDeveloper"));
        QIcon icon26;
        icon26.addFile(QString::fromUtf8(":/resources/devel.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuDeveloper->setIcon(icon26);
        MainWindow->setMenuBar(menuBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setEnabled(true);
        sizePolicy.setHeightForWidth(toolBar->sizePolicy().hasHeightForWidth());
        toolBar->setSizePolicy(sizePolicy);
        toolBar->setCursor(QCursor(Qt::ArrowCursor));
        toolBar->setMovable(false);
        toolBar->setAllowedAreas(Qt::TopToolBarArea);
        toolBar->setIconSize(QSize(32, 32));
        toolBar->setToolButtonStyle(Qt::ToolButtonIconOnly);
        toolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(menuOpen_Recent->menuAction());
        menuFile->addAction(actionImport);
        menuFile->addSeparator();
        menuFile->addAction(actionRefresh);
        menuFile->addAction(actionAdjustSize);
        menuFile->addAction(actionDuplicateTab);
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSaveAs);
        menuFile->addAction(actionCopyImage);
        menuFile->addAction(actionExportImage);
        menuFile->addSeparator();
        menuFile->addAction(actionClose);
        menuFile->addAction(actionExit);
        menuHelp->addAction(actionReferenceManual);
        menuHelp->addSeparator();
        menuHelp->addAction(actionFeedback);
        menuHelp->addAction(actionReportBug);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout);
        menuTools->addAction(actionUpdateCheck);
        menuTools->addAction(actionStartServer);
        menuTools->addSeparator();
        menuTools->addAction(actionSettings);
        menuTools->addAction(actionEnableCommandLine);
        menuView->addAction(menuCamera->menuAction());
        menuView->addSeparator();
        menuView->addAction(actionCrop);
        menuView->addAction(actionMagnify);
        menuView->addAction(actionResetView);
        menuView->addSeparator();
        menuView->addAction(actionFocusSelected);
        menuView->addAction(actionFocusAll);
        menuView->addSeparator();
        menuView->addAction(menuDeveloper->menuAction());
        menuDeveloper->addAction(actionShowKDTree);
        menuDeveloper->addAction(actionSceneDescription);
        toolBar->addAction(actionRender);
        toolBar->addAction(actionStop);
        toolBar->addAction(actionRefresh);
        toolBar->addSeparator();
        toolBar->addAction(actionRenderSettings);
        toolBar->addAction(actionPreviewSettings);
        toolBar->addAction(actionShowLog);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Mitsuba renderer", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("MainWindow", "&Open ..", 0, QApplication::UnicodeUTF8));
        actionOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0, QApplication::UnicodeUTF8));
        actionRender->setText(QApplication::translate("MainWindow", "Render", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionRender->setToolTip(QApplication::translate("MainWindow", "Start rendering", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionStop->setText(QApplication::translate("MainWindow", "Stop", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionStop->setToolTip(QApplication::translate("MainWindow", "Stop rendering (and return to preview mode)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionRefresh->setText(QApplication::translate("MainWindow", "&Refresh", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionRefresh->setToolTip(QApplication::translate("MainWindow", "Reload the scene file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionRefresh->setShortcut(QApplication::translate("MainWindow", "Ctrl+R", 0, QApplication::UnicodeUTF8));
        actionRenderSettings->setText(QApplication::translate("MainWindow", "Tweak", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionRenderSettings->setToolTip(QApplication::translate("MainWindow", "Change rendering-related settings ..", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionExit->setText(QApplication::translate("MainWindow", "E&xit", 0, QApplication::UnicodeUTF8));
        actionExit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindow", "&About Mitsuba", 0, QApplication::UnicodeUTF8));
        actionSave->setText(QApplication::translate("MainWindow", "&Save", 0, QApplication::UnicodeUTF8));
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        actionSaveAs->setText(QApplication::translate("MainWindow", "Save &As ..", 0, QApplication::UnicodeUTF8));
        actionSaveAs->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+S", 0, QApplication::UnicodeUTF8));
        actionShowLog->setText(QApplication::translate("MainWindow", "Show Log", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionShowLog->setToolTip(QApplication::translate("MainWindow", "Show the program log", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionPreviewSettings->setText(QApplication::translate("MainWindow", "Adjust Preview", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPreviewSettings->setToolTip(QApplication::translate("MainWindow", "Configure the realtime preview", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionImport->setText(QApplication::translate("MainWindow", "&Import ..", 0, QApplication::UnicodeUTF8));
        actionSettings->setText(QApplication::translate("MainWindow", "&Settings ..", 0, QApplication::UnicodeUTF8));
        actionStartServer->setText(QApplication::translate("MainWindow", "S&tart Server ..", 0, QApplication::UnicodeUTF8));
        actionUpdateCheck->setText(QApplication::translate("MainWindow", "Check for &Updates ..", 0, QApplication::UnicodeUTF8));
        actionReferenceManual->setText(QApplication::translate("MainWindow", "&Reference Manual", 0, QApplication::UnicodeUTF8));
        actionReferenceManual->setShortcut(QApplication::translate("MainWindow", "F1", 0, QApplication::UnicodeUTF8));
        actionClose->setText(QApplication::translate("MainWindow", "&Close Tab", 0, QApplication::UnicodeUTF8));
        actionClose->setShortcut(QApplication::translate("MainWindow", "Ctrl+W", 0, QApplication::UnicodeUTF8));
        actionExportImage->setText(QApplication::translate("MainWindow", "Ex&port Image ..", 0, QApplication::UnicodeUTF8));
        actionExportImage->setShortcut(QApplication::translate("MainWindow", "Ctrl+E", 0, QApplication::UnicodeUTF8));
        actionDuplicateTab->setText(QApplication::translate("MainWindow", "&Duplicate Tab", 0, QApplication::UnicodeUTF8));
        actionDuplicateTab->setShortcut(QApplication::translate("MainWindow", "Ctrl+D", 0, QApplication::UnicodeUTF8));
        actionAdjustSize->setText(QApplication::translate("MainWindow", "Resize to &Fit", 0, QApplication::UnicodeUTF8));
        actionAdjustSize->setShortcut(QApplication::translate("MainWindow", "Ctrl+F", 0, QApplication::UnicodeUTF8));
        actionCopyImage->setText(QApplication::translate("MainWindow", "&Copy image", 0, QApplication::UnicodeUTF8));
        actionCopyImage->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", 0, QApplication::UnicodeUTF8));
        actionFeedback->setText(QApplication::translate("MainWindow", "Report &Feedback", 0, QApplication::UnicodeUTF8));
        actionReportBug->setText(QApplication::translate("MainWindow", "Report a &Bug", 0, QApplication::UnicodeUTF8));
        actionShowKDTree->setText(QApplication::translate("MainWindow", "Visualize kd-Tree", 0, QApplication::UnicodeUTF8));
        actionSceneDescription->setText(QApplication::translate("MainWindow", "Scene information ..", 0, QApplication::UnicodeUTF8));
        actionEnableCommandLine->setText(QApplication::translate("MainWindow", "Command-line access", 0, QApplication::UnicodeUTF8));
        actionMagnify->setText(QApplication::translate("MainWindow", "Crop and &Magnify", 0, QApplication::UnicodeUTF8));
        actionMagnify->setShortcut(QApplication::translate("MainWindow", "M", 0, QApplication::UnicodeUTF8));
        actionCrop->setText(QApplication::translate("MainWindow", "&Crop", 0, QApplication::UnicodeUTF8));
        actionCrop->setShortcut(QApplication::translate("MainWindow", "C", 0, QApplication::UnicodeUTF8));
        actionResetView->setText(QApplication::translate("MainWindow", "&Reset", 0, QApplication::UnicodeUTF8));
        actionResetView->setShortcut(QApplication::translate("MainWindow", "Ctrl+T", 0, QApplication::UnicodeUTF8));
        actionFocusSelected->setText(QApplication::translate("MainWindow", "&Focus Selection", 0, QApplication::UnicodeUTF8));
        actionFocusSelected->setShortcut(QApplication::translate("MainWindow", "F", 0, QApplication::UnicodeUTF8));
        actionFocusAll->setText(QApplication::translate("MainWindow", "Focus &All", 0, QApplication::UnicodeUTF8));
        actionFocusAll->setShortcut(QApplication::translate("MainWindow", "A", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "&File", 0, QApplication::UnicodeUTF8));
        menuOpen_Recent->setTitle(QApplication::translate("MainWindow", "Open Recent", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("MainWindow", "&Help", 0, QApplication::UnicodeUTF8));
        menuTools->setTitle(QApplication::translate("MainWindow", "&Tools", 0, QApplication::UnicodeUTF8));
        menuView->setTitle(QApplication::translate("MainWindow", "View", 0, QApplication::UnicodeUTF8));
        menuCamera->setTitle(QApplication::translate("MainWindow", "Set Camera", 0, QApplication::UnicodeUTF8));
        menuDeveloper->setTitle(QApplication::translate("MainWindow", "Developer", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
