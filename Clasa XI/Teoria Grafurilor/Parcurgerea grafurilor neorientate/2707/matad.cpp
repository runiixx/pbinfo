#include <iostream>


using namespace std;

int main(){
    int n,a[101][101] = {0};
    cin >> n;
    for(int i =1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            cin >> a[i][j];
        }
    }
    int ok = 1;
    for(int i =1;i<=n;i++){
        if(a[i][i] == 1){
                ok = 0;
        }
        for(int j = 1;j<=n;j++){
            if(a[i][j] >1){
                ok =0;
            }
            if(a[i][j] !=a[j][i]){
                ok = 0;
            }
            
        }
    }
    cout << ok<<endl;
    return 0;
}