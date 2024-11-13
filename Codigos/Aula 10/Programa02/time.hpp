//----------------------------------------------------------------------------------------------------------------------
// Programa 02: time.hpp -> Interface
//----------------------------------------------------------------------------------------------------------------------

#ifndef TIME_HPP
#define TIME_HPP

// Definição da classe Time
class Time {

    public:

        // Construtor padrão
        explicit Time(int hour = 0, int minute = 0, int second = 0);

        // Setter
        void setTime(int hour, int minute, int second); //Define hora, minuto e segundos
        void setHour(int hour);     // Define as horas, depois da validação
        void setMinute(int minute); // Define os minutos, depois da validação
        void setSecond(int second); // Define os segundos, depois da validação

        // Getter
        unsigned int getHour() const;       // Retorna a hora
        unsigned int getMinute() const;     // Retorna os minutos
        unsigned int getSecond() const;     // Retorna os segundos

        void printUniversal() const;        // Exibe a hora em formato universal
        void printStandard() const;         // Exibe a hora em formato padrão

    private:

            unsigned int hour;      // 0 - 23
            unsigned int minute;    // 0 - 59
            unsigned int second;    // 0 - 59
            
};

#endif