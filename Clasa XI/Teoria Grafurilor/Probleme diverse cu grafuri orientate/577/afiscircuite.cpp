#include <iostream>

using namespace std;

int main()
{
    int x,y,m,n;
    int a[101][101] = {0};

    cin >> n >> m;
    for(int i =1;i<=m;i++){
        cin >> x >> y;
        a[x][y]  =1;
    }

    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
           for(int l = 1;l<=n;l++){
            if(a[i][j] == 1 && a[l][i] == 1 && a[j][l] == 1){
                cout << i << " " << j << " " << l << endl;
            }
           }
        }
    }
    return 0;
}