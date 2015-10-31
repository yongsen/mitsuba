/********************************************************************************
** Form generated from reading UI file 'rendersettingsdlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RENDERSETTINGSDLG_H
#define UI_RENDERSETTINGSDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QTextEdit>
#include <QtGui/QTreeView>

QT_BEGIN_NAMESPACE

class Ui_RenderSettingsDialog
{
public:
    QGridLayout *gridLayout;
    QComboBox *integratorBox;
    QComboBox *samplerBox;
    QComboBox *resolutionBox;
    QComboBox *rFilterBox;
    QCheckBox *icBox;
    QCheckBox *aiBox;
    QTreeView *treeView;
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QTextEdit *helpViewer;
    QLabel *label_5;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_6;

    void setupUi(QDialog *RenderSettingsDialog)
    {
        if (RenderSettingsDialog->objectName().isEmpty())
            RenderSettingsDialog->setObjectName(QString::fromUtf8("RenderSettingsDialog"));
        RenderSettingsDialog->resize(436, 497);
        gridLayout = new QGridLayout(RenderSettingsDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(10, 10, 10, 4);
        integratorBox = new QComboBox(RenderSettingsDialog);
        integratorBox->setObjectName(QString::fromUtf8("integratorBox"));

        gridLayout->addWidget(integratorBox, 0, 1, 1, 2);

        samplerBox = new QComboBox(RenderSettingsDialog);
        samplerBox->setObjectName(QString::fromUtf8("samplerBox"));

        gridLayout->addWidget(samplerBox, 1, 1, 1, 2);

        resolutionBox = new QComboBox(RenderSettingsDialog);
        resolutionBox->setObjectName(QString::fromUtf8("resolutionBox"));
        resolutionBox->setEditable(true);

        gridLayout->addWidget(resolutionBox, 2, 1, 1, 2);

        rFilterBox = new QComboBox(RenderSettingsDialog);
        rFilterBox->setObjectName(QString::fromUtf8("rFilterBox"));

        gridLayout->addWidget(rFilterBox, 3, 1, 1, 2);

        icBox = new QCheckBox(RenderSettingsDialog);
        icBox->setObjectName(QString::fromUtf8("icBox"));

        gridLayout->addWidget(icBox, 4, 1, 1, 1);

        aiBox = new QCheckBox(RenderSettingsDialog);
        aiBox->setObjectName(QString::fromUtf8("aiBox"));

        gridLayout->addWidget(aiBox, 4, 2, 1, 1);

        treeView = new QTreeView(RenderSettingsDialog);
        treeView->setObjectName(QString::fromUtf8("treeView"));

        gridLayout->addWidget(treeView, 5, 0, 1, 3);

        buttonBox = new QDialogButtonBox(RenderSettingsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 7, 0, 1, 3);

        groupBox = new QGroupBox(RenderSettingsDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMaximumSize(QSize(16777215, 171));
        groupBox->setFlat(false);
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setSpacing(4);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        helpViewer = new QTextEdit(groupBox);
        helpViewer->setObjectName(QString::fromUtf8("helpViewer"));
        helpViewer->setEnabled(true);
        helpViewer->setMinimumSize(QSize(0, 60));
        helpViewer->setMaximumSize(QSize(16777215, 122));
        helpViewer->setFrameShape(QFrame::NoFrame);
        helpViewer->setFrameShadow(QFrame::Sunken);
        helpViewer->setReadOnly(true);
        helpViewer->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout_2->addWidget(helpViewer, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox, 6, 0, 1, 3);

        label_5 = new QLabel(RenderSettingsDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        label_2 = new QLabel(RenderSettingsDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(RenderSettingsDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_4 = new QLabel(RenderSettingsDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        label_6 = new QLabel(RenderSettingsDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 3, 0, 1, 1);

        gridLayout->setRowStretch(4, 5);
        gridLayout->setColumnStretch(2, 1);
#ifndef QT_NO_SHORTCUT
        label_5->setBuddy(resolutionBox);
        label_2->setBuddy(samplerBox);
        label->setBuddy(integratorBox);
        label_4->setBuddy(icBox);
        label_6->setBuddy(rFilterBox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(integratorBox, samplerBox);
        QWidget::setTabOrder(samplerBox, resolutionBox);
        QWidget::setTabOrder(resolutionBox, rFilterBox);
        QWidget::setTabOrder(rFilterBox, icBox);
        QWidget::setTabOrder(icBox, aiBox);
        QWidget::setTabOrder(aiBox, treeView);
        QWidget::setTabOrder(treeView, helpViewer);
        QWidget::setTabOrder(helpViewer, buttonBox);

        retranslateUi(RenderSettingsDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), RenderSettingsDialog, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), RenderSettingsDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(RenderSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *RenderSettingsDialog)
    {
        RenderSettingsDialog->setWindowTitle(QApplication::translate("RenderSettingsDialog", "Render settings", 0, QApplication::UnicodeUTF8));
        resolutionBox->clear();
        resolutionBox->insertItems(0, QStringList()
         << QApplication::translate("RenderSettingsDialog", "512x512", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RenderSettingsDialog", "640x480", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RenderSettingsDialog", "768x512", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RenderSettingsDialog", "768x576", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RenderSettingsDialog", "1024x768", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RenderSettingsDialog", "1024x1024", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RenderSettingsDialog", "1280x720", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RenderSettingsDialog", "1280x1024", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("RenderSettingsDialog", "1920x1080", 0, QApplication::UnicodeUTF8)
        );
        icBox->setText(QApplication::translate("RenderSettingsDialog", "Irradiance Cache", 0, QApplication::UnicodeUTF8));
        aiBox->setText(QApplication::translate("RenderSettingsDialog", "Adaptive Integration", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("RenderSettingsDialog", "Documentation", 0, QApplication::UnicodeUTF8));
        helpViewer->setHtml(QApplication::translate("RenderSettingsDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Lucida Grande'; font-size:13pt;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("RenderSettingsDialog", "&Resolution :", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("RenderSettingsDialog", "&Sampler :", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("RenderSettingsDialog", "&Integrator :", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("RenderSettingsDialog", "&Other features :", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("RenderSettingsDialog", "Re&construction :", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RenderSettingsDialog: public Ui_RenderSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RENDERSETTINGSDLG_H
