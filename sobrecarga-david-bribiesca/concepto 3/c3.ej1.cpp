#include<iostream>
using namespace std;

class Empleado{
    public:
        string nombre;
        int id;
        Empleado(string name, int num):nombre(name), id(num){}

        friend ostream& operator<<(ostream& os, const Empleado& e){
            os << "Empleado[" << e.id << "]: " << e.nombre;
            return os;
        }
};

int main() {
    Empleado e1("David", 4), e2("Santiago", 5);
    cout << e1 << endl << e2;
    return 0;
}