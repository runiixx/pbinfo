#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("conex.in");
ofstream fout("conex.out");

int v[101] = {0};
int n;
int a[101][101] = {0};

void dfs(int k){
    v[k] = 1;
    for(int i =1;i<=n;i++){
        if(a[k][i] ==1&& v[i] == 0){
            dfs(i);
        }
    }
}
int main()
{
    fin >> n;
    int x,y;
    while(fin >> x >> y){
        a[x][y] = 1;
        a[y][x] = 1;
    }
    dfs(1);
    int ok = 1;
    for(int i =1;i<=n;i++){
        if(v[i] == 0){
            ok = 0;
        }
    }
    if(ok == 1){
        fout << "DA";
    }
    else{
        fout << "NU";
    }
    return 0;
}