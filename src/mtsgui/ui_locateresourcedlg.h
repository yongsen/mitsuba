/********************************************************************************
** Form generated from reading UI file 'locateresourcedlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOCATERESOURCEDLG_H
#define UI_LOCATERESOURCEDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_LocateResourceDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *resourceName;
    QLabel *label_3;
    QLineEdit *pathEdit;
    QPushButton *pathBrowse;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;
    QLabel *label;

    void setupUi(QDialog *LocateResourceDialog)
    {
        if (LocateResourceDialog->objectName().isEmpty())
            LocateResourceDialog->setObjectName(QString::fromUtf8("LocateResourceDialog"));
        LocateResourceDialog->resize(401, 145);
        gridLayout = new QGridLayout(LocateResourceDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        resourceName = new QLabel(LocateResourceDialog);
        resourceName->setObjectName(QString::fromUtf8("resourceName"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        resourceName->setFont(font);
        resourceName->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(resourceName, 0, 1, 1, 2);

        label_3 = new QLabel(LocateResourceDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        pathEdit = new QLineEdit(LocateResourceDialog);
        pathEdit->setObjectName(QString::fromUtf8("pathEdit"));
        pathEdit->setReadOnly(true);

        gridLayout->addWidget(pathEdit, 2, 0, 1, 2);

        pathBrowse = new QPushButton(LocateResourceDialog);
        pathBrowse->setObjectName(QString::fromUtf8("pathBrowse"));
        pathBrowse->setMaximumSize(QSize(30, 16777215));

        gridLayout->addWidget(pathBrowse, 2, 2, 1, 1);

        verticalSpacer = new QSpacerItem(274, 12, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);

        buttonBox = new QDialogButtonBox(LocateResourceDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 4, 0, 1, 3);

        label = new QLabel(LocateResourceDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);


        retranslateUi(LocateResourceDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), LocateResourceDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), LocateResourceDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(LocateResourceDialog);
    } // setupUi

    void retranslateUi(QDialog *LocateResourceDialog)
    {
        LocateResourceDialog->setWindowTitle(QApplication::translate("LocateResourceDialog", "Missing Resource", 0, QApplication::UnicodeUTF8));
        resourceName->setText(QApplication::translate("LocateResourceDialog", "resource.png", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("LocateResourceDialog", "Please locate it manually.", 0, QApplication::UnicodeUTF8));
        pathBrowse->setText(QApplication::translate("LocateResourceDialog", "..", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("LocateResourceDialog", "The following resource could not be found:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class LocateResourceDialog: public Ui_LocateResourceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOCATERESOURCEDLG_H
