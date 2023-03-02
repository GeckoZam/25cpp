#include <iostream>
#include <cmath>
using namespace std;

void proceso(){
    float valor;
    cout << "Escribe un número: ";
    cin >> valor;
    float valorAbsoluto = abs(valor);
    cout << "El valor absoluto es " << valorAbsoluto << endl;
}

int main(){
    proceso();
    return 0;
}