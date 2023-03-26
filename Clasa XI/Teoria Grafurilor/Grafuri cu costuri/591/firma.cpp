#include <iostream>
#include <fstream>

std::ifstream fin("firma.in");
std::ofstream fout("firma.out");

const int INF = 1000000;

int n,m;
muchie muchii[101];

int rez[101];

int a[101][101];
int d[101],f[101];

int minDistanta(){
    int minim = INF;
    int min_index = 0;
    for(int i =1;i<=n;i++){
        if(f[i] == 0 && d[i]<minim){
            minim = d[i];
            min_index = i;
        }
    }
    return min_index;
}

void afisare(int s){
    int x = 0;
    for(int i =1;i<=n;i++){
        x+= d[i];

        
    
        
    }
    rez[s] = x;
}

void dijkstra(int s){
    for(int i =1;i<=n;i++){
        d[i] = INF;
        f[i] = 0;
    }
    d[s] = 0;

    for(int i =1;i<=n;i++){
        int u = minDistanta();
        f[u] = 1;
        for(int j=1;j<=n;j++){
            if(!f[j] && a[u][j] && d[u] + a[u][j] <d[j] ){
                d[j] = d[u] + a[u][j];
            }
        }
    }
}

int main(){
    fin>> n>>m;

    int x,y,c;
    for(int i =1;i<=m;i++){
        fin >>x>>y>>c;
        a[x][y] = c;
        a[y][x] = c;
    }
    int oras = 0,min = INF;
    for(int i =1;i<=n;i++){
        dijkstra(i);
        afisare(i);
        if(min > rez[i]){
            min = rez[i];
            oras = i;
        }
       
    }

    fout << oras<<std::endl;
    
    return 0;
}