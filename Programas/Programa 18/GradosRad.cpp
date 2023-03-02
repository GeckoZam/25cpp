#include <iostream>
using namespace std;

void proceso(){
    float valorGrad;
    cout << "Introduzca el valor en grados a convertir: ";
    cin >> valorGrad;
    float valorRad = valorGrad / 180;
    cout << "El valor de " << valorGrad << "° en radianes es " << valorRad << " π radianes" << endl;
}

int main(){
    proceso();
    return 0;
}