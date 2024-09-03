// Calculando o tempo de execução
/*
Início
contador ← 0;                           // Tempo constante Co
Para i de n/2 até n faça:               // Executa n/2 vezes
    j ← 1;                              // Tempo constante C¹
    Enquanto (j + n/2) ≤ n faça:        // Executa n/2 vezes
        k ← 1;                          // Tempo Constante C²
        Enquanto k ≤ n faça:            // Executa log n vezes
            contador ← contador + 1;    // Tempo Constante C³
            k ← k * 2;                  // Tempo logaritmico
        j ← j + 1;                      // tempo constante C4
Escreva(contador);                      // tempo constante C5
Fim
*/

#include <iostream>

int main() {
    int contador = 0;  // Inicializa o contador em 0
    int n = 10;  // você pode ajustar o valor de n conforme necessário

    // Loop externo: de n/2 até n
    for (int i = n / 2; i <= n; i++) {
        int j = 1;  // Inicializa j como 1 em cada iteração do loop externo

        // Loop intermediário: enquanto (j + n/2) for menor ou igual a n
        while ((j + n / 2) <= n) {
            int k = 1;  // Inicializa k como 1 em cada iteração do loop intermediário

            // Loop interno: enquanto k for menor ou igual a n
            while (k <= n) {
                contador++;  // Incrementa o contador a cada iteração do loop interno
                k = k * 2;  // Multiplica k por 2 a cada iteração
            }

            j = j + 1;  // Incrementa j em 1 para reavaliar a condição do loop intermediário
        }
    }

    // Exibe o valor final do contador
    std::cout << "Contador: " << contador << std::endl;

    return 0;
}

