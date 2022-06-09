/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalculatorClass
{
public:
    QAction *actionHistory;
    QAction *actionExit;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QPushButton *Multiply;
    QPushButton *Button9;
    QPushButton *Button5;
    QPushButton *Add;
    QPushButton *Button4;
    QPushButton *Divide;
    QPushButton *MemClear;
    QPushButton *Equals;
    QPushButton *ClearHistory;
    QPushButton *Subtract;
    QPushButton *Button2;
    QPushButton *Button8;
    QPushButton *Clear;
    QPushButton *ChangeSign;
    QPushButton *Button1;
    QPushButton *MemGet;
    QPushButton *Button6;
    QPushButton *Button3;
    QPushButton *Button0;
    QPushButton *Button7;
    QListWidget *listWidget;
    QLineEdit *Display;
    QPushButton *PhanSo;
    QPushButton *LuyThua;
    QPushButton *Sqrt;
    QPushButton *Mod;
    QPushButton *pushButton_5;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CalculatorClass)
    {
        if (CalculatorClass->objectName().isEmpty())
            CalculatorClass->setObjectName(QString::fromUtf8("CalculatorClass"));
        CalculatorClass->resize(601, 456);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CalculatorClass->sizePolicy().hasHeightForWidth());
        CalculatorClass->setSizePolicy(sizePolicy);
        actionHistory = new QAction(CalculatorClass);
        actionHistory->setObjectName(QString::fromUtf8("actionHistory"));
        actionExit = new QAction(CalculatorClass);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralWidget = new QWidget(CalculatorClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Multiply = new QPushButton(centralWidget);
        Multiply->setObjectName(QString::fromUtf8("Multiply"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Multiply->sizePolicy().hasHeightForWidth());
        Multiply->setSizePolicy(sizePolicy1);
        Multiply->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"		background-color: #1BA1E2;\n"
"		border: 1px solid gray;\n"
"		padding:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"		background-color: #A9A9A9;\n"
"		border: 1px solid gray;\n"
"		padding:5px;\n"
"}\n"
""));

        gridLayout->addWidget(Multiply, 3, 3, 1, 1);

        Button9 = new QPushButton(centralWidget);
        Button9->setObjectName(QString::fromUtf8("Button9"));
        sizePolicy1.setHeightForWidth(Button9->sizePolicy().hasHeightForWidth());
        Button9->setSizePolicy(sizePolicy1);
        Button9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"		background-color: #C0C0C0;\n"
"		border: 1px solid gray;\n"
"		padding:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"		background-color: #A9A9A9;\n"
"		border: 1px solid gray;\n"
"		padding:5px;\n"
"}\n"
""));

        gridLayout->addWidget(Button9, 2, 2, 1, 1);

        Button5 = new QPushButton(centralWidget);
        Button5->setObjectName(QString::fromUtf8("Button5"));
        sizePolicy1.setHeightForWidth(Button5->sizePolicy().hasHeightForWidth());
        Button5->setSizePolicy(sizePolicy1);
        Button5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"		background-color: #C0C0C0;\n"
"		border: 1px solid gray;\n"
"		padding:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"		background-color: #A9A9A9;\n"
"		border: 1px solid gray;\n"
"		padding:5px;\n"
"}\n"
""));

        gridLayout->addWidget(Button5, 3, 1, 1, 1);

        Add = new QPushButton(centralWidget);
        Add->setObjectName(QString::fromUtf8("Add"));
        sizePolicy1.setHeightForWidth(Add->sizePolicy().hasHeightForWidth());
        Add->setSizePolicy(sizePolicy1);
        Add->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"		background-color: #1BA1E2;\n"
"		border: 1px solid gray;\n"
"		padding:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"		background-color: #A9A9A9;\n"
"		border: 1px solid gray;\n"
"		padding:5px;\n"
"}\n"
""));

        gridLayout->addWidget(Add, 5, 3, 1, 1);

        Button4 = new QPushButton(centralWidget);
        Button4->setObjectName(QString::fromUtf8("Button4"));
        sizePolicy1.setHeightForWidth(Button4->sizePolicy().hasHeightForWidth());
        Button4->setSizePolicy(sizePolicy1);
        Button4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"		background-color: #C0C0C0;\n"
