#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("arbore.in");
ofstream fout("arbore.out");
int n, k, a[101][101] = { 0 };
int v[101];
int t[101];
void dfs(int k, int nod) {
    t[k] = nod;
    
    v[k] = 1;
    for (int i = 1; i <= n; i++) {
        if (a[k][i] == 1 && v[i] == 0) {
            dfs(i, k);
            
        }
    }
}
int main()
{
    
    int x, y;
    fin >> n >> k;
    for (int i = 1; i < n; i++) {
        fin >> x >> y;
        a[x][y] = 1;
        a[y][x] = 1;

    }
    
    dfs(k, 0);
    for (int i = 1; i <= n; i++) {
        fout << t[i] << " ";
    }
}
