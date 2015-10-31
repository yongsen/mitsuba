/********************************************************************************
** Form generated from reading UI file 'updatedlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEDLG_H
#define UI_UPDATEDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_UpdateDialog
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *versionLabel;
    QSpacerItem *verticalSpacer;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *skipButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *remindButton;
    QPushButton *downloadButton;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QTextBrowser *changeView;

    void setupUi(QDialog *UpdateDialog)
    {
        if (UpdateDialog->objectName().isEmpty())
            UpdateDialog->setObjectName(QString::fromUtf8("UpdateDialog"));
        UpdateDialog->resize(532, 327);
        gridLayout = new QGridLayout(UpdateDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(UpdateDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(16777215, 20));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        versionLabel = new QLabel(UpdateDialog);
        versionLabel->setObjectName(QString::fromUtf8("versionLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(versionLabel->sizePolicy().hasHeightForWidth());
        versionLabel->setSizePolicy(sizePolicy);
        versionLabel->setMaximumSize(QSize(16777215, 16777215));
        QFont font1;
        font1.setPointSize(9);
        versionLabel->setFont(font1);
        versionLabel->setWordWrap(true);

        verticalLayout->addWidget(versionLabel);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout->addItem(verticalSpacer);

        label_3 = new QLabel(UpdateDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font2;
        font2.setPointSize(8);
        font2.setBold(true);
        font2.setWeight(75);
        font2.setKerning(true);
        font2.setStyleStrategy(QFont::PreferAntialias);
        label_3->setFont(font2);

        verticalLayout->addWidget(label_3);


        gridLayout->addLayout(verticalLayout, 0, 3, 2, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        skipButton = new QPushButton(UpdateDialog);
        skipButton->setObjectName(QString::fromUtf8("skipButton"));
        skipButton->setAutoDefault(false);

        horizontalLayout->addWidget(skipButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        remindButton = new QPushButton(UpdateDialog);
        remindButton->setObjectName(QString::fromUtf8("remindButton"));
        remindButton->setAutoDefault(false);

        horizontalLayout->addWidget(remindButton);

        downloadButton = new QPushButton(UpdateDialog);
        downloadButton->setObjectName(QString::fromUtf8("downloadButton"));
        downloadButton->setAutoDefault(true);
        downloadButton->setDefault(true);

        horizontalLayout->addWidget(downloadButton);


        gridLayout->addLayout(horizontalLayout, 3, 3, 1, 1);

        label = new QLabel(UpdateDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(64, 64));
        label->setPixmap(QPixmap(QString::fromUtf8(":/resources/appicon.png")));
        label->setScaledContents(true);

        gridLayout->addWidget(label, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(18, 18, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(5, 13, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 0, 1, 1);

        changeView = new QTextBrowser(UpdateDialog);
        changeView->setObjectName(QString::fromUtf8("changeView"));
        changeView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        changeView->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        changeView->setOpenExternalLinks(true);
        changeView->setOpenLinks(false);

        gridLayout->addWidget(changeView, 2, 3, 1, 1);

        QWidget::setTabOrder(downloadButton, remindButton);
        QWidget::setTabOrder(remindButton, skipButton);

        retranslateUi(UpdateDialog);

        QMetaObject::connectSlotsByName(UpdateDialog);
    } // setupUi

    void retranslateUi(QDialog *UpdateDialog)
    {
        UpdateDialog->setWindowTitle(QApplication::translate("UpdateDialog", "Software Update", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("UpdateDialog", "A new version of Mitsuba is available!", 0, QApplication::UnicodeUTF8));
        versionLabel->setText(QApplication::translate("UpdateDialog", "Version 0.1.3 has been released (you are using 0.1.1). Would you like to visit the download page?", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("UpdateDialog", "Release notes:", 0, QApplication::UnicodeUTF8));
        skipButton->setText(QApplication::translate("UpdateDialog", "Skip this version", 0, QApplication::UnicodeUTF8));
        remindButton->setText(QApplication::translate("UpdateDialog", "Remind me again", 0, QApplication::UnicodeUTF8));
        downloadButton->setText(QApplication::translate("UpdateDialog", "Download", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class UpdateDialog: public Ui_UpdateDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEDLG_H
