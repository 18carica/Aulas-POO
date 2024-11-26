// Exemplo 05: employee.hpp

#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

#include <string>
#include "date.hpp"

// Definição da classe Employee
class Employee{
    public:
        // Construtor
        Employee(const std::string &fn, const std::string &ln, const Date &bd, const Date &hd);

        // Destrutor
        ~Employee();

        // Método para exibir informações sobre o objeto Employee
        void printInfo() const;
    
    private:
        std::string firstName;
        std::string lastName;
        const Date birthDate; // Data de nascimento (composição)
        const Date hireDate;  // Data de contratação (composição)
};

#endif