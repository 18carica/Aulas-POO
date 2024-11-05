//----------------------------------------------------------------------------------------------------------------------
// Exemplo 01: Programa que demonstra como criar uma classe com um método
//----------------------------------------------------------------------------------------------------------------------

#include <iostream>

using namespace std;

//----------------------------------------------------------------------------------------------------------------------

// Definição da classe GradeBook
class GradeBook {

    public:

        // Função que exibe uma mensagem de boas-vindas para o usuário
        void displayMessage() const {
            cout << "Welcome to the Grade Book!" << endl;
        }

};

//----------------------------------------------------------------------------------------------------------------------
// Função principal
//----------------------------------------------------------------------------------------------------------------------
int main() {

    cout << "\n";
    cout << ">> Grade Book\n\n";

    // Cria um objetivo GradeBook chamado  myGradeBook
    GradeBook myGradeBook;

    // Executa a função displayMessage()
    myGradeBook.displayMessage();

    // Fim do programa
    cout << endl;
    return 0;

}