#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_calculator.h"

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    explicit Calculator(QWidget *parent = Q_NULLPTR);
    ~Calculator();
private:
    Ui::CalculatorClass *ui;
private slots:
    void NumPressed();
    void MathButtonPress();
    void EqualButton();
    void ChangeNumberSign();
    void Clear();
    void ClearHistory();
    void LuyThua();
    void CanBacHai();
    void PhanSo();
};
