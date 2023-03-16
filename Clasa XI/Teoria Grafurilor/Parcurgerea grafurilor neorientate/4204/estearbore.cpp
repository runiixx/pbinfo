#include <iostream>
#include <fstream>

std::ifstream fin("estearbore.in");
std::ofstream fout("estearbore.out");
int a[101][101],n,contor = 0,ok = 1, v[101];

int dfs(int k){
    v[k] = 1;
    for(int i =1;i<=n;i++){
        if(v[i] ==0 && a[k][i] == 1){
            dfs(i);
        }
    }
}
int main(){

    fin >>n;
    int x,y;
    while(fin>>x>>y){
        if(a[x][y] == 0){
            contor++;
            a[x][y] = 1;
            a[y][x] = 1;
           
        }
    }
    dfs(1);
    if(contor !=n-1){
        ok = 0;
    }
    for(int i =1;i<=n;i++){
        if(v[i] == 0){
            ok = 0;
        }
    }
    if(ok == 1){
        fout<<"DA"<<std::endl;
    }
    else{
        fout<<"NU"<<std::endl;
    }
}