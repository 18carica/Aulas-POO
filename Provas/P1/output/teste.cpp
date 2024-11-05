#include <iostream>
#include <vector>

//----------------------------------------------------------------------------------------------------------------------
// Função principal
//----------------------------------------------------------------------------------------------------------------------
int main() {
    std::cout << ">> Início: Prova P1\n\n";

    // Valores predefinidos
    std::vector<int> dados = {3, 0, 5};

    // Exibindo os dados
    std::cout << "Dados: [";
    for (size_t i = 0; i < dados.size(); i++) {
        std::cout << dados[i];
        if (i < dados.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]\n";

    // Exibindo o total de linhas e colunas
    std::cout << "\n* Total de linhas: " << dados.size() << std::endl;
    
    int maior = 0;
    for (int valor : dados) {
        if (valor > maior) {
            maior = valor;
        }
    }
    std::cout << "* Total de colunas: " << maior << std::endl;

    // Exibindo o histograma horizontal
    std::cout << "\nHistograma Horizontal\n";
    for (int valor : dados) {
        for (int i = 0; i < valor; i++) {
            std::cout << " *";
        }
        std::cout << std::endl;
    }

    // Fim do programa
    return 0;
}

