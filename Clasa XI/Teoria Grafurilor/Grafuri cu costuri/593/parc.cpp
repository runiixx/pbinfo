#include <iostream>
#include <fstream>

std::ifstream fin("parc.in");
std::ofstream fout("parc.out");

int a[101][101],n,m,c,p,porti[101];
int rez[101];
int d[101],f[101];
const int INF = 1000000;
int minDistanta(){

    int minim = INF;
    int min_index = 0;
    for(int i =1;i<=n;i++){
        if(f[i] == 0 && d[i] < minim){
            minim = d[i];
            min_index = i;
        }
    }
    return min_index;
}
void afisare(int s){
    int x = 0;
    for(int i =1;i<=n;i++){
        if(d[i] !=INF)
            x+=d[i];
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
        for(int j =1;j<=n;j++){
            if(!f[j] && a[u][j] && d[u] + a[u][j]  < d[j]){
                d[j] = d[u] +a[u][j];
            }
        }
    }
}
int main(){

    fin>>n>>m>>c;

    int x,y,cost;
    for(int i =1;i<=m;i++){
        fin>>x>>y>>cost;
        a[x][y] = cost;
        a[y][x] = cost;
    }

    fin>>p;

    for(int i =1;i<=p;i++){
        fin>>porti[i];
    }
    int poarta, min = INF;
    for(int i =1;i<=p;i++){
        dijkstra(porti[i]);
        
        rez[porti[i]] = d[c];
        if(rez[porti[i]] <min){
            min = rez[porti[i]];
            poarta= porti[i];
        }
    }
    fout <<poarta <<std::endl;
}