#include <fstream>

std::ifstream fin("inaltime1.in");
std::ofstream fout("inaltime1.out");

struct nod{
    int info;
    nod *st, *dr;
};
int inaltime = 0;
void creare(nod *&r, int x){
    if(x!=0){
        r = new nod;
        r->info = x;
        r->st = r->dr = nullptr;

        int y;
        fin>>y;
        creare(r->st,y);
        fin>>y;
        creare(r->dr,y);
    }
}
void afisare(nod *r, int nivel){
    if(r->st !=nullptr)
        afisare(r->st, nivel+1);

    if(r->dr !=nullptr)
        afisare(r->dr,nivel+1);
    if(inaltime < nivel)
        inaltime = nivel;
}
int main(){
    nod *r = new nod;
    int x;
    fin>> x;
    creare(r,x);
    afisare(r,1);
    fout << inaltime;
    return 0;
}