//----------------------------------------------------------------------------------------------------------------------
// Exemplo 08: programa para demonstrar o uso de argumentos na função principal
//----------------------------------------------------------------------------------------------------------------------

#include <iostream>

using namespace std;

//----------------------------------------------------------------------------------------------------------------------
// Função Principal
//----------------------------------------------------------------------------------------------------------------------
int main(int argc, char* argv[]) {

    cout << "\n";
    cout << "Exemplo de Argumentos da Função Pricipal\n\n";

    // Exibe o número de argumentos passados para a função
    cout << "Número de argumentos: " << argc << "\n\n";

    // Loop para exibir os argumentos passados para a função
    for (int i = 0; i < argc; i++) {
        cout << "Argumento " << i << ": " << argv[i] << "\n";
    }

    cout << endl;

    // Fim do programa
    return 0;

}