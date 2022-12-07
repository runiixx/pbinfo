#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    if (1 <= n && n <= 100) {
        for (int i = 2; i <= n; i = i + 2) {
            cout << i << " ";
        }
    }
}