#include <iostream>

using namespace std;

void incrementarPorValor(int num) {
    num++;
    cout << "Dentro da fun��o: " << num << endl;

}

int main() {
    int a = 5;
    inccrementarProValor(a);
    cout << "Fora da fun��o: " << a << endl;
    return0;
}
