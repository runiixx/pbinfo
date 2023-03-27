#include <fstream>

std::ifstream fin("postordine1.in");
std::ofstream fout("postordine1.out");

struct nod{
    int info;
    nod *st, *dr;
};
void creare(nod *&r, int x){
    if(x!=0){
        r = new nod;
        r->info = x;
        r->st = r->dr = nullptr;
        
        int y;
        fin>> y;
        creare(r->st,y);
        fin>>y;
        creare(r->dr,y);
    }
}

void afisare(nod *r){
    if(r->st !=nullptr){
        afisare(r->st);
    }
    if(r->dr !=nullptr){
        afisare(r->dr);
    }
    fout << r->info << " ";
}
int main(){
    nod *r = new nod;

    int x;
    fin>> x;

    creare(r,x);
    afisare(r);

    return 0;
}