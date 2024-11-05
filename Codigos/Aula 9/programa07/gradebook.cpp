//----------------------------------------------------------------------------------------------------------------------
// Exemplo 07: gradebook.cpp  -> Implementação
//----------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include "gradebook.hpp"

using namespace std;

//----------------------------------------------------------------------------------------------------------------------

// Implementação dos métodos da classe GradeBook

// Construtor
// Inicializa courseName com a string fornecida como argumento
GradeBook::GradeBook(string name) : courseName(name) {
    // Valida e armazena o nome do curso
    setCourseName(name);
}

//----------------------------------------------------------------------------------------------------------------------

// Método Setter, para configurar o nome do curso
void GradeBook:: setCourseName(string name) {

    //Verifica se o nome possui até 25 caracteres
    if (name.size() <= 25) {
        // Armazena o nome do curso
            courseName = name;
    }

    // Caso contrário
    else {

        // Armazena somente os primeiros 25 caracteres
        courseName = name.substr(0, 25);

        // Utiliza o Console Error para exibir uma mensagem de diagnóstico no terminal
        cerr << "Warning: name \"" << name << "\" exceeds maximum length (25) Limiting courseName to first 25 characters. \n" << endl;
    }

}

//----------------------------------------------------------------------------------------------------------------------

// Método Getter, para obter o nome do curso
string GradeBook::getCourseName() const {
    return courseName;
}

//----------------------------------------------------------------------------------------------------------------------

// Função que exibe uma mensagem de boas-vindas para o usuário
// Utiliza o método getCourseName() para obter o nome do curso
void GradeBook::displayMessage() const {
    cout << "Welcome to the Grade Book for " << getCourseName() << "!" << endl;
}
