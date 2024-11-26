// Exemplo 05: date.hpp

#ifndef DATE_HPP
#define DATE_HPP

// Definição da classe Date
class Date {
    public:
        // Constante estática para representar o número de meses por ano
        static const unsigned int monthsPerYear = 12;

        // Construtor padrão
        explicit Date(int m = 1, int d = 1, int y = 1900);

        // Destrutor
        ~Date();

        // Método para exibir a data no formato mm/dd/yyyy
        void printDate() const;
    
    private:
        unsigned int month; // 1-12 (Janeiro até Dezembro)
        unsigned int day;   // 1-31 de acordo com cada mês
        unsigned int year;  // Ano

        // Método utilitário para chegar se o dia está no intervalo correto
        unsigned int checkDay(int d) const;
};

#endif