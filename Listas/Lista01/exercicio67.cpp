/* Programa 67 */
/*67. O Departamento Municipal de Meteorologia lhe contratou para desenvolver um programa que leia um conjunto indeterminado de temperaturas. Em seguida, o programa deve informar os valores da menor e da maior temperatura, além do valor da temperatura média.*/
// exercicio67.cpp

#include <iostream>
#include <limits>  // Para definir os valores máximo e mínimo

//Função principal
int main() {
    double temperatura, soma = 0, maiorTemp = -std::numeric_limits<double>::infinity();
    double menorTemp = std::numeric_limits<double>::infinity();
    int contador = 0;

    // Loop para leitura indeterminada das temperaturas
    while (true) {
        std::cout << "Informe uma temperatura (ou 0 para sair): ";
        std::cin >> temperatura;

        if (temperatura == 0) {
            break;  // Se o valor for 0, encerra a leitura
        }

        soma += temperatura;
        contador++;

        if (temperatura > maiorTemp) {
            maiorTemp = temperatura;  // Atualiza a maior temperatura
        }

        if (temperatura < menorTemp) {
            menorTemp = temperatura;  // Atualiza a menor temperatura
        }
    }

    // Verifica se pelo menos uma temperatura foi inserida
    if (contador > 0) {
        double media = soma / contador;
        std::cout << "Menor temperatura: " << menorTemp << std::endl;
        std::cout << "Maior temperatura: " << maiorTemp << std::endl;
        std::cout << "Temperatura media: " << media << std::endl;
    } else {
        std::cout << "Nenhuma temperatura foi registrada." << std::endl;
    }

    //Fim do Programa
    return 0;
}