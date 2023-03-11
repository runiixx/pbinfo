#include <iostream>
 
using namespace std;
 
int main(){
    int n,k;
    cin >> n >> k;
    int a[101][101] = {0};
    for(int i =1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            if(i!=j && i%k !=j%k){
                a[i][j] =1;
            }
        }
    }
    for(int i =1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}