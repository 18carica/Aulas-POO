//----------------------------------------------------------------------------------------------------------------------
// Exemplo 08: programa para demonstrar o uso de argumentos na função principal
//----------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

//----------------------------------------------------------------------------------------------------------------------
// Função Principal
//----------------------------------------------------------------------------------------------------------------------
int main(int argc, char* argv[]) {

    cout << "\n";
    cout << "Exemplo de Argumentos da Função Principal!\n\n";

    // Se o usuário não forneceu o número correto de argumentos
    if (argc != 4) {
        // Exibe uma messagem de erro
        cerr << "Uso: " << argv[0] << " somar/subtrair num1 num2" << "\n\n";
        // Encerra o programa
        return 1;
    }

    // Recupera o valor de cada argumento
    const char *operacao = argv[1];
    int num1 = atoi(argv[2]);
    int num2 = atoi(argv[3]);

    // Realiza a soma dos valores
    if (!strcmp(operacao, "somar")) {
        cout << "Soma: " << num1 + num2 << endl;
    }
    else if (!strcmp(operacao, "subtrair")) {
        cout << "Subtração: " << num1 - num2 << endl;
    }
    else {
        cout << "Operação inválida!" << endl;
    }

    cout << endl;

    // Fim do programa
    return 0;

}
