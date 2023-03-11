#include <iostream>
#include <fstream>
int n,k,m;
int a[101][101] = {0};
int v[101];
using namespace std;
ifstream fin("bipartit.in");
ofstream fout("bipartit.out");
bool cautare(int x){
    for(int i = 1;i<=k;i++){
        if(v[i] == x){
            return true;
        }
    }
    return false;
}
int main(){
    
    fin>> n>>m;
    int x,y;
    for(int i =1;i<=m;i++){
        fin >> x >> y;
        a[x][y] = 1;
        a[y][x] = 1;
    }
    fin >> k;
    for(int i = 1;i<=k;i++){
        fin >> v[i];
    }
    int ok = 1;
    for(int i =1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            if(a[i][j] == 1 && cautare(i) == cautare(j) ){
                ok = 0;
            }
        }
    }
    if(ok ==0){
        fout << "NU" << endl;
    }
    else{
        fout << "DA"<< endl;
    }
    return 0;
}