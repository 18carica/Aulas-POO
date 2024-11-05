/* Programa 32 */
/*32. Escreva um programa que peça uma data no formato “dd/mm/aaaa” e informe se ela é uma data válida.*/
// exercicio32.cpp

//Função principal
#include <iostream>

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool isValidDate(int day, int month, int year) {
    if (month < 1 || month > 12 || day < 1) return false;

    int daysInMonth[] = { 31, (isLeapYear(year) ? 29 : 28), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    
    return day <= daysInMonth[month - 1];
}

int main() {
    int day, month, year;
    char separator;

    std::cout << "Digite uma data (dd/mm/aaaa): ";
    std::cin >> day >> separator >> month >> separator >> year;

    if (isValidDate(day, month, year)) {
        std::cout << "A data é válida." << std::endl;
    } else {
        std::cout << "A data é inválida." << std::endl;
    }

    return 0;
}
