#include <iostream>
#include <fstream>

std::ifstream  fin("preordine1.in");
std::ofstream fout("preordine1.out");

struct nod{
    int info;
    nod *st, *dr;
};
void creare(nod *&r, int x){
    if(x!=0){
        r = new nod;
        r->st = r->dr = nullptr;
        r->info = x;
        int y;
        fin>> y;
        creare(r->st,y);
        fin>> y ;
        creare(r->dr,y);

    }
}

void afisare(nod *r){
    
        fout << r->info << ' ';
        if(r->st !=nullptr){
            afisare(r->st);
        }
        if(r->dr != nullptr){
            afisare(r->dr);
        }
    
}
int main(){
    nod *r = new nod;
    int y;
    fin>>y;
    creare(r,y);
    afisare(r->st);
}