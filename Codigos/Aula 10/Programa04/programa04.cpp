//----------------------------------------------------------------------------------------------------------------------
// Programa 04: programa04.cpp -> Executável
//----------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include "date.hpp"

using namespace std;

//----------------------------------------------------------------------------------------------------------------------
// Função principal
//----------------------------------------------------------------------------------------------------------------------
int main() {

    cout << "\n>> Default Memberwise Assignment\n\n";

    // Instancia um objeto da classe Date, utilizando o construtor personalizado
    Date date1(1, 12, 2025);

    // Instancia um objeto da classe Date, utilizando o construtor padrão
    Date date2;

    // Exibe os valores antes da atribuição-padrão de membro a membro
    cout << "* Before default Memberwise assignment: \n\n";
    cout << "  - Date 1: ";
    date1.printDate(); // 1/12/2025
    cout << endl;
    cout << "  - Date 2: ";
    date2.printDate(); // 1/1/2000

    // Realiza a atribuição-padrão de membro a membro
    date2 = date1;

    // Exibe os valores após a atribuição-padrão de membro a membro
    cout << "\n\n";
    cout << "\n* After default Memberwise assignment: \n\n";
    cout << "  - Date 1: ";
    date1.printDate(); // 1/12/2025
    cout << endl;
    cout << "  - Date 2: ";
    date2.printDate(); // 1/12/2025

    //----------------------------------------------------------------------------------------------------------------------

    // Fim do programa
    cout << "\n\n";
    return 0;

}

















// g++ programa02.cpp time.cpp -o programa02