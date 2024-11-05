//----------------------------------------------------------------------------------------------------------------------
// Exemplo 02: Programa que demonstra como criar métodos com parâmetros
//----------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <string>

using namespace std;

//----------------------------------------------------------------------------------------------------------------------

// Definição da classe GradeBook
class GradeBook {

    public:

        // Função que exibe uma mensagem de boas-vindas para o usuário
        void displayMessage(string courseName) const {
            cout << "Welcome to the Grade Book for " << courseName << "!" << endl;
        }

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

    // Entrada do nome do curso
    cout << "* Please enter the course name: ";
    getline(cin, nameOfCourse);
    cout << endl;

    // Executa a função displayMessage()
    // Passa nameOfCourse como um argumento
    myGradeBook.displayMessage(nameOfCourse);

    // Fim do programa
    cout << endl;
    return 0;

}