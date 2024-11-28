#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow), novoCalculo(true)
{
    ui->setupUi(this);

    // Conectar botões numéricos
    connect(ui->btn0, &QPushButton::clicked, this, &MainWindow::handleNumberButtonClick);
    connect(ui->btn1, &QPushButton::clicked, this, &MainWindow::handleNumberButtonClick);
    connect(ui->btn2, &QPushButton::clicked, this, &MainWindow::handleNumberButtonClick);
    connect(ui->btn3, &QPushButton::clicked, this, &MainWindow::handleNumberButtonClick);
    connect(ui->btn4, &QPushButton::clicked, this, &MainWindow::handleNumberButtonClick);
    connect(ui->btn5, &QPushButton::clicked, this, &MainWindow::handleNumberButtonClick);
    connect(ui->btn6, &QPushButton::clicked, this, &MainWindow::handleNumberButtonClick);
    connect(ui->btn7, &QPushButton::clicked, this, &MainWindow::handleNumberButtonClick);
    connect(ui->btn8, &QPushButton::clicked, this, &MainWindow::handleNumberButtonClick);
    connect(ui->btn9, &QPushButton::clicked, this, &MainWindow::handleNumberButtonClick);

    // Conectar botões de operações
    connect(ui->btnAdd, &QPushButton::clicked, this, &MainWindow::handleOperationButtonClick);
    connect(ui->btnSub, &QPushButton::clicked, this, &MainWindow::handleOperationButtonClick);
    connect(ui->btnMul, &QPushButton::clicked, this, &MainWindow::handleOperationButtonClick);
    connect(ui->btnDiv, &QPushButton::clicked, this, &MainWindow::handleOperationButtonClick);

    // Conectar botões de igual e limpar
    connect(ui->btnIgual, &QPushButton::clicked, this, &MainWindow::calculateResult);
    connect(ui->btnLimpar, &QPushButton::clicked, this, &MainWindow::clearDisplay);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleNumberButtonClick()
{
    QPushButton *botao = qobject_cast<QPushButton *>(sender());

    if (botao) {
        if (novoCalculo) {
            ui->display->setText(botao->text());
            novoCalculo = false;
        } else {
            ui->display->setText(ui->display->text() + botao->text());
        }
    }
}

void MainWindow::handleOperationButtonClick()
{
    QPushButton *botao = qobject_cast<QPushButton *>(sender());

    if (botao) {
        calculadora.setValorAtual(ui->display->text().toDouble());
        calculadora.setOperacao(botao->text());
        novoCalculo = true;
    }
}

void MainWindow::calculateResult()
{
    double segundoValor = ui->display->text().toDouble();
    double resultado = calculadora.calcular(segundoValor);
    ui->display->setText(QString::number(resultado));
    novoCalculo = true;
}

void MainWindow::clearDisplay()
{
    ui->display->clear();
    calculadora.setValorAtual(0);
    calculadora.setOperacao("");
    novoCalculo = true;
}
