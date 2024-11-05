/* Programa 75 */
/*75. Escreva um programa que possua uma função que receba um argumento do tipo inteiro, diferente de zero e retorne P, caso ele seja positivo, ou retorne N, caso ele seja negativo. O programa deve solicitar a entrada desse argumento para o usuário e apresentar uma mensagem com o valor retornado pela função.*/
// exercicio75.cpp

#include <iostream> // Biblioteca padrão para entrada e saída

// Função que verifica se o número é positivo ou negativo
char verificarNumero(int numero) {
    if (numero > 0) {
        return 'P'; // Retorna 'P' se o número for positivo
    } else {
        return 'N'; // Retorna 'N' se o número for negativo
    }
}

//Função principal
int main() {
    int numero; // Variável para armazenar o número informado pelo usuário

    // Solicita ao usuário que informe um número inteiro diferente de zero
    std::cout << "Informe um número inteiro diferente de zero: ";
    std::cin >> numero; // Lê o valor do número

    // Verifica se o número é diferente de zero
    if (numero != 0) {
        // Chama a função verificarNumero e armazena o resultado
        char resultado = verificarNumero(numero);

        // Exibe o resultado
        std::cout << "O número informado é " << (resultado == 'P' ? "positivo" : "negativo") << " (" << resultado << ")." << std::endl;
    } else {
        // Exibe uma mensagem de erro caso o número seja zero
        std::cout << "Erro: O número informado deve ser diferente de zero." << std::endl;
    }

    return 0; // Indica que o programa foi executado com sucesso
}