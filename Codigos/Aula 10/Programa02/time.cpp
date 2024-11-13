//----------------------------------------------------------------------------------------------------------------------
// Programa 02: time.CPP -> Implementação
//----------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "time.hpp"

using namespace std;

// Implementação dos métodos da classe time

//----------------------------------------------------------------------------------------------------------------------

// construtor

// Assegura que todos os objetos Time iniciem em um estado consistente
Time::Time(int hour, int minute, int second) {

    // Valida e configura a hora
    setTime(hour, minute, second);

}

//----------------------------------------------------------------------------------------------------------------------

// Setters

// Configura o valor de Time utilizando a hora universal, assegurando que os
// dados permaneçam consistentes configurando valores inválidos como zero
void Time::setTime(int h, int m, int s) {

    setHour(h);     // Configura a hora
    setMinute(m);   // Configura os minutos
    setSecond(s);   // Configura os segundos

}

//----------------------------------------------------------------------------------------------------------------------

// Configura o valor das horas
void Time::setHour(int h){

    // Se o argumento for válido, configura as horas
    if(h >= 0 && h < 24)
        hour =h;
    // Caso contrário, lança um execeção de argumentos inválido
    else
        throw invalid_argument("hour must be 0-23!");

}

//----------------------------------------------------------------------------------------------------------------------

// Configura o valor dos minutos
void Time::setMinute(int m) {

    // Se o argumento for válido, configura os minutos
    if (m >= 0 && m < 60)
        minute = m;
    // Caso contrário, lança um exceção de argumento inválido
    else
        throw invalid_argument("minute must be 0-59!");

}

//----------------------------------------------------------------------------------------------------------------------

// Configura o valor dos segundos
void Time::setSecond(int s) {

    // Se o argumento for válido, configura os segundos
    if (s >= 0 && s < 60)
        second = s;
    // Caso contrário, lança um exceção de argumento inválido
    else
        throw invalid_argument("second must be 0-59!");

}

//----------------------------------------------------------------------------------------------------------------------

// Getters

// Retorna o valor das horas
unsigned int Time::getHour() const {
    return hour;
}

// Retorna o valor dos minutos
unsigned int Time::getMinute() const {
    return minute;
}

// Retorna o valor dos segundos
unsigned Time::getSecond() const {
    return second;
}

//----------------------------------------------------------------------------------------------------------------------

// Outros métodos

// Exibe a hora em formato universal (HH:MM:SS)
void Time::printUniversal() const {

    cout << setfill('0') << setw(2) << getHour() << ":" 
         << setw(2) << getMinute() << ":" << setw(2) << getSecond();

}

//----------------------------------------------------------------------------------------------------------------------

// Exibe a hora em formato padrão (HH:MM:SS AM ou PM)
void Time::printStandard() const {

    cout << ((getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12) << ":"
         << setfill('0') << setw(2) << getMinute() << ":" << setw(2)
         << getSecond() << (hour < 12 ? " AM" : " PM");

}
