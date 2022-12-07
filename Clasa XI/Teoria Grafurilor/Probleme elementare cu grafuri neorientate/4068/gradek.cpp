#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("gradek.in");
ofstream fout("gradek.out");

int main(){
    int a[101][101] = {0};
    int fr[101] = {0};
    int n,k;
    fin >> n>>k;

    int x,y;
    while(fin >> x >> y){
        a[x][y] = 1;
        a[y][x] = 1;
    }
    int contor = 0;
    
    for(int i =1;i<=n;i++){
        for(int j =1;j<=n;j++){
            if(a[i][j] == 1){
                fr[i] ++;
            }
        }
    }
    for(int i =1;i<=n;i++){
        if(fr[i] == fr[k]){
            contor++;
        }
        else{
            fr[i] =0;
        }
    }
    fout << contor << endl;
    for(int i =1;i<=n;i++){
        if(fr[i]!=0){
            fout << i << " ";
        }
    }
    fout << endl;
    return 0;
}