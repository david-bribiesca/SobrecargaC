#include<iostream>
#include <cstring>
using namespace std;

class Buffer {
    public:
    char* datos;
    size_t n;

    Buffer(const char* t) {
        datos = new char[strlen(t)+1];
        strcpy(datos, t);
        n = strlen(t);
    }
    
    Buffer& operator=(const Buffer& otra) {
        if (this != &otra) {
            delete[] datos;
            datos = new char[strlen(otra.datos)+1];
            strcpy(datos, otra.datos);
        }
        this->n = otra.n;
        return *this;
    }

    void mostrar() {
        cout << "Texto: " << datos << endl;
    }

};


int main() {
    Buffer a("Hola"), b("Adios");
    a = b;
    a.mostrar();  // Texto: Adios
    return 0;
}

