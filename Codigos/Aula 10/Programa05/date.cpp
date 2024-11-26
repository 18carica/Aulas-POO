// Exemplo 05: date.cpp

#include <iostream>
#include <array>
#include <stdexcept>
#include "date.hpp"

// ----------------------------------------------------------------------------

// implementação dos métodos da classe date

// Construtor personalizado
// Utiliza o método checkDay() para confirmar o valor adequado do dia
Date::Date(int m, int d, int y){
    // Valida o valor mês
    if (m > 0 && m <= monthsPerYear)
        month = m;
    // Caso contrário, lança uma exceção
    else
        throw std::invalid_argument("month must be 1-12!");
    
    // Atribui o valor do ano
    year = y;

    // Valida o valor do dia
    day = checkDay(d);

    // Exibe o valor do objeto Date, para ilustrar quando o seu construtor é chamado
    std::cout << "Date obtect constructor for date: ";
    printDate();
    std::cout << std::endl;
}

// ----------------------------------------------------------------------------

// Destrutor
Date::~Date(){
    // Exibe o valor do objeto Date, para ilustrar quando o seu destrutor é chamado
    std::cout << "Date object destructor for date: ";
    printDate();
    std::cout << std::endl;
}

// ----------------------------------------------------------------------------

// Método para exibir a data no formato mm/dd/yyyy
void Date::printDate() const{
    std::cout << month << "/" << day << "/" << year;
}

// ----------------------------------------------------------------------------

// Método utilitário para checar se o dia está no intervalo correto
unsigned int Date::checkDay(int d) const{
    // Define um array com a quantidade de dias de cada mês
    static const std::array<int, monthsPerYear + 1> daysPerMonth = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Verifica se o dia é válido para um mês em específico
    if (d > 0 && d <= daysPerMonth[month])
        return d;
    
    // Verifica se o dia equivale a 29 de fevereiro, durante um ano bissexto
    if (month == 2 && d == 29 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)))
        return d;
    
    // Lança uma exceção caso o dia seja inválido
    throw std::invalid_argument("Invalid day for current month and year!");
}