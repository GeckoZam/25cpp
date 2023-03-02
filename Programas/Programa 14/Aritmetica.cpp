#include <iostream>
using namespace std;

void proceso(){
    int a = 60;
    int b = 68;
    float c = (a + b) / 2;
    cout << "La media aritmética entre " << a << " y " <<  b << " es " << c << "." << endl;
}

int main(){
    proceso();
    return 0;
}