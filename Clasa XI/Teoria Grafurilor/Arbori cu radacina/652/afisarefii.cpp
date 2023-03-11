#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("afisarefii.in");
ofstream fout("afisarefii.out");

void stergere(int raspunsuri[101],int n) {
    for (int i = 1; i <= n; i++) {
        raspunsuri[i] = 0;
    }
}
int main()
{
    int a[101][101] = { 0 };
    int n, m, k;
    int t[101];
    int noduri[101];
    fin >> n;
    for (int i = 1; i <= n; i++) {
        fin >> t[i];
    }
    fin >> k;
    for (int i = 1; i <= k; i++) {
        fin >> noduri[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= k; j++) {
            if (t[i] == noduri[j]) {
                a[i][j] = 1;
            }
        }
    }

    
    
    int contor = 0;
    int raspunsuri[101] = { 0 };
    int d = 1;
    for (int j = 1; j <= k; j++) {
        
        stergere(raspunsuri, contor);
        contor = 0;
        d = 1;
        for (int i = 1; i <= n; i++) {
            if (a[i][j] == 1) {
                raspunsuri[d] = i;
                d++;
                contor++;
            }
        }
        fout << contor << " ";
        for (int i = 1; i <= contor; i++) {
            fout << raspunsuri[i] << " ";
        }
        fout << endl;
    }
}
