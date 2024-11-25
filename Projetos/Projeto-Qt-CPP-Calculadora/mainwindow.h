#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>  // Inclui a biblioteca principal para criação de janelas do Qt
#include "calculadora.h"  // Inclui a classe Calculadora para lidar com operações de cálculo

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }  // Declaração da interface gráfica (UI) criada pelo Qt Designer
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT  // Macro do Qt que habilita o sistema de sinais e slots

public:
    MainWindow(QWidget *parent = nullptr);  // Construtor da classe
    ~MainWindow();  // Destrutor da classe

private slots:
    // Slots (métodos) para lidar com os cliques dos botões na interface
    void handleNumberButtonClick();   // Para os botões numéricos
    void handleOperationButtonClick(); // Para os botões de operação
    void calculateResult();           // Para o botão de igual
    void clearDisplay();              // Para o botão de limpar


private:
    Ui::MainWindow *ui;  // Ponteiro para a interface gráfica
    Calculadora calculadora;  // Instância da classe Calculadora para manipular operações
    bool novoCalculo;  // Indica quando um novo cálculo deve começar
};

#endif // MAINWINDOW_H
