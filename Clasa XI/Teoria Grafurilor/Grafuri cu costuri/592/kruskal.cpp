#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("kruskal.in");
ofstream fout("kruskal.out");
struct muchie {
    int i, j, cost;
};

int n, m, t[101];
muchie rez[101];
int k;

muchie x[5000];

int main()
{
    fin >> n >> m;

    for (int i = 1; i <= m; ++i) {
        fin >> x[i].i >> x[i].j>> x[i].cost;
    }

    muchie aux;
    for (int i = 1; i < m; i++) {
        for (int j = i+1; j <= m; j++) {
            if (x[i].cost > x[j].cost) {
                aux = x[i];
                x[i] = x[j];
                x[j] = aux;
            }
        }
    }

    
    for (int i = 1; i <= n; i++) {
        t[i] = i;
    }

    int S = 0;
    k = 1;
    for (int i = 1; i <= m; i++) {
        if (t[x[i].i] != t[x[i].j]) {
            S += x[i].cost;
            rez[k] = x[i];
            k++;
            int ai = t[x[i].i];
            int aj = t[x[i].j];
            for (int j = 1; j <= n; j++) {
                if (t[j] == aj) {
                    t[j] = ai;
                }
            }
        }
    }
    fout << S << endl;
    for (int i = 1; i < k; i++) {
        fout << rez[i].i << " " << rez[i].j << endl;
    }

}
