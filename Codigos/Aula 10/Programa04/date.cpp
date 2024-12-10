//----------------------------------------------------------------------------------------------------------------------
// Exemplo 04: date.cpp -> Implementação
//----------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include "date.hpp"

using namespace std;

//----------------------------------------------------------------------------------------------------------------------

// Implementação dos métodos da classe Date

// Construtor personalizado
Date::Date(int m, int d, int y) : month(m), day(d), year(y) {}

//----------------------------------------------------------------------------------------------------------------------

// Método para exibir a data no formato mm//dd//yyyy
void Date::printDate() {

    cout << month << "/" << day << "/" << year;

}