#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("dfs.in");
ofstream fout("dfs.out");
int v[101], h[101][101],n,m;
void dfs(int k){
    fout << k << " ";
    v[k] = 1;
    for(int i =1;i<=n;i++){
        if(h[k][i] == 1 && v[i] == 0){
            dfs(i);
        }
    }
}
int main()
{
    int x;
    fin >> n>>m>>x;
    for(int i =1;i<=m;i++){
        int a,b;
        fin>>a>>b;
        h[a][b] = 1;
        h[b][a] = 1;

    }
    dfs(x);

    return 0;
}