/********************************************************************************
** Form generated from reading UI file 'acknowledgmentdlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACKNOWLEDGMENTDLG_H
#define UI_ACKNOWLEDGMENTDLG_H

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
#include <QtGui/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_AcknowledgmentDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *AcknowledgmentDialog)
    {
        if (AcknowledgmentDialog->objectName().isEmpty())
            AcknowledgmentDialog->setObjectName(QString::fromUtf8("AcknowledgmentDialog"));
        AcknowledgmentDialog->setWindowModality(Qt::NonModal);
        AcknowledgmentDialog->resize(495, 387);
        gridLayout = new QGridLayout(AcknowledgmentDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(198, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(AcknowledgmentDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        textBrowser = new QTextBrowser(AcknowledgmentDialog);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setOpenExternalLinks(true);

        gridLayout->addWidget(textBrowser, 0, 0, 1, 1);


        retranslateUi(AcknowledgmentDialog);
        QObject::connect(pushButton, SIGNAL(clicked()), AcknowledgmentDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(AcknowledgmentDialog);
    } // setupUi

    void retranslateUi(QDialog *AcknowledgmentDialog)
    {
        AcknowledgmentDialog->setWindowTitle(QApplication::translate("AcknowledgmentDialog", "Acknowledgments", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("AcknowledgmentDialog", "&Close", 0, QApplication::UnicodeUTF8));
        textBrowser->setHtml(QApplication::translate("AcknowledgmentDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans'; font-size:10pt; font-weight:600;\">Acknowledgments</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans'; font-size:10pt;\">I am indebted to my advisor Steve Marschner for allowing me to devote a significant amount of my research time to this project. His insightful and encouraging suggestions have helped transform this program into much more than I ever thought it would be.</span></p>\n"
"<p style=\" "
                        "margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans'; font-size:10pt;\">The architecture of Mitsuba as well as some individual components are based on implementations discussed in: </span><a href=\"http://www.pbrt.org\"><span style=\" font-family:'Sans'; font-size:10pt; text-decoration: underline; color:#0000ff;\">Physically Based Rendering</span></a><span style=\" font-family:'Sans'; font-size:10pt;\"> - From Theory To Implementation by Matt Pharr and Greg Humphreys.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans'; font-size:10pt;\">The architecture of the coherent path tracer traversal code was influenced by </span><a href=\"http://gna.org/projects/radius/\"><span style=\" font-family:'Sans'; font-size:10pt; text-decoration: underline; color:#0000ff;\">Radius</span></a><span style=\" font-family:"
                        "'Sans'; font-size:10pt;\"> from Thierry Berger-Perrin.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans'; font-size:10pt;\">Some of the icons were taken from the </span><a href=\"https://launchpad.net/humanity\"><span style=\" font-family:'Sans'; font-size:10pt; text-decoration: underline; color:#0000ff;\">Humanity</span></a><span style=\" font-family:'Sans'; font-size:10pt;\"> icon set by Canonical Ltd.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans'; font-size:10pt;\">The material test scene was kindly contributed by Jonas Pilo, and the environment map it uses is courtesy of Bernhard Vogl.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans'; font-si"
                        "ze:10pt;\">The included index of refraction data files for conductors are copied from PBRT. They are originally from the Luxpop database (</span><a href=\"http://www.luxpop.com\"><span style=\" font-family:'Sans'; font-size:10pt; text-decoration: underline; color:#0000ff;\">www.luxpop.com</span></a><span style=\" font-family:'Sans'; font-size:10pt;\">) and are based on data by Palik et al. and measurements of atomic scattering factors made by the Center For X-Ray Optics (CXRO) at Berkeley and the Lawrence Livermore National Laboratory (LLNL).</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans'; font-size:10pt;\">The following people have kindly contributed code or bugfixes:</span></p>\n"
"<ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" font-family:'Sans'; font-size:10pt;\" style=\" margin-top:12px; margin-bottom:12px; ma"
                        "rgin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Milo\305\235 Ha\305\235an</li>\n"
"<li style=\" font-family:'Sans'; font-size:10pt;\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Marios Papas</li>\n"
"<li style=\" font-family:'Sans'; font-size:10pt;\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Edgar Vel\303\241zquez-Armend\303\241riz</li>\n"
"<li style=\" font-family:'Sans'; font-size:10pt;\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Jirka Vorba</li>\n"
"<li style=\" font-family:'Sans'; font-size:10pt;\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Leonhard Gr\303\274nschlo\303\237</li></ul>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block"
                        "-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans'; font-size:10pt;\">Mitsuba makes heavy use of the following amazing libraries and tools: </span></p>\n"
"<ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" font-family:'Sans'; font-size:10pt;\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"http://qt.digia.com/product/\"><span style=\" text-decoration: underline; color:#0000ff;\">Qt 4</span></a> by Digia</li>\n"
"<li style=\" font-family:'Sans'; font-size:10pt;\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"http://www.openexr.com/\"><span style=\" text-decoration: underline; color:#0000ff;\">OpenEXR</span></a> by Industrial Light &amp; Magic</li>\n"
"<li style=\" font-family:'Sans'; font-size:10pt;\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; m"
                        "argin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"http://xerces.apache.org/xerces-c/\"><span style=\" text-decoration: underline; color:#0000ff;\">Xerces-C++</span></a> by the Apache Foundation</li>\n"
"<li style=\" font-family:'Sans'; font-size:10pt;\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"http://eigen.tuxfamily.org\"><span style=\" text-decoration: underline; color:#0000ff;\">Eigen</span></a> by Beno\303\256t Jacob and Ga\303\253l Guennebaud</li>\n"
"<li style=\" font-family:'Sans'; font-size:10pt;\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"http://gruntthepeon.free.fr/ssemath/\"><span style=\" text-decoration: underline; color:#0000ff;\">SSE math functions</span></a> by Julien Pommier</li>\n"
"<li style=\" font-family:'Sans'; font-size:10pt;\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-ri"
                        "ght:0px; -qt-block-indent:0; text-indent:0px;\">The <a href=\"http://www.boost.org/\"><span style=\" text-decoration: underline; color:#0000ff;\">Boost</span></a> C++ class library</li>\n"
"<li style=\" font-family:'Sans'; font-size:10pt;\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"http://glew.sourceforge.net/\"><span style=\" text-decoration: underline; color:#0000ff;\">GLEW</span></a> by Milan Ikits, Marcelo E. Magallon and Lev Povalahev</li>\n"
"<li style=\" font-family:'Sans'; font-size:10pt;\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"http://sourceforge.net/projects/collada-dom/\"><span style=\" text-decoration: underline; color:#0000ff;\">COLLADA DOM</span></a> by Sony Computer Entertainment</li>\n"
"<li style=\" font-family:'Sans'; font-size:10pt;\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -"
                        "qt-block-indent:0; text-indent:0px;\"><a href=\"http://www.math.sci.hiroshima-u.ac.jp/~m-mat/MT/emt.html\"><span style=\" text-decoration: underline; color:#0000ff;\">Mersenne Twister</span></a> by Makoto Matsumoto and Takuji Nishimura</li>\n"
"<li style=\" font-family:'Sans'; font-size:10pt;\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"http://ab-initio.mit.edu/wiki/index.php/Cubature\"><span style=\" text-decoration: underline; color:#0000ff;\">Cubature</span></a> by Steven G. Johnson</li>\n"
"<li style=\" font-family:'Sans'; font-size:10pt;\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"http://people.cs.kuleuven.be/~ares.lagae/libply/\"><span style=\" text-decoration: underline; color:#0000ff;\">libply</span></a> by Ares Lagae</li>\n"
"<li style=\" font-family:'Sans'; font-size:10pt;\" style=\" margin-top:12px; margin-bottom:12px; margin-l"
                        "eft:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"http://www.ijg.org/\"><span style=\" text-decoration: underline; color:#0000ff;\">libjpeg-turbo</span></a> by Darrell Commander and others</li>\n"
"<li style=\" font-family:'Sans'; font-size:10pt;\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"http://www.libpng.org/pub/png\"><span style=\" text-decoration: underline; color:#0000ff;\">libpng</span></a> by Guy Eric Schalnat, Andreas Dilger, Glenn Randers-Pehrson and others</li>\n"
"<li style=\" font-family:'Sans'; font-size:10pt;\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"http://www.brandonwalkin.com/bwtoolkit/\"><span style=\" text-decoration: underline; color:#0000ff;\">BWToolkit</span></a> by Brandon Walkin</li>\n"
"<li style=\" font-family:'Sans'; font-size:10pt;\" style=\" margin-top:12px; margin-bottom:12px; ma"
                        "rgin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">The <a href=\"http://www.scons.org/\"><span style=\" text-decoration: underline; color:#0000ff;\">SCons</span></a> build system by the SCons Foundation<br /></li></ul></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AcknowledgmentDialog: public Ui_AcknowledgmentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACKNOWLEDGMENTDLG_H
