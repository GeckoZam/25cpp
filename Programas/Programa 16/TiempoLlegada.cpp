#include <iostream>
using namespace std;

void proceso()
{
     //Si dos ciudades estan a 80 km una de otra
     //y usded conduce a 90 km/h. ¿Cuantos minutos necesitara
     //para ir de una ciudad a otra?
     float distancia = 80;
     float velocidad = 90;
     float tiempoh = distancia / velocidad;
     float tiempoMin = tiempoh * 60;
     cout << "El tiempo en minutos para llegar de una ciudad a otra es " << tiempoMin << " minutos" << endl;
}

int main()
{
    proceso();
    return 0;
}