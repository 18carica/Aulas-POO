#ifndef GRADEBOOK_HPP
#define GRADEBOOK_HPP

#include <string>

// Definição da classe GradeBook
class GradeBook {

    public:

        explicit GradeBook(std::string name);   // Construtor
        void setCourseName(std::string name);   // Configura o nome do curso
        std::string getCourseName() const;      // Obtém o nome do curso
        void displayMessage() const;            // Exibe mensagem de boas-vindas

    private:

        std:: string courseName; // Nome do curso

};

#endif

//----------------------------------------------------------------------------------------------------------------------
// Programa 07: gradebook.hpp  -> Interface
//
// g++ programa07.cpp gradebook.cpp -o programa07
//----------------------------------------------------------------------------------------------------------------------