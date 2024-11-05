/* Programa 37 */
/*37. O Armazém Paraíba está vendendo frutas com a seguinte tabela de preços:
            Ate 5 kg            Acima de 5 kg
Morango     R$ 32,50 por kg     R$ 30,20 por kg
Maçã        R$ 13,80 por kg     R$ 11,50 por kg
Se o cliente comprar mais de 8 kg em frutas ou o valor total da compra ultrapassar R$ 200,00, recebera ainda um desconto de 10% sobre este total. Escreva um programa para ler a quantidade (em kg) de morangos e a quantidade (em kg) de maças adquirida. O programa deve apresentar uma mensagem com o valor a ser pago pelo cliente.*/
// exercicio37.cpp

//Função principal
#include <iostream>

int main() {
    double kgMorango, kgMaca, precoMorango, precoMaca, precoTotal;

    std::cout << "Digite a quantidade (em kg) de morangos: ";
    std::cin >> kgMorango;
    std::cout << "Digite a quantidade (em kg) de maçãs: ";
    std::cin >> kgMaca;

    precoMorango = (kgMorango <= 5) ? 32.50 : 30.20;
    precoMaca = (kgMaca <= 5) ? 13.80 : 11.50;

    precoTotal = (kgMorango * precoMorango) + (kgMaca * precoMaca);

    if (kgMorango + kgMaca > 8 || precoTotal > 200) {
        precoTotal *= 0.9; // Desconto de 10%
    }

    std::cout << "Valor a ser pago: R$ " << precoTotal << std::endl;

    return 0;
}
