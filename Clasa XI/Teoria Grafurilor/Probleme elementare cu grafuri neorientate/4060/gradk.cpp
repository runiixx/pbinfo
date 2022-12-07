#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("gradk.in");
ofstream fout("gradk.out");

int main(){
    int k,n,x,y,contor=0;
    int a[101][101] = {0};
    fin >> n >> k;
    while(fin >> x>>y){
        a[x][y] = 1;
        a[y][x] = 1;

    }
    int fr[101] = {0};
    for(int i =1;i<=n;i++){
        for(int j =1;j<=n;j++){
            if(a[i][j] ==1){
                fr[i] ++;
            }
        }
    }
    for(int i = 1;i<=n;i++){
        if(fr[i] ==k){
            contor++;
        }
        else{
            fr[i] =0;
        }
    }
    if(contor ==0){
        fout << "NU EXISTA";
    }
    else{
        fout << contor << " ";
        for(int i = 1;i<=n;i++){
            if(fr[i] ==k){
                fout << i << " ";
            }
        
        }
    }
    return 0;
}