"		border: 1px solid gray;\n"
"		padding:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"		background-color: #A9A9A9;\n"
"		border: 1px solid gray;\n"
"		padding:5px;\n"
"}\n"
""));

        gridLayout->addWidget(Button4, 3, 0, 1, 1);

        Divide = new QPushButton(centralWidget);
        Divide->setObjectName(QString::fromUtf8("Divide"));
        sizePolicy1.setHeightForWidth(Divide->sizePolicy().hasHeightForWidth());
        Divide->setSizePolicy(sizePolicy1);
        Divide->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"		background-color: #1BA1E2;\n"
"		border: 1px solid gray;\n"
"		padding:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"		background-color: #A9A9A9;\n"
"		border: 1px solid gray;\n"
"		padding:5px;\n"
"}\n"
""));

        gridLayout->addWidget(Divide, 2, 3, 1, 1);

        MemClear = new QPushButton(centralWidget);
        MemClear->setObjectName(QString::fromUtf8("MemClear"));
        sizePolicy1.setHeightForWidth(MemClear->sizePolicy().hasHeightForWidth());
        MemClear->setSizePolicy(sizePolicy1);
        MemClear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"		background-color: #1BA1E2;\n"
"		border: 1px solid gray;\n"
"		padding:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"		background-color: #A9A9A9;\n"
"		border: 1px solid gray;\n"
"		padding:5px;\n"
"}\n"
""));

        gridLayout->addWidget(MemClear, 3, 4, 1, 1);

        Equals = new QPushButton(centralWidget);
        Equals->setObjectName(QString::fromUtf8("Equals"));
        sizePolicy1.setHeightForWidth(Equals->sizePolicy().hasHeightForWidth());
        Equals->setSizePolicy(sizePolicy1);
        Equals->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"		background-color: #1BA1E2;\n"
"		border: 1px solid gray;\n"
"		padding:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"		background-color: #A9A9A9;\n"
"		border: 1px solid gray;\n"
"		padding:5px;\n"
"}\n"
""));

        gridLayout->addWidget(Equals, 5, 4, 1, 1);

        ClearHistory = new QPushButton(centralWidget);
        ClearHistory->setObjectName(QString::fromUtf8("ClearHistory"));
        sizePolicy1.setHeightForWidth(ClearHistory->sizePolicy().hasHeightForWidth());
        ClearHistory->setSizePolicy(sizePolicy1);
        ClearHistory->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"		background-color: #1BA1E2;\n"
"		border: 1px solid gray;\n"
"		padding:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"		background-color: #A9A9A9;\n"
"		border: 1px solid gray;\n"
"		padding:5px;\n"
"}\n"
""));

        gridLayout->addWidget(ClearHistory, 2, 4, 1, 1);

        Subtract = new QPushButton(centralWidget);
        Subtract->setObjectName(QString::fromUtf8("Subtract"));
        sizePolicy1.setHeightForWidth(Subtract->sizePolicy().hasHeightForWidth());
        Subtract->setSizePolicy(sizePolicy1);
        Subtract->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"		background-color: #1BA1E2;\n"
"		border: 1px solid gray;\n"
"		padding:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"		background-color: #A9A9A9;\n"
"		border: 1px solid gray;\n"
"		padding:5px;\n"
"}\n"
""));

        gridLayout->addWidget(Subtract, 4, 3, 1, 1);

        Button2 = new QPushButton(centralWidget);
        Button2->setObjectName(QString::fromUtf8("Button2"));
        sizePolicy1.setHeightForWidth(Button2->sizePolicy().hasHeightForWidth());
        Button2->setSizePolicy(sizePolicy1);
        Button2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"		background-color: #C0C0C0;\n"
"		border: 1px solid gray;\n"
"		padding:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"		background-color: #A9A9A9;\n"
"		border: 1px solid gray;\n"
"		padding:5px;\n"
"}\n"
""));

        gridLayout->addWidget(Button2, 4, 1, 1, 1);

        Button8 = new QPushButton(centralWidget);
        Button8->setObjectName(QString::fromUtf8("Button8"));
        sizePolicy1.setHeightForWidth(Button8->sizePolicy().hasHeightForWidth());
        Button8->setSizePolicy(sizePolicy1);
        Button8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"		background-color: #C0C0C0;\n"
"		border: 1px solid gray;\n"
"		padding:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"		background-color: #A9A9A9;\n"
"		border: 1px solid gray;\n"
"		padding:5px;\n"
"}\n"
""));

        gridLayout->addWidget(Button8, 2, 1, 1, 1);

        Clear = new QPushButton(centralWidget);
        Clear->setObjectName(QString::fromUtf8("Clear"));
        sizePolicy1.setHeightForWidth(Clear->sizePolicy().hasHeightForWidth());
        Clear->setSizePolicy(sizePolicy1);
        Clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"		background-color: #C0C0C0;\n"
