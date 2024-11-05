//----------------------------------------------------------------------------------------------------------------------
// Exemplo 07: programa07.cpp
//----------------------------------------------------------------------------------------------------------------------

#include <iostream>
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
    cout << "* gradeBook1's initial for course: " << gradeBook1.getCourseName() << endl;
    cout << "* gradeBook2's initial for course: " << gradeBook2.getCourseName() << endl;
    cout << endl;

    // Modifica o nome do curso para gradebook1
    gradeBook1.setCourseName("CS101 C++ Programming");

    // Exibe valor inicial de courseName para cada GradeBook
    cout << "* gradeBook1's new course name: " << gradeBook1.getCourseName() << endl;
    cout << "* gradeBook2's new course name: " << gradeBook2.getCourseName() << endl;
    cout << endl;
   
    // Fim do programa
    cout << endl;
    return 0;

}