//Problema nr.1261
#include <iostream>
using namespace std;
int main()
{
    int n,count;
    count = 0;
    do {
        cin >> n;
        
        if (n % 2 == 0 && n != 0) {
            count++;
        }
    } while (n != 0);
    if (count == 0) {
        cout << "NU EXISTA";
    }
    else {
        cout << count;
    }
}