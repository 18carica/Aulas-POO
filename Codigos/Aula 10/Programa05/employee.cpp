// Exemplo 05: employee.cpp

#include <iostream>
#include "employee.hpp"
#include "date.hpp"

// ----------------------------------------------------------------------------

// Implementação dos métodos da classe Employee

// Construtor
Employee::Employee(const std::string &fn, const std::string &ln, const Date &bd, const Date &hd) :
            firstName(fn), lastName(ln), birthDate(bd), hireDate(hd){
        
    // Exibe o valor do objeto Employee, para ilustrar quando o seu construtor é chamado
    std::cout << "Employee object constructor: " << firstName << " " << lastName << std::endl;
}

// ----------------------------------------------------------------------------

// Destrutor
Employee::~Employee(){
    // Exibe o valor do objeto Employee, para ilustrar quando o seu destrutor é chamado
    std::cout << "Employee object destructor: " << firstName << " " << lastName << std::endl;
}

// ----------------------------------------------------------------------------

// Método para exibir informações sobre o objeto Employee
void Employee::printInfo() const{
    std::cout << "* Employee's name: " << lastName << ", " << firstName << std::endl;
    std::cout << " - Birthday: ";
    birthDate.printDate();
    std::cout << std::endl;
    std::cout << " - Hired: ";
    hireDate.printDate();
    std::cout << std::endl;
}