#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("nrnod.in");
ofstream fout("nrnod.out");
int contor = 0;
struct nod {
    nod* st;
    nod* dr;
    int val;
};
void creare(nod*& r, int x) {
    if (x != 0) {
        r = new nod;
        r->val = x;
        r->st = r->dr = NULL;
        int y;
        fin >> y;
        creare(r->st, y);
        fin >> y;
        creare(r->dr, y);;

    }
    
}

void Afisare(nod* r)
{
    if (r != NULL)
    {
        cout << r->val << " ";
        Afisare(r->st);
        Afisare(r->dr);
    }
}

void desDirect(nod* r) {
    if (r != NULL) {
        if ((r->st == NULL || r->dr == NULL) && r->st != r->dr) {
            contor++;
            
        }
        desDirect(r->st);
        desDirect(r->dr);
    }
}

int main()
{
    nod* R = NULL;
    int x;
    cout << "Eticheta radacinii: "; fin >> x;
    creare(R, x);
    
    desDirect(R);
    fout << contor << endl;
    return 0;
}
