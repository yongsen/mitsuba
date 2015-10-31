/********************************************************************************
** Form generated from reading UI file 'addserverdlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSERVERDLG_H
#define UI_ADDSERVERDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddServerDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *hostName;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QRadioButton *directConnection;
    QRadioButton *sshConnection;
    QLabel *label_2;
    QLineEdit *port;
    QLabel *label_4;
    QLineEdit *userName;
    QLabel *label_5;
    QLineEdit *installDir;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttons;

    void setupUi(QDialog *AddServerDialog)
    {
        if (AddServerDialog->objectName().isEmpty())
            AddServerDialog->setObjectName(QString::fromUtf8("AddServerDialog"));
        AddServerDialog->resize(313, 238);
        verticalLayout = new QVBoxLayout(AddServerDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_6 = new QLabel(AddServerDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(AddServerDialog);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        hostName = new QLineEdit(AddServerDialog);
        hostName->setObjectName(QString::fromUtf8("hostName"));

        formLayout->setWidget(0, QFormLayout::FieldRole, hostName);

        label_3 = new QLabel(AddServerDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        directConnection = new QRadioButton(AddServerDialog);
        directConnection->setObjectName(QString::fromUtf8("directConnection"));
        directConnection->setChecked(true);

        horizontalLayout->addWidget(directConnection);

        sshConnection = new QRadioButton(AddServerDialog);
        sshConnection->setObjectName(QString::fromUtf8("sshConnection"));

        horizontalLayout->addWidget(sshConnection);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout);

        label_2 = new QLabel(AddServerDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        port = new QLineEdit(AddServerDialog);
        port->setObjectName(QString::fromUtf8("port"));

        formLayout->setWidget(2, QFormLayout::FieldRole, port);

        label_4 = new QLabel(AddServerDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        userName = new QLineEdit(AddServerDialog);
        userName->setObjectName(QString::fromUtf8("userName"));
        userName->setEnabled(false);

        formLayout->setWidget(3, QFormLayout::FieldRole, userName);

        label_5 = new QLabel(AddServerDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        installDir = new QLineEdit(AddServerDialog);
        installDir->setObjectName(QString::fromUtf8("installDir"));
        installDir->setEnabled(false);

        formLayout->setWidget(4, QFormLayout::FieldRole, installDir);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttons = new QDialogButtonBox(AddServerDialog);
        buttons->setObjectName(QString::fromUtf8("buttons"));
        buttons->setOrientation(Qt::Horizontal);
        buttons->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttons);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(hostName);
        label_3->setBuddy(directConnection);
        label_2->setBuddy(port);
        label_4->setBuddy(userName);
        label_5->setBuddy(installDir);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(hostName, directConnection);
        QWidget::setTabOrder(directConnection, sshConnection);
        QWidget::setTabOrder(sshConnection, port);
        QWidget::setTabOrder(port, userName);
        QWidget::setTabOrder(userName, installDir);
        QWidget::setTabOrder(installDir, buttons);

        retranslateUi(AddServerDialog);
        QObject::connect(buttons, SIGNAL(accepted()), AddServerDialog, SLOT(accept()));
        QObject::connect(buttons, SIGNAL(rejected()), AddServerDialog, SLOT(reject()));
        QObject::connect(hostName, SIGNAL(textChanged(QString)), AddServerDialog, SLOT(validate()));
        QObject::connect(sshConnection, SIGNAL(clicked()), AddServerDialog, SLOT(validate()));
        QObject::connect(directConnection, SIGNAL(clicked()), AddServerDialog, SLOT(validate()));
        QObject::connect(port, SIGNAL(textChanged(QString)), AddServerDialog, SLOT(validate()));
        QObject::connect(userName, SIGNAL(textChanged(QString)), AddServerDialog, SLOT(validate()));
        QObject::connect(installDir, SIGNAL(textEdited(QString)), AddServerDialog, SLOT(validate()));

        QMetaObject::connectSlotsByName(AddServerDialog);
    } // setupUi

    void retranslateUi(QDialog *AddServerDialog)
    {
        AddServerDialog->setWindowTitle(QApplication::translate("AddServerDialog", "Add a compute server", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("AddServerDialog", "Please specify the details of this connection :", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AddServerDialog", "Host :", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("AddServerDialog", "Connection type :", 0, QApplication::UnicodeUTF8));
        directConnection->setText(QApplication::translate("AddServerDialog", "Direct", 0, QApplication::UnicodeUTF8));
        sshConnection->setText(QApplication::translate("AddServerDialog", "SSH", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("AddServerDialog", "Port :", 0, QApplication::UnicodeUTF8));
        port->setText(QApplication::translate("AddServerDialog", "7554", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("AddServerDialog", "Username :", 0, QApplication::UnicodeUTF8));
        userName->setText(QApplication::translate("AddServerDialog", "localuser", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("AddServerDialog", "Mitsuba directory :", 0, QApplication::UnicodeUTF8));
        installDir->setText(QApplication::translate("AddServerDialog", "~/mitsuba", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AddServerDialog: public Ui_AddServerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSERVERDLG_H
