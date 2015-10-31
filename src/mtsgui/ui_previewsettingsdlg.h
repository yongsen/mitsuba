/********************************************************************************
** Form generated from reading UI file 'previewsettingsdlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREVIEWSETTINGSDLG_H
#define UI_PREVIEWSETTINGSDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_PreviewSettingsDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *previewLabel;
    QSpacerItem *horizontalSpacer;
    QLabel *previewMethodLabel;
    QComboBox *previewMethodCombo;
    QLabel *pathLengthLabel;
    QSlider *pathLengthSlider;
    QLineEdit *pathLengthEdit;
    QLabel *clampingLabel;
    QSlider *clampingSlider;
    QLabel *shadowResolutionLabel;
    QComboBox *shadowResolutionCombo;
    QLabel *diffuseLabel;
    QLabel *toneMappingLabel;
    QLabel *toneMappingMethodLabel;
    QComboBox *toneMappingMethodCombo;
    QLabel *keyLabel;
    QSlider *keySlider;
    QLabel *exposureLabel;
    QGridLayout *subGridLayout;
    QDoubleSpinBox *exposureSpinBox;
    QSlider *exposureSlider;
    QDoubleSpinBox *gammaSpinBox;
    QCheckBox *sRGBCheckBox;
    QLabel *gammaLabel;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *resetButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *closeButton;
    QHBoxLayout *horizontalLayout;
    QCheckBox *diffuseSourcesBox;
    QCheckBox *diffuseReceiversBox;

    void setupUi(QDialog *PreviewSettingsDialog)
    {
        if (PreviewSettingsDialog->objectName().isEmpty())
            PreviewSettingsDialog->setObjectName(QString::fromUtf8("PreviewSettingsDialog"));
        PreviewSettingsDialog->resize(420, 360);
        gridLayout = new QGridLayout(PreviewSettingsDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        previewLabel = new QLabel(PreviewSettingsDialog);
        previewLabel->setObjectName(QString::fromUtf8("previewLabel"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        previewLabel->setFont(font);

        gridLayout->addWidget(previewLabel, 0, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(20, 24, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        previewMethodLabel = new QLabel(PreviewSettingsDialog);
        previewMethodLabel->setObjectName(QString::fromUtf8("previewMethodLabel"));

        gridLayout->addWidget(previewMethodLabel, 1, 1, 1, 1);

        previewMethodCombo = new QComboBox(PreviewSettingsDialog);
        previewMethodCombo->setObjectName(QString::fromUtf8("previewMethodCombo"));

        gridLayout->addWidget(previewMethodCombo, 1, 2, 1, 2);

        pathLengthLabel = new QLabel(PreviewSettingsDialog);
        pathLengthLabel->setObjectName(QString::fromUtf8("pathLengthLabel"));

        gridLayout->addWidget(pathLengthLabel, 2, 1, 1, 1);

        pathLengthSlider = new QSlider(PreviewSettingsDialog);
        pathLengthSlider->setObjectName(QString::fromUtf8("pathLengthSlider"));
        pathLengthSlider->setMinimum(2);
        pathLengthSlider->setMaximum(6);
        pathLengthSlider->setPageStep(1);
        pathLengthSlider->setTracking(true);
        pathLengthSlider->setOrientation(Qt::Horizontal);
        pathLengthSlider->setTickPosition(QSlider::TicksAbove);

        gridLayout->addWidget(pathLengthSlider, 2, 2, 1, 1);

        pathLengthEdit = new QLineEdit(PreviewSettingsDialog);
        pathLengthEdit->setObjectName(QString::fromUtf8("pathLengthEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pathLengthEdit->sizePolicy().hasHeightForWidth());
        pathLengthEdit->setSizePolicy(sizePolicy);
        pathLengthEdit->setMinimumSize(QSize(30, 0));
        pathLengthEdit->setReadOnly(true);

        gridLayout->addWidget(pathLengthEdit, 2, 3, 1, 1);

        clampingLabel = new QLabel(PreviewSettingsDialog);
        clampingLabel->setObjectName(QString::fromUtf8("clampingLabel"));

        gridLayout->addWidget(clampingLabel, 3, 1, 1, 1);

        clampingSlider = new QSlider(PreviewSettingsDialog);
        clampingSlider->setObjectName(QString::fromUtf8("clampingSlider"));
        clampingSlider->setMaximum(100);
        clampingSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(clampingSlider, 3, 2, 1, 2);

        shadowResolutionLabel = new QLabel(PreviewSettingsDialog);
        shadowResolutionLabel->setObjectName(QString::fromUtf8("shadowResolutionLabel"));

        gridLayout->addWidget(shadowResolutionLabel, 4, 1, 1, 1);

        shadowResolutionCombo = new QComboBox(PreviewSettingsDialog);
        shadowResolutionCombo->setObjectName(QString::fromUtf8("shadowResolutionCombo"));

        gridLayout->addWidget(shadowResolutionCombo, 4, 2, 1, 2);

        diffuseLabel = new QLabel(PreviewSettingsDialog);
        diffuseLabel->setObjectName(QString::fromUtf8("diffuseLabel"));

        gridLayout->addWidget(diffuseLabel, 5, 1, 1, 1);

        toneMappingLabel = new QLabel(PreviewSettingsDialog);
        toneMappingLabel->setObjectName(QString::fromUtf8("toneMappingLabel"));
        toneMappingLabel->setFont(font);

        gridLayout->addWidget(toneMappingLabel, 6, 0, 1, 2);

        toneMappingMethodLabel = new QLabel(PreviewSettingsDialog);
        toneMappingMethodLabel->setObjectName(QString::fromUtf8("toneMappingMethodLabel"));

        gridLayout->addWidget(toneMappingMethodLabel, 7, 1, 1, 1);

        toneMappingMethodCombo = new QComboBox(PreviewSettingsDialog);
        toneMappingMethodCombo->setObjectName(QString::fromUtf8("toneMappingMethodCombo"));

        gridLayout->addWidget(toneMappingMethodCombo, 7, 2, 1, 2);

        keyLabel = new QLabel(PreviewSettingsDialog);
        keyLabel->setObjectName(QString::fromUtf8("keyLabel"));

        gridLayout->addWidget(keyLabel, 8, 1, 1, 1);

        keySlider = new QSlider(PreviewSettingsDialog);
        keySlider->setObjectName(QString::fromUtf8("keySlider"));
        keySlider->setMaximum(100);
        keySlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(keySlider, 8, 2, 1, 2);

        exposureLabel = new QLabel(PreviewSettingsDialog);
        exposureLabel->setObjectName(QString::fromUtf8("exposureLabel"));

        gridLayout->addWidget(exposureLabel, 9, 1, 1, 1);

        subGridLayout = new QGridLayout();
        subGridLayout->setObjectName(QString::fromUtf8("subGridLayout"));
        exposureSpinBox = new QDoubleSpinBox(PreviewSettingsDialog);
        exposureSpinBox->setObjectName(QString::fromUtf8("exposureSpinBox"));
        exposureSpinBox->setDecimals(2);
        exposureSpinBox->setMinimum(-10);
        exposureSpinBox->setMaximum(10);
        exposureSpinBox->setSingleStep(0.1);
        exposureSpinBox->setValue(0);

        subGridLayout->addWidget(exposureSpinBox, 0, 0, 1, 1);

        exposureSlider = new QSlider(PreviewSettingsDialog);
        exposureSlider->setObjectName(QString::fromUtf8("exposureSlider"));
        exposureSlider->setMinimum(-1000);
        exposureSlider->setMaximum(1000);
        exposureSlider->setPageStep(1);
        exposureSlider->setValue(0);
        exposureSlider->setOrientation(Qt::Horizontal);
        exposureSlider->setTickPosition(QSlider::TicksAbove);
        exposureSlider->setTickInterval(100);

        subGridLayout->addWidget(exposureSlider, 0, 1, 1, 1);

        gammaSpinBox = new QDoubleSpinBox(PreviewSettingsDialog);
        gammaSpinBox->setObjectName(QString::fromUtf8("gammaSpinBox"));
        gammaSpinBox->setDecimals(2);
        gammaSpinBox->setMinimum(0.1);
        gammaSpinBox->setMaximum(5);
        gammaSpinBox->setSingleStep(0.1);
        gammaSpinBox->setValue(2.2);

        subGridLayout->addWidget(gammaSpinBox, 1, 0, 1, 1);

        sRGBCheckBox = new QCheckBox(PreviewSettingsDialog);
        sRGBCheckBox->setObjectName(QString::fromUtf8("sRGBCheckBox"));

        subGridLayout->addWidget(sRGBCheckBox, 1, 1, 1, 1);


        gridLayout->addLayout(subGridLayout, 9, 2, 2, 2);

        gammaLabel = new QLabel(PreviewSettingsDialog);
        gammaLabel->setObjectName(QString::fromUtf8("gammaLabel"));

        gridLayout->addWidget(gammaLabel, 10, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 11, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        resetButton = new QPushButton(PreviewSettingsDialog);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(resetButton->sizePolicy().hasHeightForWidth());
        resetButton->setSizePolicy(sizePolicy1);
        resetButton->setMinimumSize(QSize(0, 0));

        horizontalLayout_2->addWidget(resetButton);

        horizontalSpacer_3 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        closeButton = new QPushButton(PreviewSettingsDialog);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(closeButton->sizePolicy().hasHeightForWidth());
        closeButton->setSizePolicy(sizePolicy2);
        closeButton->setMinimumSize(QSize(30, 0));
        closeButton->setLayoutDirection(Qt::LeftToRight);
        closeButton->setAutoDefault(true);
        closeButton->setDefault(true);
        closeButton->setFlat(false);

        horizontalLayout_2->addWidget(closeButton);


        gridLayout->addLayout(horizontalLayout_2, 12, 0, 1, 4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        diffuseSourcesBox = new QCheckBox(PreviewSettingsDialog);
        diffuseSourcesBox->setObjectName(QString::fromUtf8("diffuseSourcesBox"));

        horizontalLayout->addWidget(diffuseSourcesBox);

        diffuseReceiversBox = new QCheckBox(PreviewSettingsDialog);
        diffuseReceiversBox->setObjectName(QString::fromUtf8("diffuseReceiversBox"));
        diffuseReceiversBox->setEnabled(true);

        horizontalLayout->addWidget(diffuseReceiversBox);


        gridLayout->addLayout(horizontalLayout, 5, 2, 1, 2);

#ifndef QT_NO_SHORTCUT
        previewMethodLabel->setBuddy(previewMethodCombo);
        pathLengthLabel->setBuddy(pathLengthSlider);
        clampingLabel->setBuddy(clampingSlider);
        shadowResolutionLabel->setBuddy(shadowResolutionCombo);
        diffuseLabel->setBuddy(diffuseSourcesBox);
        toneMappingMethodLabel->setBuddy(toneMappingMethodCombo);
        keyLabel->setBuddy(keySlider);
        exposureLabel->setBuddy(exposureSpinBox);
        gammaLabel->setBuddy(gammaSpinBox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(previewMethodCombo, pathLengthSlider);
        QWidget::setTabOrder(pathLengthSlider, pathLengthEdit);
        QWidget::setTabOrder(pathLengthEdit, clampingSlider);
        QWidget::setTabOrder(clampingSlider, shadowResolutionCombo);
        QWidget::setTabOrder(shadowResolutionCombo, diffuseSourcesBox);
        QWidget::setTabOrder(diffuseSourcesBox, diffuseReceiversBox);
        QWidget::setTabOrder(diffuseReceiversBox, toneMappingMethodCombo);
        QWidget::setTabOrder(toneMappingMethodCombo, keySlider);
        QWidget::setTabOrder(keySlider, exposureSpinBox);
        QWidget::setTabOrder(exposureSpinBox, exposureSlider);
        QWidget::setTabOrder(exposureSlider, gammaSpinBox);
        QWidget::setTabOrder(gammaSpinBox, sRGBCheckBox);
        QWidget::setTabOrder(sRGBCheckBox, resetButton);
        QWidget::setTabOrder(resetButton, closeButton);

        retranslateUi(PreviewSettingsDialog);
        QObject::connect(closeButton, SIGNAL(clicked()), PreviewSettingsDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(PreviewSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *PreviewSettingsDialog)
    {
        PreviewSettingsDialog->setWindowTitle(QApplication::translate("PreviewSettingsDialog", "Preview settings", 0, QApplication::UnicodeUTF8));
        previewLabel->setText(QApplication::translate("PreviewSettingsDialog", "Realtime preview", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        previewMethodLabel->setToolTip(QApplication::translate("PreviewSettingsDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">OpenGL</span> and <span style=\" font-weight:600;\">OpenGL (single pass)</span> use the graphics card to draw an approximate preview of the scene, which is usually preferable for performance reasons. The single pass variant makes heavy use on geometry shaders to further accelerate rendering, but for this to be actually faster, the card must be <span style=\" font-style:italic;\">very</span> recent (e.g. Fermi and above).</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px"
                        "; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">The <span style=\" font-weight:600;\">Ray Tracing</span> strategies are preferable when the scene contains non-triangular shapes, which cannot easily be rendered by graphics hardware, such as quadrics. The <span style=\" font-weight:600;\">Coherent Ray Tracing</span> technique traces four rays at a time using SSE2.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        previewMethodLabel->setText(QApplication::translate("PreviewSettingsDialog", "&Method :", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        previewMethodCombo->setToolTip(QApplication::translate("PreviewSettingsDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">OpenGL</span> and <span style=\" font-weight:600;\">OpenGL (single pass)</span> use the graphics card to draw an approximate preview of the scene, which is usually preferable for performance reasons. The single pass variant makes heavy use on geometry shaders to further accelerate rendering, but for this to be actually faster, the card must be <span style=\" font-style:italic;\">very</span> recent (e.g. Fermi and above).</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px"
                        "; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">The <span style=\" font-weight:600;\">Ray Tracing</span> strategies are preferable when the scene contains non-triangular shapes, which cannot easily be rendered by graphics hardware, such as quadrics. The <span style=\" font-weight:600;\">Coherent Ray Tracing</span> technique traces four rays at a time using SSE2.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        pathLengthLabel->setToolTip(QApplication::translate("PreviewSettingsDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Highest path length to visualize in the preview. A value of <span style=\" font-weight:600;\">2</span> corresponds to direct illumination, <span style=\" font-weight:600;\">3</span> is one-bounce global illumination, etc.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pathLengthLabel->setText(QApplication::translate("PreviewSettingsDialog", "Path &length :", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pathLengthSlider->setToolTip(QApplication::translate("PreviewSettingsDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Highest path length to visualize in the preview. A value of <span style=\" font-weight:600;\">2</span> corresponds to direct illumination, <span style=\" font-weight:600;\">3</span> is one-bounce global illumination, etc.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pathLengthEdit->setText(QApplication::translate("PreviewSettingsDialog", "2", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        clampingLabel->setToolTip(QApplication::translate("PreviewSettingsDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Clamping changes the influence radius of photons used to render the preview.<span style=\" font-weight:600;\"> </span>A too small value will cause bright blotches to appear in the preview, whereas a too large value will artificially darken the image.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">A good approach is to set this slider"
                        " as low as possible without seeing disturbing blotches in the image.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        clampingLabel->setText(QApplication::translate("PreviewSettingsDialog", "&Clamping :", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        clampingSlider->setToolTip(QApplication::translate("PreviewSettingsDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Clamping changes the influence radius of photons used to render the preview.<span style=\" font-weight:600;\"> </span>A too small value will cause bright blotches to appear in the preview, whereas a too large value will artificially darken the image.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">A good approach is to set this slider"
                        " as low as possible without seeing disturbing blotches in the image.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        shadowResolutionLabel->setToolTip(QApplication::translate("PreviewSettingsDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">The two OpenGL preview techniques use shadow mapping to compute the light transport in a scene. This parameter allows choosing the resolution of the associated shadow maps, which is useful when the shadow quality is too low (for example when jagged edges are visible in the image). The higher this value, the slower the preview will converge. A value of <span style=\" font-weight:600;\">256</span> or <span style=\" font-weight:600;\">512</span> is usually a good start.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        shadowResolutionLabel->setText(QApplication::translate("PreviewSettingsDialog", "&Shadow maps :", 0, QApplication::UnicodeUTF8));
        shadowResolutionCombo->clear();
        shadowResolutionCombo->insertItems(0, QStringList()
         << QApplication::translate("PreviewSettingsDialog", "64x64", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PreviewSettingsDialog", "128x128", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PreviewSettingsDialog", "256x256", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PreviewSettingsDialog", "512x512", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PreviewSettingsDialog", "1024x1024", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PreviewSettingsDialog", "2048x2048", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        shadowResolutionCombo->setToolTip(QApplication::translate("PreviewSettingsDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">The two OpenGL preview techniques use shadow mapping to compute the light transport in a scene. This parameter allows choosing the resolution of the associated shadow maps, which is useful when the shadow quality is too low (for example when jagged edges are visible in the image). The higher this value, the slower the preview will converge. A value of <span style=\" font-weight:600;\">256</span> or <span style=\" font-weight:600;\">512</span> is usually a good start.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        diffuseLabel->setToolTip(QApplication::translate("PreviewSettingsDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">When a scene contains many glossy surfaces, the real-time visualization can sometimes produce disturbing image artifacts (bright blotches).<span style=\" font-weight:600;\"> </span>These eventually disappear as the preview converges, but waiting for a long time may be undesirable. The following options are meant to reduce such issues:</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-r"
                        "ight:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Diffuse sources</span>: treat glossy surfaces at the second bounce as if they were diffuse. This is usually perfectly fine for previewing purposes and is thus turned on by default.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Diffuse receivers</span>: treat directly visible surfaces as if they were diffuse. This is leads to a much more approximate result -- essentially, a clay version of the scene is being rendered.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        diffuseLabel->setText(QApplication::translate("PreviewSettingsDialog", "&Force diffuse :", 0, QApplication::UnicodeUTF8));
        toneMappingLabel->setText(QApplication::translate("PreviewSettingsDialog", "Tonemapping", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toneMappingMethodLabel->setToolTip(QApplication::translate("PreviewSettingsDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">A tonemapping method is necessary to translate physical radiance values into pixel intensities. The technique chosen here is used <span style=\" font-style:italic;\">both</span> for the preview and rendered images.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Gamma correction</span> is the default "
                        "and well-suited if the dynamic range of your scene is not too great.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">[Reinhard. et al 2002]</span> works well for scenes with a high dynamic range. Note that this technique continually adapts to the overall image brightness, which may produce unexpected behavior together with the realtime preview: when turning to face a dark region of the scene, the tonemapper will change the exposure to maintain the same overall brightness.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toneMappingMethodLabel->setText(QApplication::translate("PreviewSettingsDialog", "Method :", 0, QApplication::UnicodeUTF8));
        toneMappingMethodCombo->clear();
        toneMappingMethodCombo->insertItems(0, QStringList()
         << QApplication::translate("PreviewSettingsDialog", "Gamma correction", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PreviewSettingsDialog", "Reinhard et al. 2002", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        toneMappingMethodCombo->setToolTip(QApplication::translate("PreviewSettingsDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">A tonemapping method is necessary to translate physical radiance values into pixel intensities. The technique chosen here is used <span style=\" font-style:italic;\">both</span> for the preview and rendered images.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Gamma correction</span> is the default "
                        "and well-suited if the dynamic range of your scene is not too great.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">[Reinhard. et al 2002]</span> works well for scenes with a high dynamic range. Note that this technique continually adapts to the overall image brightness, which may produce unexpected behavior together with the realtime preview: when turning to face a dark region of the scene, the tonemapper will change the exposure to maintain the same overall brightness.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        keyLabel->setText(QApplication::translate("PreviewSettingsDialog", "Key value : ", 0, QApplication::UnicodeUTF8));
        exposureLabel->setText(QApplication::translate("PreviewSettingsDialog", "E&xposure : 2 ^", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        gammaSpinBox->setToolTip(QApplication::translate("PreviewSettingsDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Gamma of the viewing device (usually 2.2).<span style=\" font-weight:600;\"> </span>When sRGB is selected, this value is ignored.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        sRGBCheckBox->setToolTip(QApplication::translate("PreviewSettingsDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Does the viewing device have an sRGB response curve?<span style=\" font-weight:600;\"> </span>For most monitors and LCD screens on the market, this is the case.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        sRGBCheckBox->setText(QApplication::translate("PreviewSettingsDialog", "sRGB", 0, QApplication::UnicodeUTF8));
        gammaLabel->setText(QApplication::translate("PreviewSettingsDialog", "&Gamma :", 0, QApplication::UnicodeUTF8));
        resetButton->setText(QApplication::translate("PreviewSettingsDialog", "Reset", 0, QApplication::UnicodeUTF8));
        closeButton->setText(QApplication::translate("PreviewSettingsDialog", "Close", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        diffuseSourcesBox->setToolTip(QApplication::translate("PreviewSettingsDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">When a scene contains many glossy surfaces, the real-time visualization can sometimes produce disturbing image artifacts (bright blotches).<span style=\" font-weight:600;\"> </span>These eventually disappear as the preview converges, but waiting for a long time may be undesirable. The following options are meant to reduce such issues:</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-r"
                        "ight:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Diffuse sources</span>: treat glossy surfaces at the second bounce as if they were diffuse. This is usually perfectly fine for previewing purposes and is thus turned on by default.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Diffuse receivers</span>: treat directly visible surfaces as if they were diffuse. This is leads to a much more approximate result -- essentially, a clay version of the scene is being rendered.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        diffuseSourcesBox->setText(QApplication::translate("PreviewSettingsDialog", "Sources", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        diffuseReceiversBox->setToolTip(QApplication::translate("PreviewSettingsDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">When a scene contains many glossy surfaces, the real-time visualization can sometimes produce disturbing image artifacts (bright blotches).<span style=\" font-weight:600;\"> </span>These eventually disappear as the preview converges, but waiting for a long time may be undesirable. The following options are meant to reduce such issues:</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-r"
                        "ight:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Diffuse sources</span>: treat glossy surfaces at the second bounce as if they were diffuse. This is usually perfectly fine for previewing purposes and is thus turned on by default.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Diffuse receivers</span>: treat directly visible surfaces as if they were diffuse. This is leads to a much more approximate result -- essentially, a clay version of the scene is being rendered.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        diffuseReceiversBox->setText(QApplication::translate("PreviewSettingsDialog", "Receivers", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PreviewSettingsDialog: public Ui_PreviewSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREVIEWSETTINGSDLG_H
