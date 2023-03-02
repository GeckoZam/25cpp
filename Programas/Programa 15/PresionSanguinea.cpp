#include <iostream>
#include <math.h>
using namespace std;

void proceso()
{
    float edades [5] = {25, 35, 47, 51.5, 60};
    float p [5];
    for (int i = 0; i < 5; i++)
    {
        p[i] = 100 * edades[i] * 2;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "La presión arterial sistoica de la persona de " << edades[i] << " años de edad es de " << p[i] << " mm Hg" << endl;
    }   
}

int main()
{
    proceso();
    return 0;
}