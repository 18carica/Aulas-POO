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
// Exemplo 06: gradebook.hpp  -> Interface
//----------------------------------------------------------------------------------------------------------------------