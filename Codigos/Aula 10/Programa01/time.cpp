//----------------------------------------------------------------------------------------------------------------------
// Programa 01: time.hpp -> Implementação
//----------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "time.hpp"

using namespace std;

//----------------------------------------------------------------------------------------------------------------------

// Implementação dos métodos da classe time

// construtor
// Assegura que todos os objetos Time iniciem em um estado consistente
Time::Time() : hour(0), minute(0), second(0) {}

//----------------------------------------------------------------------------------------------------------------------

// Método Setter, para configurar o valor de Time utilizando a hora universal
// Assegura que os dados permaneçam consistentes configurando valores inválidos
// como zero
void Time::setTime(int h, int m, int s) {

    // Se os argumentos forem válidos, configura os valores
    if((h >= 0 && h < 24) && (m >= 0 && m < 60) && (s >= 0 && s < 60)) {
        hour =h;
        minute = m;
        second = s;
    }

    // Caso contrário, lança um exceção de argumento inválido
    else
        throw invalid_argument("hour, minute and/or second was out of range!");

}

//----------------------------------------------------------------------------------------------------------------------

// Método que exibe a hora em formato universal (HH:MM:SS)
void Time::printUniversal() const {

    cout << setfill('0') << setw(2) << hour 
          << ":" << setw(2) << minute << ":" << setw(2) << second;

}

//----------------------------------------------------------------------------------------------------------------------

// Método que exibe a hora em formato padrão (HH:MM:SS)
void Time::printStandard() const {

    cout << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":"
         << setfill('0') << setw(2) << minute << ":" << setw(2) << second
         << (hour < 12 ? " AM" : " PM");

}
