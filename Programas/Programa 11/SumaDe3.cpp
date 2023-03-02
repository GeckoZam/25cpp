#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double a = pow(3, 1974);
    double b = pow(3, 1975);
    double c = a * 3;
    if(c == b)
    {
    cout << "El número 3^1974 multiplicado por 3 es igual a 3^1975.";
    }
    else if(c != b)
    {        
    cout << "El número 3^1974 multiplicado por 3 es diferente a 3^1975.";
    }
    return 0;
}