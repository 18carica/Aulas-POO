//----------------------------------------------------------------------------------------------------------------------
// Exemplo 01: time.hpp -> Interface
//----------------------------------------------------------------------------------------------------------------------

#ifndef TIME_HPP
#define TIME_HPP

// Definição da classe Time
class Time {

    public:

        Time(); // Construtor
        void setTime(int h, int m, int s);  // Define hora, minuto e segundos
        void printUniversal() const;        // Exibe a hora em formato universal
        void printStandard() const;         // Exibe a hora em formato padrão

    private:

            unsigned int hour;      // 0 - 23
            unsigned int minute;    // 0 - 59
            unsigned int second;    // 0 - 59
            
};

#endif