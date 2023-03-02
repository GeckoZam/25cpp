#include <iostream>
using namespace std;

int main(){
    int a, res;
    cout << "Ingrese el valor\n";
    cin >> a;
    res = a % 2;

    if(res != 0)
    {
        cout << "El valor " << a << " es impar" << endl;
    }
    else{
        cout << "El valor " << a << " es par" << endl;
    }
    return 0;
}