/********************************************************************************
** Form generated from reading UI file 'programsettingsdlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROGRAMSETTINGSDLG_H
#define UI_PROGRAMSETTINGSDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProgramSettingsDialog
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QTabWidget *tabWidget;
    QWidget *tab1;
    QGridLayout *gridLayout1;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QComboBox *blockSizeBox;
    QLabel *label_2;
    QSpinBox *localWorkerBox;
    QLabel *label_3;
    QHBoxLayout *buttonsLayout1;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *removePathButton;
    QPushButton *addPathButton;
    QLabel *label_11;
    QListWidget *searchPathList;
    QCheckBox *checkForUpdatesBox;
    QLabel *label_7;
    QSlider *sensitivitySlider;
    QLabel *label_8;
    QLabel *label_12;
    QCheckBox *invertMouseBox;
    QLabel *label_15;
    QComboBox *navigationModeBox;
    QComboBox *logVerbosityBox;
    QLabel *label_5;
    QLabel *label_16;
    QComboBox *workerPriorityBox;
    QWidget *tab2;
    QGridLayout *gridLayout2;
    QLabel *label_4;
    QLabel *label_13;
    QLineEdit *nodeName;
    QLabel *label_9;
    QListWidget *connectionList;
    QHBoxLayout *buttonsLayout2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *removeConnectionButton;
    QPushButton *addConnectionButton;
    QLabel *label_6;
    QLabel *statsLabel1;
    QLabel *statsLabel2;
    QLineEdit *listenPort;
    QLabel *label_14;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QDialog *ProgramSettingsDialog)
    {
        if (ProgramSettingsDialog->objectName().isEmpty())
            ProgramSettingsDialog->setObjectName(QString::fromUtf8("ProgramSettingsDialog"));
        ProgramSettingsDialog->resize(378, 533);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ProgramSettingsDialog->sizePolicy().hasHeightForWidth());
        ProgramSettingsDialog->setSizePolicy(sizePolicy);
        ProgramSettingsDialog->setMaximumSize(QSize(16777215, 16777215));
        gridLayout = new QGridLayout(ProgramSettingsDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        buttonBox = new QDialogButtonBox(ProgramSettingsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 13, 0, 1, 1);

        tabWidget = new QTabWidget(ProgramSettingsDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        tab1 = new QWidget();
        tab1->setObjectName(QString::fromUtf8("tab1"));
        gridLayout1 = new QGridLayout(tab1);
        gridLayout1->setSpacing(6);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout1->setContentsMargins(15, 8, 15, 15);
        label_10 = new QLabel(tab1);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_10->setFont(font);

        gridLayout1->addWidget(label_10, 0, 0, 1, 3);

        horizontalSpacer = new QSpacerItem(10, 24, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout1->addItem(horizontalSpacer, 1, 0, 1, 1);

        label = new QLabel(tab1);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout1->addWidget(label, 1, 1, 1, 1);

        blockSizeBox = new QComboBox(tab1);
        blockSizeBox->setObjectName(QString::fromUtf8("blockSizeBox"));

        gridLayout1->addWidget(blockSizeBox, 1, 2, 1, 2);

        label_2 = new QLabel(tab1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout1->addWidget(label_2, 2, 1, 1, 1);

        localWorkerBox = new QSpinBox(tab1);
        localWorkerBox->setObjectName(QString::fromUtf8("localWorkerBox"));
        localWorkerBox->setValue(2);

        gridLayout1->addWidget(localWorkerBox, 2, 2, 1, 2);

        label_3 = new QLabel(tab1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout1->addWidget(label_3, 14, 0, 1, 4);

        buttonsLayout1 = new QHBoxLayout();
        buttonsLayout1->setSpacing(6);
        buttonsLayout1->setObjectName(QString::fromUtf8("buttonsLayout1"));
        horizontalSpacer_2 = new QSpacerItem(118, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonsLayout1->addItem(horizontalSpacer_2);

        removePathButton = new QPushButton(tab1);
        removePathButton->setObjectName(QString::fromUtf8("removePathButton"));
        removePathButton->setEnabled(false);
        removePathButton->setMaximumSize(QSize(40, 16777215));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        removePathButton->setIcon(icon);
        removePathButton->setIconSize(QSize(16, 16));
        removePathButton->setAutoDefault(false);

        buttonsLayout1->addWidget(removePathButton);

        addPathButton = new QPushButton(tab1);
        addPathButton->setObjectName(QString::fromUtf8("addPathButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(addPathButton->sizePolicy().hasHeightForWidth());
        addPathButton->setSizePolicy(sizePolicy2);
        addPathButton->setMaximumSize(QSize(40, 16777215));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resources/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        addPathButton->setIcon(icon1);
        addPathButton->setIconSize(QSize(16, 16));
        addPathButton->setAutoDefault(false);

        buttonsLayout1->addWidget(addPathButton);


        gridLayout1->addLayout(buttonsLayout1, 16, 1, 1, 3);

        label_11 = new QLabel(tab1);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font);

        gridLayout1->addWidget(label_11, 4, 0, 1, 3);

        searchPathList = new QListWidget(tab1);
        searchPathList->setObjectName(QString::fromUtf8("searchPathList"));
        searchPathList->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Ignored);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(searchPathList->sizePolicy().hasHeightForWidth());
        searchPathList->setSizePolicy(sizePolicy3);
        searchPathList->setMinimumSize(QSize(70, 70));
        searchPathList->setMaximumSize(QSize(16777215, 16777215));
        searchPathList->setFrameShadow(QFrame::Sunken);
        searchPathList->setResizeMode(QListView::Adjust);

        gridLayout1->addWidget(searchPathList, 15, 1, 1, 3);

        checkForUpdatesBox = new QCheckBox(tab1);
        checkForUpdatesBox->setObjectName(QString::fromUtf8("checkForUpdatesBox"));
        checkForUpdatesBox->setEnabled(true);
        checkForUpdatesBox->setAutoFillBackground(false);
        checkForUpdatesBox->setChecked(true);
        checkForUpdatesBox->setTristate(false);

        gridLayout1->addWidget(checkForUpdatesBox, 6, 2, 1, 1);

        label_7 = new QLabel(tab1);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout1->addWidget(label_7, 6, 1, 1, 1);

        sensitivitySlider = new QSlider(tab1);
        sensitivitySlider->setObjectName(QString::fromUtf8("sensitivitySlider"));
        sensitivitySlider->setMinimum(1);
        sensitivitySlider->setMaximum(10);
        sensitivitySlider->setSingleStep(1);
        sensitivitySlider->setPageStep(1);
        sensitivitySlider->setValue(3);
        sensitivitySlider->setSliderPosition(3);
        sensitivitySlider->setOrientation(Qt::Horizontal);
        sensitivitySlider->setTickPosition(QSlider::TicksAbove);
        sensitivitySlider->setTickInterval(1);

        gridLayout1->addWidget(sensitivitySlider, 11, 2, 1, 2);

        label_8 = new QLabel(tab1);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout1->addWidget(label_8, 11, 1, 1, 1);

        label_12 = new QLabel(tab1);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout1->addWidget(label_12, 9, 1, 1, 1);

        invertMouseBox = new QCheckBox(tab1);
        invertMouseBox->setObjectName(QString::fromUtf8("invertMouseBox"));
        invertMouseBox->setAutoFillBackground(false);
        invertMouseBox->setTristate(false);

        gridLayout1->addWidget(invertMouseBox, 9, 2, 1, 1);

        label_15 = new QLabel(tab1);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout1->addWidget(label_15, 8, 1, 1, 1);

        navigationModeBox = new QComboBox(tab1);
        navigationModeBox->setObjectName(QString::fromUtf8("navigationModeBox"));

        gridLayout1->addWidget(navigationModeBox, 8, 2, 1, 2);

        logVerbosityBox = new QComboBox(tab1);
        logVerbosityBox->setObjectName(QString::fromUtf8("logVerbosityBox"));

        gridLayout1->addWidget(logVerbosityBox, 7, 2, 1, 2);

        label_5 = new QLabel(tab1);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout1->addWidget(label_5, 7, 1, 1, 1);

        label_16 = new QLabel(tab1);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout1->addWidget(label_16, 3, 1, 1, 1);

        workerPriorityBox = new QComboBox(tab1);
        workerPriorityBox->setObjectName(QString::fromUtf8("workerPriorityBox"));

        gridLayout1->addWidget(workerPriorityBox, 3, 2, 1, 2);

        gridLayout1->setColumnStretch(3, 1);
        tabWidget->addTab(tab1, QString());
        tab2 = new QWidget();
        tab2->setObjectName(QString::fromUtf8("tab2"));
        gridLayout2 = new QGridLayout(tab2);
        gridLayout2->setSpacing(6);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        gridLayout2->setContentsMargins(15, 8, 15, 15);
        label_4 = new QLabel(tab2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout2->addWidget(label_4, 0, 0, 1, 3);

        label_13 = new QLabel(tab2);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout2->addWidget(label_13, 1, 1, 1, 1);

        nodeName = new QLineEdit(tab2);
        nodeName->setObjectName(QString::fromUtf8("nodeName"));

        gridLayout2->addWidget(nodeName, 1, 2, 1, 1);

        label_9 = new QLabel(tab2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);

        gridLayout2->addWidget(label_9, 4, 0, 1, 3);

        connectionList = new QListWidget(tab2);
        connectionList->setObjectName(QString::fromUtf8("connectionList"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Ignored);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(connectionList->sizePolicy().hasHeightForWidth());
        connectionList->setSizePolicy(sizePolicy4);
        connectionList->setMinimumSize(QSize(70, 70));

        gridLayout2->addWidget(connectionList, 5, 1, 1, 2);

        buttonsLayout2 = new QHBoxLayout();
        buttonsLayout2->setObjectName(QString::fromUtf8("buttonsLayout2"));
        horizontalSpacer_4 = new QSpacerItem(118, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonsLayout2->addItem(horizontalSpacer_4);

        removeConnectionButton = new QPushButton(tab2);
        removeConnectionButton->setObjectName(QString::fromUtf8("removeConnectionButton"));
        removeConnectionButton->setEnabled(false);
        removeConnectionButton->setMaximumSize(QSize(40, 16777215));
        removeConnectionButton->setIcon(icon);
        removeConnectionButton->setIconSize(QSize(16, 16));
        removeConnectionButton->setAutoDefault(false);

        buttonsLayout2->addWidget(removeConnectionButton);

        addConnectionButton = new QPushButton(tab2);
        addConnectionButton->setObjectName(QString::fromUtf8("addConnectionButton"));
        addConnectionButton->setEnabled(true);
        addConnectionButton->setMaximumSize(QSize(40, 16777215));
        addConnectionButton->setIcon(icon1);
        addConnectionButton->setIconSize(QSize(16, 16));
        addConnectionButton->setAutoDefault(false);

        buttonsLayout2->addWidget(addConnectionButton);


        gridLayout2->addLayout(buttonsLayout2, 6, 1, 1, 2);

        label_6 = new QLabel(tab2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        gridLayout2->addWidget(label_6, 7, 0, 1, 3);

        statsLabel1 = new QLabel(tab2);
        statsLabel1->setObjectName(QString::fromUtf8("statsLabel1"));

        gridLayout2->addWidget(statsLabel1, 8, 1, 1, 2);

        statsLabel2 = new QLabel(tab2);
        statsLabel2->setObjectName(QString::fromUtf8("statsLabel2"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(statsLabel2->sizePolicy().hasHeightForWidth());
        statsLabel2->setSizePolicy(sizePolicy5);
        statsLabel2->setMinimumSize(QSize(0, 0));

        gridLayout2->addWidget(statsLabel2, 9, 1, 1, 2);

        listenPort = new QLineEdit(tab2);
        listenPort->setObjectName(QString::fromUtf8("listenPort"));

        gridLayout2->addWidget(listenPort, 2, 2, 1, 1);

        label_14 = new QLabel(tab2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout2->addWidget(label_14, 2, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(10, 0, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout2->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        gridLayout2->setRowStretch(5, 1);
        gridLayout2->setColumnStretch(2, 1);
        tabWidget->addTab(tab2, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(blockSizeBox);
        label_2->setBuddy(localWorkerBox);
        label_12->setBuddy(invertMouseBox);
        label_15->setBuddy(navigationModeBox);
        label_5->setBuddy(logVerbosityBox);
        label_13->setBuddy(nodeName);
        label_14->setBuddy(listenPort);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(blockSizeBox, localWorkerBox);
        QWidget::setTabOrder(localWorkerBox, checkForUpdatesBox);
        QWidget::setTabOrder(checkForUpdatesBox, logVerbosityBox);
        QWidget::setTabOrder(logVerbosityBox, navigationModeBox);
        QWidget::setTabOrder(navigationModeBox, invertMouseBox);
        QWidget::setTabOrder(invertMouseBox, sensitivitySlider);
        QWidget::setTabOrder(sensitivitySlider, searchPathList);
        QWidget::setTabOrder(searchPathList, removePathButton);
        QWidget::setTabOrder(removePathButton, addPathButton);
        QWidget::setTabOrder(addPathButton, buttonBox);
        QWidget::setTabOrder(buttonBox, nodeName);
        QWidget::setTabOrder(nodeName, listenPort);
        QWidget::setTabOrder(listenPort, connectionList);
        QWidget::setTabOrder(connectionList, removeConnectionButton);
        QWidget::setTabOrder(removeConnectionButton, addConnectionButton);
        QWidget::setTabOrder(addConnectionButton, tabWidget);

        retranslateUi(ProgramSettingsDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), ProgramSettingsDialog, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), ProgramSettingsDialog, SLOT(accept()));
        QObject::connect(localWorkerBox, SIGNAL(valueChanged(int)), ProgramSettingsDialog, SLOT(refresh()));
        QObject::connect(listenPort, SIGNAL(textChanged(QString)), ProgramSettingsDialog, SLOT(refresh()));
        QObject::connect(nodeName, SIGNAL(textEdited(QString)), ProgramSettingsDialog, SLOT(refresh()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ProgramSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *ProgramSettingsDialog)
    {
        ProgramSettingsDialog->setWindowTitle(QApplication::translate("ProgramSettingsDialog", "Settings", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("ProgramSettingsDialog", "Rendering", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("ProgramSettingsDialog", "Specify the block resolution used to split images into \n"
"parallel workloads (default: 32x32). If chosen too small, \n"
"excessive block management may slow down the rendering.\n"
"Only applies to some integrators. ", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("ProgramSettingsDialog", "Block size: ", 0, QApplication::UnicodeUTF8));
        blockSizeBox->clear();
        blockSizeBox->insertItems(0, QStringList()
         << QApplication::translate("ProgramSettingsDialog", "2x2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ProgramSettingsDialog", "4x4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ProgramSettingsDialog", "8x8", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ProgramSettingsDialog", "16x16", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ProgramSettingsDialog", "32x32", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ProgramSettingsDialog", "64x64", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ProgramSettingsDialog", "128x128", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        blockSizeBox->setToolTip(QApplication::translate("ProgramSettingsDialog", "Specify the block resolution used to split images into \n"
"parallel workloads (default: 32x32). If chosen too small, \n"
"excessive block management may slow down the rendering.\n"
"Only applies to some integrators. ", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label_2->setToolTip(QApplication::translate("ProgramSettingsDialog", "Specifies the number of local worker threads. The default is to use\n"
"all local cores (including virtual cores on Hyper-threading-enabled \n"
"machines). Setting this value lower can be useful to reduce the \n"
"system load, especially when much of the work is done over the network.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("ProgramSettingsDialog", "Worker threads :", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        localWorkerBox->setToolTip(QApplication::translate("ProgramSettingsDialog", "Specifies the number of local worker threads. The default is to use\n"
"all local cores (including virtual cores on Hyper-threading-enabled \n"
"machines). Setting this value lower can be useful to reduce the \n"
"system load, especially when much of the work is done over the network.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("ProgramSettingsDialog", "Search paths", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        removePathButton->setToolTip(QApplication::translate("ProgramSettingsDialog", "Remove the selected search path", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        removePathButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        addPathButton->setToolTip(QApplication::translate("ProgramSettingsDialog", "Add a search path", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        addPathButton->setText(QString());
        label_11->setText(QApplication::translate("ProgramSettingsDialog", "Other", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        searchPathList->setToolTip(QApplication::translate("ProgramSettingsDialog", "List of additional directories that will be searched\n"
"for resources, such as geometry data, textures, etc.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        checkForUpdatesBox->setToolTip(QApplication::translate("ProgramSettingsDialog", "If active, Mitsuba will try to determine the most recent\n"
"release via Internet every time it is started.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        checkForUpdatesBox->setStyleSheet(QString());
        checkForUpdatesBox->setText(QApplication::translate("ProgramSettingsDialog", "Check at startup", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_7->setToolTip(QApplication::translate("ProgramSettingsDialog", "If active, Mitsuba will try to determine the most recent\n"
"release via Internet every time it is started.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_7->setText(QApplication::translate("ProgramSettingsDialog", "Updates :", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        sensitivitySlider->setToolTip(QApplication::translate("ProgramSettingsDialog", "Specifies how sensitive the mouse should react to \n"
"movements while navigating in the realt-time preview.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label_8->setToolTip(QApplication::translate("ProgramSettingsDialog", "Specifies how sensitive the mouse should react to \n"
"movements while navigating in the realt-time preview.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_8->setText(QApplication::translate("ProgramSettingsDialog", "Sensitivity :", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_12->setToolTip(QApplication::translate("ProgramSettingsDialog", "Should the preview navigation flip the Y axis of the mouse?", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_12->setText(QApplication::translate("ProgramSettingsDialog", "Mouse :", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        invertMouseBox->setToolTip(QApplication::translate("ProgramSettingsDialog", "Should the preview navigation flip the Y axis of the mouse?", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        invertMouseBox->setStyleSheet(QString());
        invertMouseBox->setText(QApplication::translate("ProgramSettingsDialog", "Invert", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_15->setToolTip(QApplication::translate("ProgramSettingsDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">This option specifies the camera behavior when navigating within the realtime preview.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Standard</span>: Rotate around the currently selected object.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin"
                        "-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">First person</span>: A navigation mode that resembles walking through a scene</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_15->setText(QApplication::translate("ProgramSettingsDialog", "Navigation :", 0, QApplication::UnicodeUTF8));
        navigationModeBox->clear();
        navigationModeBox->insertItems(0, QStringList()
         << QApplication::translate("ProgramSettingsDialog", "Standard", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ProgramSettingsDialog", "First Person", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        navigationModeBox->setToolTip(QApplication::translate("ProgramSettingsDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">This option specifies the camera behavior when navigating within the realtime preview.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Standard</span>: Rotate around the currently selected object.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin"
                        "-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">First person</span>: A navigation mode that resembles walking through a scene</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        logVerbosityBox->clear();
        logVerbosityBox->insertItems(0, QStringList()
         << QApplication::translate("ProgramSettingsDialog", "Trace", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ProgramSettingsDialog", "Debug", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ProgramSettingsDialog", "Info", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ProgramSettingsDialog", "Warn", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ProgramSettingsDialog", "Error", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        logVerbosityBox->setToolTip(QApplication::translate("ProgramSettingsDialog", "Specifies the threshold for displaying log messages.\n"
"For instance, setting this to \"Info\" means that everything \n"
"above and including \"Info\" is written to the console.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label_5->setToolTip(QApplication::translate("ProgramSettingsDialog", "Specifies the threshold for displaying log messages.\n"
"For instance, setting this to \"Info\" means that everything \n"
"above and including \"Info\" is written to the console.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("ProgramSettingsDialog", "Log verbosity :", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_16->setToolTip(QApplication::translate("ProgramSettingsDialog", "Thread priority to assign to Mitsuba's rendering threads. \n"
"Setting this to a value below Normal is usually a good idea, \n"
"since it will make the operating system more responsive.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_16->setText(QApplication::translate("ProgramSettingsDialog", "Worker priority :", 0, QApplication::UnicodeUTF8));
        workerPriorityBox->clear();
        workerPriorityBox->insertItems(0, QStringList()
         << QApplication::translate("ProgramSettingsDialog", "Idle", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ProgramSettingsDialog", "Lowest", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ProgramSettingsDialog", "Low", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ProgramSettingsDialog", "Normal", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ProgramSettingsDialog", "High", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ProgramSettingsDialog", "Highest", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        workerPriorityBox->setToolTip(QApplication::translate("ProgramSettingsDialog", "Thread priority to assign to Mitsuba's rendering threads. \n"
"Setting this to a value below Normal is usually a good idea, \n"
"since it will make the operating system more responsive.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(tab1), QApplication::translate("ProgramSettingsDialog", "General", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ProgramSettingsDialog", "Server settings", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_13->setToolTip(QApplication::translate("ProgramSettingsDialog", "When the server feature is used, this field specifies the\n"
"hostname and associated network interface, on which\n"
"to wait for incoming connections.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_13->setText(QApplication::translate("ProgramSettingsDialog", "Listen address :", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        nodeName->setToolTip(QApplication::translate("ProgramSettingsDialog", "When the server feature is used, this field specifies the\n"
"hostname and associated network interface, on which\n"
"to wait for incoming connections.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        nodeName->setText(QApplication::translate("ProgramSettingsDialog", "localhost", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("ProgramSettingsDialog", "Network render nodes", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        removeConnectionButton->setToolTip(QApplication::translate("ProgramSettingsDialog", "Remove a render node", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        removeConnectionButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        addConnectionButton->setToolTip(QApplication::translate("ProgramSettingsDialog", "Add a render node", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        addConnectionButton->setText(QString());
        label_6->setText(QApplication::translate("ProgramSettingsDialog", "Computational resources", 0, QApplication::UnicodeUTF8));
        statsLabel1->setText(QApplication::translate("ProgramSettingsDialog", "Cores attached via network: 0", 0, QApplication::UnicodeUTF8));
        statsLabel2->setText(QApplication::translate("ProgramSettingsDialog", "Total number of attached cores: 0", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        listenPort->setToolTip(QApplication::translate("ProgramSettingsDialog", "When the server feature is used, this number specifies\n"
"the port at which Mitsuba should listen for incoming\n"
"connections. The default setting is 7554.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        listenPort->setText(QApplication::translate("ProgramSettingsDialog", "7554", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_14->setToolTip(QApplication::translate("ProgramSettingsDialog", "When the server feature is used, this number specifies\n"
"the port at which Mitsuba should listen for incoming\n"
"connections. The default setting is 7554.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_14->setText(QApplication::translate("ProgramSettingsDialog", "Listen port :", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab2), QApplication::translate("ProgramSettingsDialog", "Network", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ProgramSettingsDialog: public Ui_ProgramSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROGRAMSETTINGSDLG_H
