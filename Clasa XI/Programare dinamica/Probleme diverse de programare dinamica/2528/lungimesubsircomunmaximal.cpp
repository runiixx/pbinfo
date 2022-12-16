#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
ifstream fin("lungimesubsircomunmaximal.in");
ofstream fout("lungimesubsircomunmaximal.out");
int n , m , cnt;
char a[1001] , b[1001] ;
int d[1001][1001];
int main()
{
    fin >> a >> b;
    for(int i = 1 ; i <= strlen(a) ; i++){
        for(int j = 1 ; j <= strlen(b) ; j++){
            if(a[i - 1] == b[j - 1]){
                 d[i][j] = d[i - 1][j - 1] + 1;
            }
            else {
                d[i][j] = max(d[i - 1][j] , d[i][j - 1]);
            }
        }
    }
    fout << d[strlen(a)][strlen(b)];
}