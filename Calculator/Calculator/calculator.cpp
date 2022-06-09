#include "calculator.h"
#include<qmessagebox.h>
double calcVal = 0.0;
bool divTrigger = false;
bool multTrigger = false;
bool addTrigger = false;
bool subTrigger = false;
QString string_history;
Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::CalculatorClass)
{
    ui->setupUi(this);
    ui->Display->setText(QString::number(calcVal));
    QPushButton* numButtons[10];
    for (int i = 0; i < 10; i++) {
        QString butName = "Button" + QString::number(i);
        numButtons[i] = Calculator::findChild<QPushButton*>(butName);
        connect(numButtons[i], SIGNAL(released()), this, SLOT(NumPressed()));
    }
    connect(ui->Add, SIGNAL(released()), this, SLOT(MathButtonPress()));
    connect(ui->Subtract, SIGNAL(released()), this, SLOT(MathButtonPress()));
    connect(ui->Multiply, SIGNAL(released()), this, SLOT(MathButtonPress()));
    connect(ui->Divide, SIGNAL(released()), this, SLOT(MathButtonPress()));

    connect(ui->Equals, SIGNAL(released()), this, SLOT(EqualButton()));
    connect(ui->ChangeSign, SIGNAL(released()), this, SLOT(ChangeNumberSign()));
    connect(ui->Clear, SIGNAL(released()), this, SLOT(Clear()));
    connect(ui->ClearHistory, SIGNAL(released()), this, SLOT(ClearHistory()));
    connect(ui->PhanSo, SIGNAL(released()), this, SLOT(PhanSo()));

}
Calculator::~Calculator() {
    delete ui;
}
void Calculator::NumPressed() {
    QPushButton* button = (QPushButton*)sender();
    QString butval = button->text();
    string_history += butval;
    QString displayVal = ui->Display->text();
    if (displayVal.toDouble() == 0 || (displayVal.toDouble() == 0.0)) {
        ui->Display->setText(butval);

    }
    else {
        QString newVal = displayVal + butval;
        double dblNewVal = newVal.toDouble();
        ui->Display->setText(QString::number(dblNewVal, 'g', 16));
        
    }
}
void Calculator::MathButtonPress() {
    divTrigger = false;
    multTrigger = false;
    addTrigger = false;
    subTrigger = false;
    QString displayVal = ui->Display->text();
    calcVal = displayVal.toDouble();
    QPushButton* button = (QPushButton*)sender();
    QString butVal = button->text();

    if (QString::compare(butVal, "/", Qt::CaseInsensitive) == 0) {
        divTrigger = true;
    }
    else if (QString::compare(butVal, "x", Qt::CaseInsensitive) == 0) {
        multTrigger = true;
    }
    else if (QString::compare(butVal, "+", Qt::CaseInsensitive) == 0) {
        addTrigger = true;
    }
    else {
        subTrigger = true;
    }
    string_history += butVal;
    // Clear display
    ui->Display->setText("");
}
void Calculator::EqualButton() {
    double solution = 0.0;
    QString disVal = ui->Display->text();
    double displayVal = disVal.toDouble();
    if (divTrigger || multTrigger || addTrigger || subTrigger) {
        if (divTrigger) {
            solution = calcVal / displayVal;
        }
        else if (multTrigger) {
            solution = calcVal * displayVal;
        }
        else if (addTrigger) {
            solution = calcVal + displayVal;
        }
        else {
            solution = calcVal - displayVal;
        }
    }
    ui->Display->setText(QString::number(solution));

    calcVal = 0.0;
    string_history += ("=" + QString::number(solution));
    ui->listWidget->addItem(string_history);
    string_history = "";
}
void Calculator::ChangeNumberSign() {
    QString displayVal = ui->Display->text();
    QRegExp reg("[-]?[0-9.]*");
    if (reg.exactMatch(displayVal)) {
        double dbldisplayVal = displayVal.toDouble();
        double dbldisplayValSign = -1 * dbldisplayVal;
        ui->Display->setText(QString::number(dbldisplayValSign));
    }
}
void Calculator::Clear() {
    calcVal = 0.0;
    divTrigger = false;
    multTrigger = false;
    addTrigger = false;
    subTrigger = false;
    ui->Display->setText(QString::number(calcVal));
}
void Calculator::ClearHistory() {
    ui->listWidget->clear();
}
void Calculator::LuyThua() {
    QString displayVal = ui->Display->text();
    double value = displayVal.toDouble();
    double result = value * value;
    ui->Display->setText(QString::number(result));
    string_history = displayVal +"^2" + "=" + QString::number(result);
    ui->listWidget->addItem(string_history);
    string_history = "";
}
void Calculator::CanBacHai() {
    QString displayVal = ui->Display->text();
    double value = displayVal.toDouble();
    double result = sqrt(value);
    ui->Display->setText(QString::number(result));
    string_history = "sqrt(" + displayVal + ")=" + QString::number(result);
    ui->listWidget->addItem(string_history);
    string_history = "";
}
void Calculator::PhanSo() {
    QString displayVal = ui->Display->text();
    double value = displayVal.toDouble();
    double result = 1 / value;
    ui->Display->setText(QString::number(result));
    string_history = "1/" + displayVal+"="+QString::number(result);
    ui->listWidget->addItem(string_history);
    string_history = "";
}