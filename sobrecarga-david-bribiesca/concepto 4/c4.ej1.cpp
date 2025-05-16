#include <iostream>
using namespace std;

class Contador {
    public:
        int c;
        Contador(int _c) : c(_c) {}
    Contador operator++(int) { 
        Contador temp = *this;
        c++;
        return temp;
    }    
};

int main() {
    Contador c1(5);
    cout << "c1: " << c1.c << endl; // 5
    c1++;
    cout << "c1++: " << c1.c << endl; // 6
    return 0;
}