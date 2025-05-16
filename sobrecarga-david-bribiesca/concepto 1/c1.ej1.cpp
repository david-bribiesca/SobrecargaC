#include<iostream>
using namespace std;

class Complejo {
    public:
        double re, im;
        Complejo(double x, double y) : re(x), im(y) {}
        Complejo operator+(const Complejo& c) {
            return Complejo(re + c.re, im + c.im);
        }

};

int main() {
    Complejo c1(1.0, 2.0), c2(3.0, -1.0);
    Complejo result = c1 + c2;
    cout << "Resultado: (" << result.re << ", " << result.im << ")" << endl;

    return 0;
}