/********************************************************************************
** Form generated from reading UI file 'button.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUTTON_H
#define UI_BUTTON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_button
{
public:

    void setupUi(QWidget *button)
    {
        if (button->objectName().isEmpty())
            button->setObjectName(QString::fromUtf8("button"));
        button->resize(400, 300);

        retranslateUi(button);

        QMetaObject::connectSlotsByName(button);
    } // setupUi

    void retranslateUi(QWidget *button)
    {
        button->setWindowTitle(QCoreApplication::translate("button", "button", nullptr));
    } // retranslateUi

};

namespace Ui {
    class button: public Ui_button {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUTTON_H
