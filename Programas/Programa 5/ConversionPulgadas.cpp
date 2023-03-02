#include <iostream>
using namespace std;

int main(){
    /* 'a' son las pulgadas
    *  'b' son la conversion a yardas
    *  'c' son los pies
    *  'd' son la conversion a yardas */
    float a, b , c, d;
    cout << "Ingrese el valor a convertir de pulgadas a yardas\n";
    cin >> a;
    b = a * 0.0277778;
    cout <<"Ingrese el valor a convertir de pies a pulgadas\n";
    cin >> c;
    d = c * 12;
    cout << "La conversion de " << a << " pulgadas a yardas son " <<  b << " yardas." << endl;
    cout << "La conversion de " << c << " pies a pulgadas son " <<  d << " pulgadas." << endl;
    return 0;
}