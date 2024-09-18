// exemplo12string.cpp
/*
Exemplo de uso de strcmp
*/

#include <iostream>
#include <cstring>

int main(){
    std::cout << "\nExemplo de uso de strcmp()\n\n";

    // Declara um array de caracteres usando ponteiros
    const char *nomes[] = {
        "Paulo",
        "Ana Cristina",
        "Renata",
        "Joao",
        "Miranda"
    };

    // Obtém o total de nomes armazenados no array
    size_t total = sizeof(nomes) / sizeof(nomes[0]);

    // Variável temporária
    const char *temp;

    std::cout << ">> Total de nomes: " << total << "\n\n";

    // Exibe os nomes antes de ordenar
    std::cout << "* Anter da ordenação: " << "\n\n";

    for (int i = 0; i < total; i++)
        std::cout << i+1 << ". " << nomes[i] << std::endl;
    
    // Realiza a ordenação (A-Z) dos nomes usando strcmp()
    for (int i = 0; i < total - 1; i++){
        for (int j = i + 1; j < total; j++){
            if (strcmp(nomes[i], nomes[j]) > 0){
                temp = nomes[i];
                nomes[i] = nomes[j];
                nomes[j] = temp;
            }
        }
    }

    // Exibe os nomes dpeois de ordenar
    std::cout << "\n* Depois da ordenação: \n\n";

    for (int i = 0; i < total; i++)
        std::cout << i+1 << ". " << nomes[i] << std::endl;

    return 0;
}