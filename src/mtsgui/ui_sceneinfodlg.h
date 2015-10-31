/********************************************************************************
** Form generated from reading UI file 'sceneinfodlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCENEINFODLG_H
#define UI_SCENEINFODLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_SceneInformationDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QTextEdit *textEdit;

    void setupUi(QDialog *SceneInformationDialog)
    {
        if (SceneInformationDialog->objectName().isEmpty())
            SceneInformationDialog->setObjectName(QString::fromUtf8("SceneInformationDialog"));
        SceneInformationDialog->setWindowModality(Qt::NonModal);
        SceneInformationDialog->resize(676, 534);
        gridLayout = new QGridLayout(SceneInformationDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(198, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(SceneInformationDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        textEdit = new QTextEdit(SceneInformationDialog);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        QFont font;
        font.setFamily(QString::fromUtf8("Monospace"));
        font.setPointSize(8);
        textEdit->setFont(font);
        textEdit->setLineWrapMode(QTextEdit::NoWrap);
        textEdit->setReadOnly(true);

        gridLayout->addWidget(textEdit, 0, 0, 1, 1);


        retranslateUi(SceneInformationDialog);
        QObject::connect(pushButton, SIGNAL(clicked()), SceneInformationDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(SceneInformationDialog);
    } // setupUi

    void retranslateUi(QDialog *SceneInformationDialog)
    {
        SceneInformationDialog->setWindowTitle(QApplication::translate("SceneInformationDialog", "Scene Information", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("SceneInformationDialog", "&Close", 0, QApplication::UnicodeUTF8));
        textEdit->setHtml(QApplication::translate("SceneInformationDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Monospace'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Ubuntu'; font-size:11pt;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SceneInformationDialog: public Ui_SceneInformationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCENEINFODLG_H
