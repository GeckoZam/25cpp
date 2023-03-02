#include <iostream>
using namespace std;

int main(){
    /* 'a' son las libras
    *  'b' son la conversion a kilogramos
    *  'c' son los onzas
    *  'd' son la conversion a kilogramos */
    float a, b , c, d;
    cout << "Ingrese el valor a convertir de libras a kilogramos\n";
    cin >> a;
    b = a * 0.453592;
    cout <<"Ingrese el valor a convertir de onzas a kilogramos\n";
    cin >> c;
    d = c * 0.0283495;
    cout << "La conversion de " << a << " libras a kilogramos son " <<  b << " kilogramos." << endl;
    cout << "La conversion de " << c << " onzas a kilogramos son " <<  d << " kilogramos." << endl;
    return 0;
}