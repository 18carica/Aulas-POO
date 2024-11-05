//----------------------------------------------------------------------------------------------------------------------
// Exemplo 04: instanciando múltiplos objetos de classe GradeBook
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

//----------------------------------------------------------------------------------------------------------------------
// Função principal
//----------------------------------------------------------------------------------------------------------------------
int main() {

    cout << "\n";
    cout << ">> Grade Book\n\n";

    // Cria dois objetos GradeBook
    GradeBook gradeBook1("CS101 Introdução to C++ Programming");
    GradeBook gradeBook2("CS102 Data Structures in C++");
    
    // Exibe valor inicial de courseName para cada GradeBook
    cout << "* gradeBook1 created for course: " << gradeBook1.getCourseName() << endl;
    cout << "* gradeBook2 created for course: " << gradeBook2.getCourseName() << endl;
    cout << endl;
    
    // Fim do programa
    cout << endl;
    return 0;

}