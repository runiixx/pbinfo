#include <iostream>
#include <fstream>

std::ifstream fin("BFS.in");
std::ofstream fout("BFS.out");

int t[101],a[101][101],n,m,X,x[101],v[101];
int bfs(int start){
    fout << start<< " ";
    int i,k,st,dr;
    st = dr =1;
    x[1] = start;
    v[start] =1;

    while(st<=dr){
        k = x[st];
        for(i = 1;i<=n;i++)
            if(v[i] == 0 && a[k][i] == 1){
                fout << i << " ";
                v[i] = 1;
                x[++dr] =i;
            }
        st++;
    }
    return dr;
}
int main(){

    fin >> n>>m>>X;
    int d,b;
    for(int i =1;i<=m;i++){
        fin>>d>>b;
        a[d][b] = 1;
        a[b][d] = 1;
    }

    std::cout << bfs(X) << std::endl;


    return 0;
}