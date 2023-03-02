#include <iostream>
using namespace std;

int main(){
    for (int i = 7; i < 52; i++)
    {
        int res = i % 2;

        if(res != 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}