#include <iostream>
#include <fstream>
std::ifstream fin("componenteconexe3.in");
std::ofstream fout("componenteconexe3.out");

int a[101][101],n,repr[101],v[101],reprr;
int dfs(int k,int reprezentant){
    v[k] = 1;
    for(int i =1;i<=n;i+){
        if(v[k] ==0 && a[i][k] == 1){
            dfs(i);
        }
    }
    repr[reprezentant]++;
}
int main(){

    fin>>n;

    int x,y;
    while(fin>>x>>y){
        a[x][y] = 1;
        a[y][x] = 1;
    }
    int max = 0;
    for(int i =1;i<=n;i++){
        if(v[i] == 0){
            dfs(i,i);
            if(max <repr[i]){
                max = repr[i];
                reprr = i;
            }
        }
    }

    fout <<reprr << std::endl << max << std::endl;
    return 0;
}