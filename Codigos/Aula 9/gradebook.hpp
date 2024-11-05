//----------------------------------------------------------------------------------------------------------------------
// Exemplo 05: gradeBook.hpp
//----------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <string>

using namespace std;

//----------------------------------------------------------------------------------------------------------------------

// Definição da classe GradeBook
class GradeBook {

    public:

        // Construtor
        // Inicializa courseNAme com a string fornecida como argumento
        explicit GradeBook(string name) : courseName(name) {}

        //----------------------------------------------------------------------------------------------------------------------

        // Método Setter, para configurar o nome do curso
        void setCourseName(string name) {
            courseName = name;
        }

        //----------------------------------------------------------------------------------------------------------------------

        // Método Getter, para obter o nome do curso
        string getCourseName() const {
            return courseName;
        }

        //----------------------------------------------------------------------------------------------------------------------

        // Função que exibe uma mensagem de boas-vindas para o usuário
        // Utiliza o método getCourseName() para obter o nome do curso
        void displayMessage() const {
            cout << "Welcome to the Grade Book for  " << getCourseName() << "!" << endl;
        }

    private:

        // Atributo que armazena o nome do curso
        string courseName;

};