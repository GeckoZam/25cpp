#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double a = pow(3, 75);
    double b = pow(2, 100);
    if(a > b)
    {
    cout << "El número 3^75 es mayor.";
    }
    else if(a < b){        
    cout << "El número 2^100 es mayor.";
    }
    return 0;
}