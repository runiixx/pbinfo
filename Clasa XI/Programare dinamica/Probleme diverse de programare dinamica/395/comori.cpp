#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("comori.in");
ofstream fout("comori.out");
int maxim(int a, int b, int c)
{
    int max=a;
    if (b>max)
        max=b;
    if (c>max)
        max=c;
    return max;
}

int main(){
    int a[201][201];
    int x[201][201] = {0};
    int n,m;
    fin >> n>>m;
    for(int i=1;i<=n;i++){
        for(int j =1;j<=m;j++){
            fin >> a[i][j];
        }
    }
    for(int j=1;j<=m;j++){
        x[1][j] = a[1][j];
    }

    for(int i=2;i<=n;i++){
        for(int j =1;j<=m;j++){
            x[i][j] = a[i][j] +maxim(x[i-1][j],x[i-1][j+1],x[i-1][j-1]);
            
        }
    }
    int max = 0;
    for(int j=1;j<=m;j++){
        if(max < x[n][j]){
            max = x[n][j];
        }
    }
    fout << max << endl;
    return 0;
}