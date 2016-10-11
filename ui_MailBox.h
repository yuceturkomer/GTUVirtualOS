/********************************************************************************
** Form generated from reading UI file 'MailBox.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAILBOX_H
#define UI_MAILBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MailBox
{
public:
    QPlainTextEdit *plainTextEdit;
    QTimeEdit *timeEdit;
    QRadioButton *radioButton;

    void setupUi(QWidget *MailBox)
    {
        if (MailBox->objectName().isEmpty())
            MailBox->setObjectName(QStringLiteral("MailBox"));
        MailBox->resize(899, 640);
        plainTextEdit = new QPlainTextEdit(MailBox);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 40, 861, 561));
        timeEdit = new QTimeEdit(MailBox);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));
        timeEdit->setGeometry(QRect(830, 600, 118, 24));
        radioButton = new QRadioButton(MailBox);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(290, 10, 100, 21));

        retranslateUi(MailBox);

        QMetaObject::connectSlotsByName(MailBox);
    } // setupUi

    void retranslateUi(QWidget *MailBox)
    {
        MailBox->setWindowTitle(QApplication::translate("MailBox", "MailBox", 0));
        plainTextEdit->setPlainText(QApplication::translate("MailBox", "MailBox", 0));
        radioButton->setText(QApplication::translate("MailBox", "RadioButton", 0));
    } // retranslateUi

};

namespace Ui {
    class MailBox: public Ui_MailBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAILBOX_H
