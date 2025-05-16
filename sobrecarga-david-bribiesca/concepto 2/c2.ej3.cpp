#include <iostream>
using namespace std;

class Punto {
public:
    int x, y;
    Punto(int _x, int _y) : x(_x), y(_y) {}
    bool operator==(Punto p) {
        return x == p.x && y == p.y;  // BUG: ¿qué no está bien?
        // Porque tenia solo un igual lo que significa asignacion en lugar de comparacion.
    }
};

int main() {
    Punto p1(1, 2);
    Punto p2(1, 2);
    if (p1 == p2) {
        cout << "Son iguales" << endl;
    } else {
        cout << "Son diferentes" << endl;
    }
    return 0;
}