#include <iostream>

using namespace std;

void incrementarPorValor(int num) {
    num++;
    cout << "Dentro da função: " << num << endl;

}

int main() {
    int a = 5;
    inccrementarProValor(a);
    cout << "Fora da função: " << a << endl;
    return0;
}
