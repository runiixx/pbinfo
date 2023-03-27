#include <fstream>

std::ifstream fin("biminprim.in");
std::ofstream fout("biminprim.out");

struct nod{
    int info;
    nod *st,*dr;
};

bool prim(int x){
    if(x<2)
        return false;

    for(int i =2;i*i <=x;i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}
int min = 9999999;
void afisare(nod *r){
    if(r->st !=nullptr)
        afisare(r->st);
    if(r->dr !=nullptr)
        afisare(r->dr);

    if(prim(r->info) && min > r->info){
        min  = r->info;
    }
    
}
void creare(nod *&r, int x){
    if(x!=0){
        r = new nod;
        r->info = x;
        r->st = r->dr = nullptr;

        int y;
        fin>>y;
        creare(r->st, y);
        fin>>y;
        creare(r->dr,y);
    }
}
int main(){
    nod *r = new nod;
    int x;
    fin >> x;
    creare(r,x);

    afisare(r->st);
    fout << ((min!=9999999)? min : -1) << ' ';
    min = 9999999;
    afisare(r->dr);
    fout << ((min!=9999999)? min : -1);

    return 0;
}