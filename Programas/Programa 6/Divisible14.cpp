#include <iostream>
using namespace std;

int main(){
    int a, b, d;
    int c = 14;
    cout << "Ingrese el valor a dividir\n";
    cin >> a;
    b = a / c;
    d = b % 2;
    if(d != 0)
    {
    cout << "El número " << a << " es divisible entre 14";
    }
    else
    {       
    cout << "El número " << a << " no es divisible entre 14";
    }
    return 0;
}