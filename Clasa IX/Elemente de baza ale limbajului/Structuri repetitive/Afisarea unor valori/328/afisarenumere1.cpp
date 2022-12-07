#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (1 <= n && n <= 100) {
        for (int i = n; i >= 1; i--) {
            cout << i << " ";

        }
    }
}