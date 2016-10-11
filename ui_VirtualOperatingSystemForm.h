/********************************************************************************
** Form generated from reading UI file 'VirtualOperatingSystemForm.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIRTUALOPERATINGSYSTEMFORM_H
#define UI_VIRTUALOPERATINGSYSTEMFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VirtualOperatingSystemForm
{
public:
    QAction *actionRestart;
    QAction *actionShutDOwn;
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *VirtualOperatingSystemForm)
    {
        if (VirtualOperatingSystemForm->objectName().isEmpty())
            VirtualOperatingSystemForm->setObjectName(QStringLiteral("VirtualOperatingSystemForm"));
        VirtualOperatingSystemForm->resize(800, 600);
        actionRestart = new QAction(VirtualOperatingSystemForm);
        actionRestart->setObjectName(QStringLiteral("actionRestart"));
        actionShutDOwn = new QAction(VirtualOperatingSystemForm);
        actionShutDOwn->setObjectName(QStringLiteral("actionShutDOwn"));
        centralwidget = new QWidget(VirtualOperatingSystemForm);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(320, 230, 111, 70));
        VirtualOperatingSystemForm->setCentralWidget(centralwidget);
        menubar = new QMenuBar(VirtualOperatingSystemForm);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        VirtualOperatingSystemForm->setMenuBar(menubar);
        statusbar = new QStatusBar(VirtualOperatingSystemForm);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        VirtualOperatingSystemForm->setStatusBar(statusbar);

        retranslateUi(VirtualOperatingSystemForm);

        QMetaObject::connectSlotsByName(VirtualOperatingSystemForm);
    } // setupUi

    void retranslateUi(QMainWindow *VirtualOperatingSystemForm)
    {
        VirtualOperatingSystemForm->setWindowTitle(QApplication::translate("VirtualOperatingSystemForm", "VirtualOperatingSystemForm", 0));
        actionRestart->setText(QApplication::translate("VirtualOperatingSystemForm", "Restart", 0));
        actionShutDOwn->setText(QApplication::translate("VirtualOperatingSystemForm", "ShutDOwn", 0));
        textEdit->setHtml(QApplication::translate("VirtualOperatingSystemForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Hello Virtual OS</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class VirtualOperatingSystemForm: public Ui_VirtualOperatingSystemForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIRTUALOPERATINGSYSTEMFORM_H
