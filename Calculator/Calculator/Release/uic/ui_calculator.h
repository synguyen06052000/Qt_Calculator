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
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalculatorClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_19;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_16;
    QPushButton *Sqrt;
    QPushButton *pushButton_5;
    QPushButton *pushButton_23;
    QPushButton *pushButton_2;
    QPushButton *pushButton_11;
    QPushButton *pushButton_9;
    QPushButton *pushButton_21;
    QPushButton *pushButton_14;
    QPushButton *pushButton_24;
    QPushButton *pushButton_18;
    QPushButton *pushButton_22;
    QPushButton *pushButton_7;
    QPushButton *pushButton_4;
    QPushButton *Pow;
    QPushButton *pushButton_10;
    QPushButton *pushButton_13;
    QPushButton *pushButton_15;
    QPushButton *pushButton_17;
    QPushButton *pushButton_8;
    QPushButton *pushButton_20;
    QPushButton *Clear;
    QPushButton *ClearAll;
    QPushButton *Backspace;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CalculatorClass)
    {
        if (CalculatorClass->objectName().isEmpty())
            CalculatorClass->setObjectName(QString::fromUtf8("CalculatorClass"));
        CalculatorClass->resize(600, 400);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CalculatorClass->sizePolicy().hasHeightForWidth());
        CalculatorClass->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(CalculatorClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_19 = new QPushButton(centralWidget);
        pushButton_19->setObjectName(QString::fromUtf8("pushButton_19"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_19->sizePolicy().hasHeightForWidth());
        pushButton_19->setSizePolicy(sizePolicy1);
        pushButton_19->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(pushButton_19, 5, 0, 1, 1);

        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(pushButton_3, 2, 2, 1, 1);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(24);
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color: gray;\n"
"	border: 1px solid gray;\n"
"	color:#ffffff;\n"
"}"));
        lineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lineEdit, 0, 0, 1, 6);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(pushButton, 2, 0, 1, 1);

        pushButton_16 = new QPushButton(centralWidget);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        sizePolicy1.setHeightForWidth(pushButton_16->sizePolicy().hasHeightForWidth());
        pushButton_16->setSizePolicy(sizePolicy1);
        pushButton_16->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(pushButton_16, 4, 3, 1, 1);

        Sqrt = new QPushButton(centralWidget);
        Sqrt->setObjectName(QString::fromUtf8("Sqrt"));
        sizePolicy1.setHeightForWidth(Sqrt->sizePolicy().hasHeightForWidth());
        Sqrt->setSizePolicy(sizePolicy1);
        Sqrt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(Sqrt, 2, 5, 1, 1);

        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy1.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy1);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(pushButton_5, 2, 4, 1, 1);

        pushButton_23 = new QPushButton(centralWidget);
        pushButton_23->setObjectName(QString::fromUtf8("pushButton_23"));
        sizePolicy1.setHeightForWidth(pushButton_23->sizePolicy().hasHeightForWidth());
        pushButton_23->setSizePolicy(sizePolicy1);
        pushButton_23->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(pushButton_23, 5, 4, 1, 1);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(pushButton_2, 2, 1, 1, 1);

        pushButton_11 = new QPushButton(centralWidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        sizePolicy1.setHeightForWidth(pushButton_11->sizePolicy().hasHeightForWidth());
        pushButton_11->setSizePolicy(sizePolicy1);
        pushButton_11->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(pushButton_11, 3, 4, 1, 1);

        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        sizePolicy1.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy1);
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(pushButton_9, 3, 2, 1, 1);

        pushButton_21 = new QPushButton(centralWidget);
        pushButton_21->setObjectName(QString::fromUtf8("pushButton_21"));
        sizePolicy1.setHeightForWidth(pushButton_21->sizePolicy().hasHeightForWidth());
        pushButton_21->setSizePolicy(sizePolicy1);
        pushButton_21->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(pushButton_21, 5, 2, 1, 1);

        pushButton_14 = new QPushButton(centralWidget);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        sizePolicy1.setHeightForWidth(pushButton_14->sizePolicy().hasHeightForWidth());
        pushButton_14->setSizePolicy(sizePolicy1);
        pushButton_14->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(pushButton_14, 4, 1, 1, 1);

        pushButton_24 = new QPushButton(centralWidget);
        pushButton_24->setObjectName(QString::fromUtf8("pushButton_24"));
        sizePolicy1.setHeightForWidth(pushButton_24->sizePolicy().hasHeightForWidth());
        pushButton_24->setSizePolicy(sizePolicy1);
        pushButton_24->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(pushButton_24, 5, 5, 1, 1);

        pushButton_18 = new QPushButton(centralWidget);
        pushButton_18->setObjectName(QString::fromUtf8("pushButton_18"));
        sizePolicy1.setHeightForWidth(pushButton_18->sizePolicy().hasHeightForWidth());
        pushButton_18->setSizePolicy(sizePolicy1);
        pushButton_18->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(pushButton_18, 4, 5, 1, 1);

        pushButton_22 = new QPushButton(centralWidget);
        pushButton_22->setObjectName(QString::fromUtf8("pushButton_22"));
        sizePolicy1.setHeightForWidth(pushButton_22->sizePolicy().hasHeightForWidth());
        pushButton_22->setSizePolicy(sizePolicy1);
        pushButton_22->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(pushButton_22, 5, 3, 1, 1);

        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        sizePolicy1.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy1);
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(pushButton_7, 3, 0, 1, 1);

        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy1.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy1);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(pushButton_4, 2, 3, 1, 1);

        Pow = new QPushButton(centralWidget);
        Pow->setObjectName(QString::fromUtf8("Pow"));
        sizePolicy1.setHeightForWidth(Pow->sizePolicy().hasHeightForWidth());
        Pow->setSizePolicy(sizePolicy1);
        Pow->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(Pow, 3, 5, 1, 1);

        pushButton_10 = new QPushButton(centralWidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        sizePolicy1.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy1);
        pushButton_10->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(pushButton_10, 3, 3, 1, 1);

        pushButton_13 = new QPushButton(centralWidget);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        sizePolicy1.setHeightForWidth(pushButton_13->sizePolicy().hasHeightForWidth());
        pushButton_13->setSizePolicy(sizePolicy1);
        pushButton_13->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(pushButton_13, 4, 0, 1, 1);

        pushButton_15 = new QPushButton(centralWidget);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        sizePolicy1.setHeightForWidth(pushButton_15->sizePolicy().hasHeightForWidth());
        pushButton_15->setSizePolicy(sizePolicy1);
        pushButton_15->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(pushButton_15, 4, 2, 1, 1);

        pushButton_17 = new QPushButton(centralWidget);
        pushButton_17->setObjectName(QString::fromUtf8("pushButton_17"));
        sizePolicy1.setHeightForWidth(pushButton_17->sizePolicy().hasHeightForWidth());
        pushButton_17->setSizePolicy(sizePolicy1);
        pushButton_17->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(pushButton_17, 4, 4, 1, 1);

        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy1.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy1);
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(pushButton_8, 3, 1, 1, 1);

        pushButton_20 = new QPushButton(centralWidget);
        pushButton_20->setObjectName(QString::fromUtf8("pushButton_20"));
        sizePolicy1.setHeightForWidth(pushButton_20->sizePolicy().hasHeightForWidth());
        pushButton_20->setSizePolicy(sizePolicy1);
        pushButton_20->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(pushButton_20, 5, 1, 1, 1);

        Clear = new QPushButton(centralWidget);
        Clear->setObjectName(QString::fromUtf8("Clear"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Clear->sizePolicy().hasHeightForWidth());
        Clear->setSizePolicy(sizePolicy2);
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

        gridLayout->addWidget(Clear, 1, 4, 1, 1);

        ClearAll = new QPushButton(centralWidget);
        ClearAll->setObjectName(QString::fromUtf8("ClearAll"));
        sizePolicy2.setHeightForWidth(ClearAll->sizePolicy().hasHeightForWidth());
        ClearAll->setSizePolicy(sizePolicy2);
        ClearAll->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(ClearAll, 1, 5, 1, 1);

        Backspace = new QPushButton(centralWidget);
        Backspace->setObjectName(QString::fromUtf8("Backspace"));
        sizePolicy2.setHeightForWidth(Backspace->sizePolicy().hasHeightForWidth());
        Backspace->setSizePolicy(sizePolicy2);
        Backspace->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(Backspace, 1, 0, 1, 1);

        CalculatorClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(CalculatorClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 22));
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
        pushButton_19->setText(QCoreApplication::translate("CalculatorClass", "M+", nullptr));
        pushButton_3->setText(QCoreApplication::translate("CalculatorClass", "8", nullptr));
        lineEdit->setText(QCoreApplication::translate("CalculatorClass", "0.0", nullptr));
        pushButton->setText(QCoreApplication::translate("CalculatorClass", "MC", nullptr));
        pushButton_16->setText(QCoreApplication::translate("CalculatorClass", "3", nullptr));
        Sqrt->setText(QCoreApplication::translate("CalculatorClass", "Sqrt", nullptr));
        pushButton_5->setText(QCoreApplication::translate("CalculatorClass", "/", nullptr));
        pushButton_23->setText(QCoreApplication::translate("CalculatorClass", "+", nullptr));
        pushButton_2->setText(QCoreApplication::translate("CalculatorClass", "7", nullptr));
        pushButton_11->setText(QCoreApplication::translate("CalculatorClass", "x", nullptr));
        pushButton_9->setText(QCoreApplication::translate("CalculatorClass", "5", nullptr));
        pushButton_21->setText(QCoreApplication::translate("CalculatorClass", ".", nullptr));
        pushButton_14->setText(QCoreApplication::translate("CalculatorClass", "1", nullptr));
        pushButton_24->setText(QCoreApplication::translate("CalculatorClass", "=", nullptr));
        pushButton_18->setText(QCoreApplication::translate("CalculatorClass", "1/x", nullptr));
        pushButton_22->setText(QCoreApplication::translate("CalculatorClass", "+/-", nullptr));
        pushButton_7->setText(QCoreApplication::translate("CalculatorClass", "MR", nullptr));
        pushButton_4->setText(QCoreApplication::translate("CalculatorClass", "9", nullptr));
        Pow->setText(QCoreApplication::translate("CalculatorClass", "x^2", nullptr));
        pushButton_10->setText(QCoreApplication::translate("CalculatorClass", "6", nullptr));
        pushButton_13->setText(QCoreApplication::translate("CalculatorClass", "MS", nullptr));
        pushButton_15->setText(QCoreApplication::translate("CalculatorClass", "2", nullptr));
        pushButton_17->setText(QCoreApplication::translate("CalculatorClass", "-", nullptr));
        pushButton_8->setText(QCoreApplication::translate("CalculatorClass", "4", nullptr));
        pushButton_20->setText(QCoreApplication::translate("CalculatorClass", "0", nullptr));
        Clear->setText(QCoreApplication::translate("CalculatorClass", "Clear", nullptr));
        ClearAll->setText(QCoreApplication::translate("CalculatorClass", "Clear All", nullptr));
        Backspace->setText(QCoreApplication::translate("CalculatorClass", "Backspace", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CalculatorClass: public Ui_CalculatorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
