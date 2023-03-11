#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("grade.in");
ofstream fout("grade.out");

int main(){

    int n;
    fin >> n;
    int a[101][101] = {0};
    int x,y;
    while(fin>>x>>y){
        a[x][y] = 1;
        a[y][x] = 1;
    }
    int fr[101] = {0};
    for(int i =1;i<=n;i++){
        for(int j = 1;j <=n;j++){
            if(a[i][j] ==1){
                fr[i] ++;
            }
        }
    }
    for(int i =1;i<=n;i++){
        fout << fr[i] << " ";
    }
}