"		border: 1px solid gray;\n"
"		padding:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"		background-color: #A9A9A9;\n"
"		border: 1px solid gray;\n"
"		padding:5px;\n"
"}\n"
""));

        gridLayout->addWidget(Clear, 5, 0, 1, 1);

        ChangeSign = new QPushButton(centralWidget);
        ChangeSign->setObjectName(QString::fromUtf8("ChangeSign"));
        sizePolicy1.setHeightForWidth(ChangeSign->sizePolicy().hasHeightForWidth());
        ChangeSign->setSizePolicy(sizePolicy1);
        ChangeSign->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"		background-color: #C0C0C0;\n"
"		border: 1px solid gray;\n"
"		padding:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"		background-color: #A9A9A9;\n"
"		border: 1px solid gray;\n"
"		padding:5px;\n"
"}\n"
""));

        gridLayout->addWidget(ChangeSign, 5, 2, 1, 1);

        Button1 = new QPushButton(centralWidget);
        Button1->setObjectName(QString::fromUtf8("Button1"));
        sizePolicy1.setHeightForWidth(Button1->sizePolicy().hasHeightForWidth());
        Button1->setSizePolicy(sizePolicy1);
        Button1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"		background-color: #C0C0C0;\n"
"		border: 1px solid gray;\n"
"		padding:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"		background-color: #A9A9A9;\n"
"		border: 1px solid gray;\n"
"		padding:5px;\n"
"}\n"
""));

        gridLayout->addWidget(Button1, 4, 0, 1, 1);

        MemGet = new QPushButton(centralWidget);
        MemGet->setObjectName(QString::fromUtf8("MemGet"));
        sizePolicy1.setHeightForWidth(MemGet->sizePolicy().hasHeightForWidth());
        MemGet->setSizePolicy(sizePolicy1);
        MemGet->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"		background-color: #1BA1E2;\n"
"		border: 1px solid gray;\n"
"		padding:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"		background-color: #A9A9A9;\n"
"		border: 1px solid gray;\n"
"		padding:5px;\n"
"}\n"
""));

        gridLayout->addWidget(MemGet, 4, 4, 1, 1);

        Button6 = new QPushButton(centralWidget);
        Button6->setObjectName(QString::fromUtf8("Button6"));
        sizePolicy1.setHeightForWidth(Button6->sizePolicy().hasHeightForWidth());
        Button6->setSizePolicy(sizePolicy1);
        Button6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"		background-color: #C0C0C0;\n"
"		border: 1px solid gray;\n"
"		padding:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"		background-color: #A9A9A9;\n"
"		border: 1px solid gray;\n"
"		padding:5px;\n"
"}\n"
""));

        gridLayout->addWidget(Button6, 3, 2, 1, 1);

        Button3 = new QPushButton(centralWidget);
        Button3->setObjectName(QString::fromUtf8("Button3"));
        sizePolicy1.setHeightForWidth(Button3->sizePolicy().hasHeightForWidth());
        Button3->setSizePolicy(sizePolicy1);
        Button3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"		background-color: #C0C0C0;\n"
"		border: 1px solid gray;\n"
"		padding:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"		background-color: #A9A9A9;\n"
"		border: 1px solid gray;\n"
"		padding:5px;\n"
"}\n"
""));

        gridLayout->addWidget(Button3, 4, 2, 1, 1);

        Button0 = new QPushButton(centralWidget);
        Button0->setObjectName(QString::fromUtf8("Button0"));
        sizePolicy1.setHeightForWidth(Button0->sizePolicy().hasHeightForWidth());
        Button0->setSizePolicy(sizePolicy1);
        Button0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"		background-color: #C0C0C0;\n"
"		border: 1px solid gray;\n"
"		padding:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"		background-color: #A9A9A9;\n"
"		border: 1px solid gray;\n"
"		padding:5px;\n"
"}\n"
""));

        gridLayout->addWidget(Button0, 5, 1, 1, 1);

        Button7 = new QPushButton(centralWidget);
        Button7->setObjectName(QString::fromUtf8("Button7"));
        sizePolicy1.setHeightForWidth(Button7->sizePolicy().hasHeightForWidth());
        Button7->setSizePolicy(sizePolicy1);
        Button7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"		background-color: #C0C0C0;\n"
