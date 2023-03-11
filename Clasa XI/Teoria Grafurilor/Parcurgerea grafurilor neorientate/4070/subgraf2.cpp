#include <iostream>

using namespace std;

int main()
{
    int a[101][101] = {0};
    int n,k,m;
    int x,y;
    cin >> n >> m >> k;
    for(int i = 1;i<=m;i++){
        cin >> x >> y;
        a[x][y] = 1;
        a[y][x] = 1;
    }
    for(int i = k;i<=n;i+=k){
        for(int j = 1;j<=n;j++){
            a[i][j] =0;
            a[j][i] = 0;
        }
    }
    int contor = 0;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            if(a[i][j] == 1){
                contor++;
            }
        }

    }
    cout <<contor/2<< endl;
    return 0;
}