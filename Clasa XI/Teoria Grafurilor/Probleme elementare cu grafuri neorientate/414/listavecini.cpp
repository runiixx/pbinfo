#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("listavecini.in");
ofstream fout("listavecini.out");

int main(){
    int n;
    fin >> n;
    int x,y;
    int a[101][101] = {0};
    while(fin>>x >> y){
        a[x][y] = 1;
        a[y][x] = 1;
    }
    int vecin;
    int vecini[101] = {0};
    int k =0;
    for(int i = 1;i<=n;i++){
        vecin = 0;
        for(int d =1;d<=100;d++){
            vecini[d] = 0;
        }
        k =1;
        for(int j = 1;j<=n;j++){
            if(a[i][j] ==1){
                vecin ++;
                vecini[k] = j;
                k++;
            }
        }
        fout << vecin << " ";
        for(int d = 1;d<k;d++){
            fout << vecini[d] << " ";
        }
        fout << endl;
    }
    return 0;
}