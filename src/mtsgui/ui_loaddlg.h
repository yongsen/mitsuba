/********************************************************************************
** Form generated from reading UI file 'loaddlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADDLG_H
#define UI_LOADDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_LoadDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *heading;
    QLabel *label_3;
    QProgressBar *progressBar;
    QLabel *statusLabel;
    QHBoxLayout *horizontalLayout;
    QPushButton *toggleButton;
    QLabel *label;
    QTextEdit *console;
    QPushButton *closeButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *LoadDialog)
    {
        if (LoadDialog->objectName().isEmpty())
            LoadDialog->setObjectName(QString::fromUtf8("LoadDialog"));
        LoadDialog->resize(462, 366);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LoadDialog->sizePolicy().hasHeightForWidth());
        LoadDialog->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(LoadDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        heading = new QLabel(LoadDialog);
        heading->setObjectName(QString::fromUtf8("heading"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        heading->setFont(font);

        gridLayout->addWidget(heading, 0, 0, 1, 2);

        label_3 = new QLabel(LoadDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 2);

        progressBar = new QProgressBar(LoadDialog);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        gridLayout->addWidget(progressBar, 2, 0, 1, 2);

        statusLabel = new QLabel(LoadDialog);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(statusLabel->sizePolicy().hasHeightForWidth());
        statusLabel->setSizePolicy(sizePolicy1);
        statusLabel->setTextFormat(Qt::PlainText);
        statusLabel->setWordWrap(false);
        statusLabel->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout->addWidget(statusLabel, 3, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        toggleButton = new QPushButton(LoadDialog);
        toggleButton->setObjectName(QString::fromUtf8("toggleButton"));
        toggleButton->setMaximumSize(QSize(18, 18));
        toggleButton->setFocusPolicy(Qt::NoFocus);
        toggleButton->setFlat(false);

        horizontalLayout->addWidget(toggleButton);

        label = new QLabel(LoadDialog);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setFrameShape(QFrame::NoFrame);
        label->setFrameShadow(QFrame::Plain);
        label->setTextFormat(Qt::PlainText);
        label->setWordWrap(false);
        label->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout->addWidget(label);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 2);

        console = new QTextEdit(LoadDialog);
        console->setObjectName(QString::fromUtf8("console"));
        console->setLineWidth(0);
        console->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        console->setLineWrapMode(QTextEdit::WidgetWidth);
        console->setReadOnly(true);

        gridLayout->addWidget(console, 5, 0, 1, 2);

        closeButton = new QPushButton(LoadDialog);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setEnabled(false);

        gridLayout->addWidget(closeButton, 6, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 6, 0, 1, 1);

        QWidget::setTabOrder(console, closeButton);

        retranslateUi(LoadDialog);
        QObject::connect(closeButton, SIGNAL(clicked()), LoadDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(LoadDialog);
    } // setupUi

    void retranslateUi(QDialog *LoadDialog)
    {
        LoadDialog->setWindowTitle(QApplication::translate("LoadDialog", "Loading scene ..", 0, QApplication::UnicodeUTF8));
        heading->setText(QApplication::translate("LoadDialog", "Loading scene", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("LoadDialog", "Please wait, this can take some time.", 0, QApplication::UnicodeUTF8));
        statusLabel->setText(QApplication::translate("LoadDialog", "Initializing", 0, QApplication::UnicodeUTF8));
        toggleButton->setText(QApplication::translate("LoadDialog", "+", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("LoadDialog", "Details", 0, QApplication::UnicodeUTF8));
        closeButton->setText(QApplication::translate("LoadDialog", "&Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class LoadDialog: public Ui_LoadDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADDLG_H
