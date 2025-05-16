#include <iostream>
#include <cstring>
using namespace std;

class Buffer {
    public:
    char* datos;
    Buffer(const char* s) {
        datos = new char[strlen(s)+1];
        strcpy(datos, s);
    }
    ~Buffer() { delete[] datos; }
    Buffer& operator=(const Buffer& otro) {
        delete[] datos;
        datos = otro.datos;   // BUG: ¿qué problema surge aquí?
        return *this;
    }
};

int main() {
    Buffer b1("Hola"), b2("Mundo");
    b1 = b2;
    cout << b1.datos << endl;  // Mundo
    b2.datos[0] = 'X';  // Cambia el primer caracter de b2
    cout << b1.datos << endl;  // Xola
    // eso se debe ya que al momento de asignar b1 = b2, se asigna la dirección de memoria de b2 a b1, por lo que al cambiar el valor de b2, también cambia el valor de b1.
    //por lo que se recomienda hacer una copia profunda, es decir, crear un nuevo espacio de memoria para b1 y copiar el contenido de b2 a b1.
    return 0;
}