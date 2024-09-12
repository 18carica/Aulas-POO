// stringExemplo10.cpp
/*
Exemplo de uso de strcpy e strncpy
*/

#include <iostream>
#include <cstring>

int main(){
    std::cout << "\nExemplo de uso de strcpy() e strncpy()\n\n";

    // Declara os arrays de caracteres
    char nome[] = "Instituto Federal";
    char texto1[20];
    char texto2[11];

    // Realiza a cópia do conteúdo de <nome> para <texto1>
    strcpy(texto1, nome);

    // Copia os primeiros 9 caracteres de <nome> para <texto2>
    strncpy(texto2, nome, 9);

    // Acrescenta o '\0' no final de <texto2>
    texto2[10] = '\0';

    // Apresenta o resultado
    std::cout << "-> Nome...: " << nome << std::endl;
    std::cout << "-> Texto 1: " << texto1 << std::endl;
    std::cout << "-> Texto 2: " << texto2 << std::endl;

    std::cout << std::endl;

    return 0;
}