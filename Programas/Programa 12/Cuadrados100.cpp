#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double a;
    for (double i = 100; i <= 120; i++)
    {
        a = sqrt(i);
        cout << "La raiz cuadrada de " << i << " es " << a << endl;
    }
    return 0;
}