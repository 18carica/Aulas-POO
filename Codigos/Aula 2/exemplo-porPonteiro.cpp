#include <iostream>

using namespace std;

void incrementarPorPonteiro(int *num) {
    (*num)++;
    cout << "Dentro da fun��o: " << *num << endl;

}

int main() {
    int a = 5;
    incrementarPorPonteiro(&a);
    cout << "Fora da fun��o: " << a << endl;
    return 0;
}
