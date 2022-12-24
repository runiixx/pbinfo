#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("lantq.in");
ofstream fout("lantq.out");
int n,m,q;
int a[101][101] = {0};
int fr[21] = {0};
int pasi[21] = {0};

void afisare(int x){
    for(int i =1;i<=20;i++){
        if(pasi[i]!=0)
            fout<<pasi[i] << " ";
    }
    fout << endl;
}
void bkt(int k){
    for(int i =1;i<=n;i++){
        if(a[i][pasi[k-1]] ==1){
            pasi[k] = i;
            if(fr[i] ==0){
                fr[i] = 1;
                if(i==q){
                    afisare(k);
                }
                else(bkt(i));
                fr[i] = 0;
            }
        }
    }
}
int main(){

    fin >> n>>m;
    int x,y;
    for(int i =1;i<=m;i++){
        fin >> x >> y;
        a[x][y] = 1;
        a[y][x] = 1;
    }
    fin >> q;
    pasi[1] = 1;
    bkt(1);
    return 0;
}