#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("componenteconexe.in");
ofstream fout("componenteconexe.out");

int n , m ;
int a[101][101] = {0} , v[101] = {0}; 
int contor = 0;

void dfs(int k , int val){
    v[k] = val;
    for(int i = 1 ; i <= n ; i++)
        if(!v[i] && a[k][i] == 1) {
            dfs(i , val);
            v[i] = val;
        }
}

int main(){
    fin >> n;
    int x,y;
    while(fin >> x >> y) {
        a[x][y] = 1;
        a[y][x] = 1;
        m++;
    }


    for(int i = 1 ; i <= n ; i++){
        if(v[i] == 0){ 
            dfs(i , contor + 1);
            contor++;
        }
    }
    fout << contor <<endl;


    for(int i = 1 ; i <=contor ; i++){
        for(int j = 1 ; j <= n ; j++)
            if(i == v[j]){
                 fout << j << " ";
            }
        fout << endl;
    }

    return 0;
}