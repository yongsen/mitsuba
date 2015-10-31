/********************************************************************************
** Form generated from reading UI file 'aboutdlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDLG_H
#define UI_ABOUTDLG_H

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

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *logoLabel;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QString::fromUtf8("AboutDialog"));
        AboutDialog->resize(570, 319);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/appicon.png"), QSize(), QIcon::Normal, QIcon::Off);
        AboutDialog->setWindowIcon(icon);
        gridLayout = new QGridLayout(AboutDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMinimumSize);
        logoLabel = new QLabel(AboutDialog);
        logoLabel->setObjectName(QString::fromUtf8("logoLabel"));
        logoLabel->setMinimumSize(QSize(80, 80));
        logoLabel->setMaximumSize(QSize(80, 80));
        logoLabel->setPixmap(QPixmap(QString::fromUtf8(":/resources/appicon.png")));
        logoLabel->setScaledContents(true);
        logoLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(logoLabel, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(10, 1, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        label = new QLabel(AboutDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setTextFormat(Qt::RichText);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label->setWordWrap(true);
        label->setMargin(10);
        label->setOpenExternalLinks(true);

        gridLayout->addWidget(label, 0, 2, 2, 1);

        verticalSpacer = new QSpacerItem(20, 109, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 87, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(AboutDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(128, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(AboutDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setDefault(true);

        horizontalLayout->addWidget(pushButton_2);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 3);

        gridLayout->setRowStretch(2, 1);
        gridLayout->setColumnStretch(2, 1);
        QWidget::setTabOrder(pushButton_2, pushButton);

        retranslateUi(AboutDialog);
        QObject::connect(pushButton_2, SIGNAL(clicked()), AboutDialog, SLOT(accept()));
        QObject::connect(pushButton, SIGNAL(clicked()), AboutDialog, SLOT(onCredits()));

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QApplication::translate("AboutDialog", "About Mitsuba", 0, QApplication::UnicodeUTF8));
        logoLabel->setText(QString());
        label->setText(QApplication::translate("AboutDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">About Mitsuba</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Version MTS_VERSION<br />Configuration flags: <span style=\" font-family:'Courier New,courier';\">CONFIG_FLAGS</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Mitsuba is an extensible rendering framework written in portable C++. It implements unbiased as well as biased techniques and contains heavy optimizations "
                        "targeted towards current CPU architectures.</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Copyright \302\251 MTS_YEAR Wenzel Jakob &lt;<a href=\"mailto:wenzel@cs.cornell.edu\"><span style=\" text-decoration: underline; color:#0000ff;\">wenzel@cs.cornell.edu</span></a>&gt;</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Licensed under the <a href=\"http://www.gnu.org/licenses/gpl-3.0.html\"><span style=\" text-decoration: underline; color:#0000ff;\">GNU GPL, Version 3</span></a>.</p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("AboutDialog", "C&redits", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("AboutDialog", "&Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDLG_H
