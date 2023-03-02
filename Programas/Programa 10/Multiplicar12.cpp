#include <iostream>
using namespace std;

int main(){
    int b;
    int c = 1;    
    for (int a = 1; a <= 12; a++)
    {
        for (int i = 1; i <= 12; i++)
        {
            b = c * i;            
            cout << c << " * " << i << " = " << b << endl;
        }
        c++;
    }
    return 0;
}