"		border: 1px solid gray;\n"
"		padding:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"		background-color: #A9A9A9;\n"
"		border: 1px solid gray;\n"
"		padding:5px;\n"
"}\n"
""));

        gridLayout->addWidget(Button7, 2, 0, 1, 1);

        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        gridLayout->addWidget(listWidget, 1, 0, 1, 5);

        Display = new QLineEdit(centralWidget);
        Display->setObjectName(QString::fromUtf8("Display"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy2);
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(24);
        Display->setFont(font);
        Display->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color: gray;\n"
"	border: 1px solid gray;\n"
"	color:#ffffff;\n"
"}"));
        Display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(Display, 0, 0, 1, 5);

        PhanSo = new QPushButton(centralWidget);
        PhanSo->setObjectName(QString::fromUtf8("PhanSo"));

        gridLayout->addWidget(PhanSo, 6, 0, 1, 1);

        LuyThua = new QPushButton(centralWidget);
        LuyThua->setObjectName(QString::fromUtf8("LuyThua"));

        gridLayout->addWidget(LuyThua, 6, 1, 1, 1);

        Sqrt = new QPushButton(centralWidget);
        Sqrt->setObjectName(QString::fromUtf8("Sqrt"));

        gridLayout->addWidget(Sqrt, 6, 2, 1, 1);

        Mod = new QPushButton(centralWidget);
        Mod->setObjectName(QString::fromUtf8("Mod"));

        gridLayout->addWidget(Mod, 6, 3, 1, 1);

        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        gridLayout->addWidget(pushButton_5, 6, 4, 1, 1);

        CalculatorClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(CalculatorClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 601, 22));
        CalculatorClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(CalculatorClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        CalculatorClass->setStatusBar(statusBar);

        retranslateUi(CalculatorClass);

        QMetaObject::connectSlotsByName(CalculatorClass);
    } // setupUi

    void retranslateUi(QMainWindow *CalculatorClass)
    {
        CalculatorClass->setWindowTitle(QCoreApplication::translate("CalculatorClass", "Calculator", nullptr));
        actionHistory->setText(QCoreApplication::translate("CalculatorClass", "History", nullptr));
        actionExit->setText(QCoreApplication::translate("CalculatorClass", "Exit", nullptr));
        Multiply->setText(QCoreApplication::translate("CalculatorClass", "x", nullptr));
        Button9->setText(QCoreApplication::translate("CalculatorClass", "9", nullptr));
        Button5->setText(QCoreApplication::translate("CalculatorClass", "5", nullptr));
        Add->setText(QCoreApplication::translate("CalculatorClass", "+", nullptr));
        Button4->setText(QCoreApplication::translate("CalculatorClass", "4", nullptr));
        Divide->setText(QCoreApplication::translate("CalculatorClass", "/", nullptr));
        MemClear->setText(QCoreApplication::translate("CalculatorClass", "M-", nullptr));
        Equals->setText(QCoreApplication::translate("CalculatorClass", "=", nullptr));
        ClearHistory->setText(QCoreApplication::translate("CalculatorClass", "Clear", nullptr));
        Subtract->setText(QCoreApplication::translate("CalculatorClass", "-", nullptr));
        Button2->setText(QCoreApplication::translate("CalculatorClass", "2", nullptr));
        Button8->setText(QCoreApplication::translate("CalculatorClass", "8", nullptr));
        Clear->setText(QCoreApplication::translate("CalculatorClass", "AC", nullptr));
        ChangeSign->setText(QCoreApplication::translate("CalculatorClass", "+/-", nullptr));
        Button1->setText(QCoreApplication::translate("CalculatorClass", "1", nullptr));
        MemGet->setText(QCoreApplication::translate("CalculatorClass", "M", nullptr));
        Button6->setText(QCoreApplication::translate("CalculatorClass", "6", nullptr));
        Button3->setText(QCoreApplication::translate("CalculatorClass", "3", nullptr));
        Button0->setText(QCoreApplication::translate("CalculatorClass", "0", nullptr));
        Button7->setText(QCoreApplication::translate("CalculatorClass", "7", nullptr));
        Display->setText(QCoreApplication::translate("CalculatorClass", "0.0", nullptr));
        PhanSo->setText(QCoreApplication::translate("CalculatorClass", "1/x", nullptr));
        LuyThua->setText(QCoreApplication::translate("CalculatorClass", "x^2", nullptr));
        Sqrt->setText(QCoreApplication::translate("CalculatorClass", "sqrt(x)", nullptr));
        Mod->setText(QCoreApplication::translate("CalculatorClass", "%", nullptr));
        pushButton_5->setText(QCoreApplication::translate("CalculatorClass", "<<<", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CalculatorClass: public Ui_CalculatorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
