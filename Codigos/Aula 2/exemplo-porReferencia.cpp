#include <iostream>

using namespace std;

void incrementarPorReferencia(int &num) {
    num++;
    cout << "Dentro da função: " << num << endl;

}

int main() {
    int a = 5;
    inccrementarProReferencia(a);
    cout << "Fora da função: " << a << endl;
    return0;
}
