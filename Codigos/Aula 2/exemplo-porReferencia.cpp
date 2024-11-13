#include <iostream>

using namespace std;

void incrementarPorReferencia(int &num) {
    num++;
    cout << "Dentro da fun��o: " << num << endl;

}

int main() {
    int a = 5;
    inccrementarProReferencia(a);
    cout << "Fora da fun��o: " << a << endl;
    return 0;
}
