//----------------------------------------------------------------------------------------------------------------------
// Exemplo 05: instanciando múltiplos objetos de classe GradeBook
//----------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <string>
#include "gradebook.hpp"

using namespace std;

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