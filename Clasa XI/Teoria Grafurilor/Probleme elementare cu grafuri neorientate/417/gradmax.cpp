#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("gradmax.in");
ofstream fout("gradmax.out");

int main(){
    int n,x,y;
    int a[101][101] ={0};
    fin >> n;
    while(fin>>x>>y){
        a[x][y] = 1;
        a[y][x] = 1;
    }
    int nod[101] = {0};
    int contor = 0;
    for(int i =1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            if(a[i][j] ==1){
                nod[i] ++;
            }
        }
    }
    int max =0;
    for(int i =1;i<=n;i++){
        if(max<nod[i]){
            max = nod[i];
        }
    }
    int raspuns[101] = {0};
    int k =0;
    for(int i =1;i<=n;i++){
        if(max == nod[i]){
            k++;
            raspuns[k] = i;
            contor++;
        }
    }
    fout << contor << " ";
    for(int i =1;i<=k;i++){
        fout << raspuns[i] << " ";
    }
    return 0;
}