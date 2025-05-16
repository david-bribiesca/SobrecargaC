#include <iostream>
using namespace std;

class Contador {
    public:
    int valor;
    Contador(int v) : valor(v) {}
    Contador operator++(int) {
        valor++;
        return *this;  // BUG: ¿qué comportamiento falla?
        // devuelve el objeto actual, no una copia por lo que ya regresa el objeto con incremento.
    }
};

int main() {
    Contador c1(5);
    Contador c2 = c1++;
    cout << "c1: " << c1.valor << endl; // 6
    cout << "c2: " << c2.valor << endl; // 5
    return 0;
}