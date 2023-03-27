#include <iostream>
#include <fstream>

std::ifstream fin("biarbore.in");
std::ofstream fout("biarbore.out");


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
        creare(r->st, y);
        fin>> y;
        creare(r->dr,y);
    }
}

int main(){
    nod *r = nullptr;
    int y;
    fin>>y;
    creare(r,y);

    
    fout << ((r->st !=nullptr)? r->st->info : 0) << " " << ((r->dr !=nullptr)? r->dr->info: 0) << std::endl;
}