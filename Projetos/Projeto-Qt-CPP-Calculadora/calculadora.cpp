#include "calculadora.h"

// Construtor padrão
Calculadora::Calculadora() : valorAtual(0), operacao("") {}

// Define a operação matemática a ser realizada
void Calculadora::setOperacao(const QString &op) {
    operacao = op;
}

// Define o valor atual armazenado
void Calculadora::setValorAtual(double valor) {
    valorAtual = valor;
}

// Realiza o cálculo com base na operação configurada
double Calculadora::calcular(double segundoValor) {
    if (operacao == "+") {
        return valorAtual + segundoValor;
    } else if (operacao == "-") {
        return valorAtual - segundoValor;
    } else if (operacao == "*") {
        return valorAtual * segundoValor;
    } else if (operacao == "/") {
        return (segundoValor != 0) ? valorAtual / segundoValor : 0; // Evita divisão por zero
    }

    // Caso nenhuma operação seja definida, retorna o segundo valor
    return segundoValor;
}
