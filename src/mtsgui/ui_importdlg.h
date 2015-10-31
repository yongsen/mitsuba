/********************************************************************************
** Form generated from reading UI file 'importdlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMPORTDLG_H
#define UI_IMPORTDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImportDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLineEdit *inputEdit;
    QPushButton *inputBrowse;
    QLabel *label_2;
    QLineEdit *directoryEdit;
    QPushButton *directoryBrowse;
    QLabel *label_3;
    QLineEdit *sceneEdit;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *adjustmentEdit;
    QPushButton *adjustmentBrowse;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;
    QLabel *label_7;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *sRGBButton;
    QRadioButton *linearButton;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QDialog *ImportDialog)
    {
        if (ImportDialog->objectName().isEmpty())
            ImportDialog->setObjectName(QString::fromUtf8("ImportDialog"));
        ImportDialog->resize(358, 282);
        gridLayout = new QGridLayout(ImportDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_4 = new QLabel(ImportDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 0, 0, 1, 5);

        horizontalSpacer_2 = new QSpacerItem(10, 4, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        label = new QLabel(ImportDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(10, 5, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 3, 1, 1);

        inputEdit = new QLineEdit(ImportDialog);
        inputEdit->setObjectName(QString::fromUtf8("inputEdit"));
        inputEdit->setReadOnly(true);

        gridLayout->addWidget(inputEdit, 1, 4, 1, 1);

        inputBrowse = new QPushButton(ImportDialog);
        inputBrowse->setObjectName(QString::fromUtf8("inputBrowse"));
        inputBrowse->setMaximumSize(QSize(30, 16777215));

        gridLayout->addWidget(inputBrowse, 1, 5, 1, 1);

        label_2 = new QLabel(ImportDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 1, 1, 2);

        directoryEdit = new QLineEdit(ImportDialog);
        directoryEdit->setObjectName(QString::fromUtf8("directoryEdit"));
        directoryEdit->setEnabled(false);
        directoryEdit->setReadOnly(true);

        gridLayout->addWidget(directoryEdit, 2, 4, 1, 1);

        directoryBrowse = new QPushButton(ImportDialog);
        directoryBrowse->setObjectName(QString::fromUtf8("directoryBrowse"));
        directoryBrowse->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(directoryBrowse->sizePolicy().hasHeightForWidth());
        directoryBrowse->setSizePolicy(sizePolicy);
        directoryBrowse->setMaximumSize(QSize(30, 16777215));

        gridLayout->addWidget(directoryBrowse, 2, 5, 1, 1);

        label_3 = new QLabel(ImportDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 1, 1, 1);

        sceneEdit = new QLineEdit(ImportDialog);
        sceneEdit->setObjectName(QString::fromUtf8("sceneEdit"));
        sceneEdit->setEnabled(false);
        sceneEdit->setReadOnly(false);

        gridLayout->addWidget(sceneEdit, 3, 4, 1, 1);

        label_5 = new QLabel(ImportDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 4, 0, 1, 5);

        label_6 = new QLabel(ImportDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setEnabled(true);

        gridLayout->addWidget(label_6, 5, 1, 1, 2);

        adjustmentEdit = new QLineEdit(ImportDialog);
        adjustmentEdit->setObjectName(QString::fromUtf8("adjustmentEdit"));
        adjustmentEdit->setEnabled(false);
        adjustmentEdit->setReadOnly(true);

        gridLayout->addWidget(adjustmentEdit, 5, 4, 1, 1);

        adjustmentBrowse = new QPushButton(ImportDialog);
        adjustmentBrowse->setObjectName(QString::fromUtf8("adjustmentBrowse"));
        adjustmentBrowse->setEnabled(false);
        sizePolicy.setHeightForWidth(adjustmentBrowse->sizePolicy().hasHeightForWidth());
        adjustmentBrowse->setSizePolicy(sizePolicy);
        adjustmentBrowse->setMaximumSize(QSize(30, 16777215));

        gridLayout->addWidget(adjustmentBrowse, 5, 5, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 7, 2, 1, 3);

        buttonBox = new QDialogButtonBox(ImportDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 8, 1, 1, 5);

        label_7 = new QLabel(ImportDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 6, 1, 1, 2);

        widget = new QWidget(ImportDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        sRGBButton = new QRadioButton(widget);
        sRGBButton->setObjectName(QString::fromUtf8("sRGBButton"));
        sRGBButton->setChecked(true);

        horizontalLayout->addWidget(sRGBButton);

        linearButton = new QRadioButton(widget);
        linearButton->setObjectName(QString::fromUtf8("linearButton"));
        linearButton->setChecked(false);

        horizontalLayout->addWidget(linearButton);

        horizontalSpacer_3 = new QSpacerItem(5, 5, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        gridLayout->addWidget(widget, 6, 4, 1, 2);


        retranslateUi(ImportDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ImportDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ImportDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ImportDialog);
    } // setupUi

    void retranslateUi(QDialog *ImportDialog)
    {
        ImportDialog->setWindowTitle(QApplication::translate("ImportDialog", "Import COLLADA 1.4 / Wavefront OBJ", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ImportDialog", "Source and destination", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ImportDialog", "Input scene :", 0, QApplication::UnicodeUTF8));
        inputBrowse->setText(QApplication::translate("ImportDialog", "...", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ImportDialog", "Target directory :", 0, QApplication::UnicodeUTF8));
        directoryBrowse->setText(QApplication::translate("ImportDialog", "...", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ImportDialog", "Target scene file :", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ImportDialog", "Additional configuration (optional)", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("ImportDialog", "Adjustment file :", 0, QApplication::UnicodeUTF8));
        adjustmentBrowse->setText(QApplication::translate("ImportDialog", "...", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("ImportDialog", "Color interpretation :", 0, QApplication::UnicodeUTF8));
        sRGBButton->setText(QApplication::translate("ImportDialog", "sRGB", 0, QApplication::UnicodeUTF8));
        linearButton->setText(QApplication::translate("ImportDialog", "Linear", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ImportDialog: public Ui_ImportDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPORTDLG_H
