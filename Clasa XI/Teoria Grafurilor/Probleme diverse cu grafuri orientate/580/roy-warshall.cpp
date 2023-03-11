#include <iostream>

using namespace std;
int n,m,a[101][101];

void floyd(int a[101][101]){
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(a[i][j] ==0 && a[i][k] ==1 && a[k][j]==1){
                    a[i][j] = 1;
                }
            }
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout <<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    cin>>n>>m;
    int x,y;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            a[i][j] = 0;
        }

    }
    for(int i =1;i<=m;i++){
        cin>>x>>y;
        a[x][y]=1;
    }

    floyd(a);
    return 0;
}