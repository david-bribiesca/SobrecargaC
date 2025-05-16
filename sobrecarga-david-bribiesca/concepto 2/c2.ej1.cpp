#include<iostream>
using namespace std;

class Punto {
    public:
        int x, y;
        Punto(int a, int b) : x(a), y(b) {}
        bool operator==(const Punto& other){
            return (x == other.x && y == other.y);
        }
};

int main() {
    Punto p1(5,5), p2(5,6);
    //comparacion p1 y p1
    if(p1 == p1){
        cout << "(" << p1.x << "," << p1.y << ") == (" << p1.x << "," << p1.y << ")" << endl;
    } else{
        cout << "(" << p1.x << "," << p1.y << ") != (" << p1.x << "," << p1.y << ")" << endl;
    }
    //comparacion p1 y p2
    if(p1 == p2){
        cout << "(" << p1.x << "," << p1.y << ") == (" << p2.x << "," << p2.y << ")" << endl;
    } else{
        cout << "(" << p1.x << "," << p1.y << ") != (" << p2.x << "," << p2.y << ")" << endl;
    }
    return 0;
}