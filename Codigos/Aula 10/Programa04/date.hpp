//----------------------------------------------------------------------------------------------------------------------
// Exemplo 04: date.hpp -> Interface
//----------------------------------------------------------------------------------------------------------------------

#ifndef DATE_HPP
#define DATE_HPP

// Definição da classe Date
class Date {

    public:
        
        // Construtor padrão
        explicit Date(int m = 1, int d = 1, int y = 2000);

        // Métodos para exibir a data no formato mm/dd/yyyy
        void printDate();
    
    private:

        unsigned int month; // Mês
        unsigned int day;   // Dia
        unsigned int year;  // Ano

};

#endif // DATE_HPP