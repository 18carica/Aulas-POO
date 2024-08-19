/* Programa 23 */
/*23. Escreva um programa que leia um numero inteiro menos que 1000 e imprima a quantidade de centenas, dezenas e unidades que ele possui. Observe os termos no plural e a colocação do “e”, e da vírgula, entre outros.
Exemplo:
A. 326 = 3 centenas, 2 dezenas e 6 unidades
B. 12 = 1 dezena e 2 unidades
Teste o programa com as seguintes entradas: 326, 300, 100, 320, 310,305, 301, 101, 311, 111, 25, 20, 10, 21, 11, 1, 7 e 16. */
// exercicio23.cpp

//Função principal
#include <iostream>

int main() {
    int numero;

    // Solicita a entrada de um número inteiro menor que 1000
    std::cout << "Digite um número inteiro menor que 1000: ";
    std::cin >> numero;

    if (numero >= 1000) {
        std::cout << "Número inválido! O número deve ser menor que 1000." << std::endl;
        return 1;
    }

    // Calcula centenas, dezenas e unidades
    int centenas = numero / 100;
    int dezenas = (numero % 100) / 10;
    int unidades = numero % 10;

    // Exibe o resultado
    std::cout << numero << " = ";

    if (centenas > 0) {
        std::cout << centenas << (centenas > 1 ? " centenas" : " centena");
        if (dezenas > 0 || unidades > 0) std::cout << ", ";
    }

    if (dezenas > 0) {
        std::cout << dezenas << (dezenas > 1 ? " dezenas" : " dezena");
        if (unidades > 0) std::cout << " e ";
    }

    if (unidades > 0) {
        std::cout << unidades << (unidades > 1 ? " unidades" : " unidade");
    }

    std::cout << std::endl;

    return 0;
}
