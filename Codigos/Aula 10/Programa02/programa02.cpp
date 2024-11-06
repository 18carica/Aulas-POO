//----------------------------------------------------------------------------------------------------------------------
// Programa 02: programa02.cpp
//----------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <stdexcept>
#include "time.hpp"

using namespace std;

//----------------------------------------------------------------------------------------------------------------------
// Função principal
//----------------------------------------------------------------------------------------------------------------------
int main() {

    cout << "\n>> Time\n\n";

    // Instancia um objeto da classe Time
    Time t;

    // Exibe os valores iniciais do objeto Time
    cout << "The initial universal time is ";
    t.printUniversal(); // 00:00:00

    cout << "\nThe initial standard time is ";
    t.printStandard(); // 12:00:00 AM

    cout << endl;

    //----------------------------------------------------------------------------------------------------------------------

    // Define um novo horário
    t.setTime(13, 27, 6);

    // Exibe os novos valores do objeto Time
    cout << "\nUniversal time after setTime is ";
    t.printUniversal(); // 13:27:06

    cout << "\nStandard time after setTime is ";
    t.printStandard(); // 1:27:06 PM

    cout << endl;

    //----------------------------------------------------------------------------------------------------------------------

    // Tentativa de definir um horário inválido
    try{
        t.setTime(99, 99, 99);
    }
    // Se deu erro, captura e exibe a exceção
    catch(invalid_argument  &e) {
        cout << "\nException: " << e.what() << endl;
    }

    //----------------------------------------------------------------------------------------------------------------------

    // Exibe os valores do objeto Time, após especificar valores inválidos
    cout << "\nAfter attempting invalid settings: \n";

    cout << "\n - Universal time: ";
    t.printUniversal(); // 13:27:06

    cout << "\n - Standard time: ";
    t.printStandard(); // 1:26:06 PM

    //----------------------------------------------------------------------------------------------------------------------

    // Fim do programa
    cout << "\n\n";
    return 0;

}