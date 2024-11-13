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
    
    Time t1; // Todos os argumentos são convertidos para sa configuração padrão
    Time t2(2); // Especifica hora e converte os minutos e segundos para a configuração padrão
    Time t3(21, 34); // Especifica hora e minutos, converte os segundos para a configuração padrão
    Time t4(12, 25, 42); // Especifica hora, minuto e segundos

    //----------------------------------------------------------------------------------------------------------------------

    cout << "Constructed with:\n\n";

    // Objeto t1
    cout << " * t1: all arguments defaulted\n    ";
    t1.printUniversal();    // 00:00:00
    cout << "\n    ";
    t1.printStandard();     // 12:00:00 AM

    cout  << "\n\n";

    // Objeto t2
    cout << " * t2: hour specified, minute and second defaulted\n    ";
    t2.printUniversal();    // 02:00:00
    cout << "\n    ";
    t2.printStandard();     // 2:00:00 AM

    cout  << "\n\n";

    // Objeto t3
    cout << " * t3: hour and minute specified, second defaulted\n    ";
    t3.printUniversal();    // 21:34:00
    cout << "\n    ";
    t3.printStandard();     // 9:34:00 AM

    cout  << "\n\n";

    // Objeto t4
    cout << " * t4: hour minute and second specified\n    ";
    t4.printUniversal();    // 12:24:42
    cout << "\n    ";
    t4.printStandard();     // 12:25:42 PM

    cout  << "\n\n";

    // Tentativa de iniciar t5 com valores inválidos
    try {
        Time t5(25, 74, 99); // Especifica valores inválidos
    }
    // Se deu erro, captura e exibe a exceção
    catch(invalid_argument &e) {
        cerr << "  * Exception while initializing t5: " << e.what() << endl;
    }

    //----------------------------------------------------------------------------------------------------------------------

    // Fim do programa
    cout << "\n\n";
    return 0;

}