#include <iostream>
using namespace std;

class Temperatura {
private:
    double celsius;
public:
    Temperatura(double c) : celsius(c) {}
    operator double() { return celsius; }
};

int main() {
    Temperatura t(36.7);
    double valor = t;
    cout << "Temperatura: " << valor << " °C" << endl;
}