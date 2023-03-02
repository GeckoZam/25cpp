#include <iostream>
using namespace std;

int main(){
    int b;
    int c = 12;    
    for (int a = 1; a <= 12; a++)
    {
        b = c + a;
        cout << c << " + " << a << " = " << b << endl;
    }
    return 0;
}