#include <iostream>
#include <fstream>

std::ifstream fin("componenteconexe2.in");
std::ofstream fout("componenteconexe2.out");

int a[101][101];
int v[101];

void lungime(int start){
    v[start] = 1;
    for(int i =1;i<=n;i++){
        if(v[i] == 0 && a[start][i] ==0){
            lungime(i);
        }
    }
}
int main(){
    int n;
    fin>>n;

    int x,y;
    int muchii = 0;
    while(fin>>x>>y){
        if(a[x][y] ==0 || a[y][x] ==0){
            a[x][y] =1;
            a[y][x] = 1;
            muchii++;
        }
    }
    fout << muchii - n+1;
    return 0;
}