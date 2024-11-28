#ifndef CALCULADORA_H
#define CALCULADORA_H

#include <QString>

class Calculadora {
private:
    double valorAtual;
    QString operacao;

public:
    Calculadora();  // Declaração do construtor
    void setOperacao(const QString &op);
    void setValorAtual(double valor);
    double calcular(double segundoValor);
};

#endif // CALCULADORA_H
