//----------------------------------------------------------------------------------------------------------------------
// Exemplo 03: Programa que demonstra o uso de atributos, getters e setters
//----------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <string>

using namespace std;

//----------------------------------------------------------------------------------------------------------------------

// Definição da classe GradeBook
class GradeBook {

    public:

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

    // Variável para armazenar o nome do curso
    string nameOfCourse;

    // Cria um objetivo GradeBook chamado  myGradeBook
    GradeBook myGradeBook;

    // Exibe o valor inicial do atributo courseName
    cout << "* Initial course name is: " << myGradeBook.getCourseName() << endl;
    cout << endl;

    //----------------------------------------------------------------------------------------------------------------------
    
    // Entrada do nome do curso
    cout << "* Please enter the course name: ";
    getline(cin, nameOfCourse);
    
    // Configura o nome do curso
    myGradeBook.setCourseName(nameOfCourse);
    cout << endl;

    // Exibe a mensagem com o novo nome do curso
    myGradeBook.displayMessage();

    // Fim do programa
    cout << endl;
    return 0;

}