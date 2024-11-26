// Exemplo 05: programa05.cpp
// g++ programa05.cpp date.cpp employee.cpp -o programa05

#include <iostream>
#include "date.hpp"
#include "employee.hpp"

int main(){
    std::cout << "\n>> Demonstrating Composition: an object with member objects\n\n";

    // Instanciamento da data de nascimento do funcionário
    Date birth(1, 13, 1977);

    // Instanciamento da data de contratação do funcionário
    Date hire(1, 9, 2010);

    // Instanciamento do funcionário
    Employee manager("Walter", "Paraiba", birth, hire);

    std::cout << std::endl;

    // Exibe as informações do funcionário
    manager.printInfo();

    std::cout << std::endl;

    // Fim do programa
    return 0;
}