//----------------------------------------------------------------------------------------------------------------------
// Exemplo 06: gradebook.cpp  -> Implementação
//----------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include "gradebook.hpp"

using namespace std;

//----------------------------------------------------------------------------------------------------------------------

// Implementação dos métodos da classe GradeBook

// Construtor
// Inicializa courseName com a string fornecida como argumento
GradeBook::GradeBook(string name) : courseName(name) {}

//----------------------------------------------------------------------------------------------------------------------

// Método Setter, para configurar o nome do curso
void GradeBook:: setCourseName(string name) {
    courseName = name;
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

