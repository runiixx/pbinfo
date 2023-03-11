#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("subgraf.in");
ofstream fout("subgraf.out");
bool prim(int val){
    if(val == 1){
        return false;
    }
    for(int i =2;i <=val/2;i++){
        if(val%i == 0){
            return false;
        }
    }

    return true;
}
int main()
{
    int a[101][101] = {0};
    int n;
    int x,y;
    fin >> n;
    while(fin >> x>>y){
        a[x][y] = 1;
        a[y][x] = 1;
    }
    for(int i =1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            if(prim(i)){
                a[i][j] = 0;
                a[j][i] =0;
            }
        }
    }
    int contor = 0;
     for(int i =1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            if(a[i][j] ==1){
                contor++;
            }
        }
    }
    fout << contor/2 << endl;
    return 0;
}