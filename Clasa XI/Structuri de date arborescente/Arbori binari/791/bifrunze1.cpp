#include <fstream>
#include <algorithm>
std::ifstream fin("bifrunze1.in");
std::ofstream fout("bifrunze1.out");

struct nod{
    int info;
    nod *st,*dr;
};
int res[5001],n =1;
void creare(nod *&r,int x){
    if(x!=0){
        r = new nod;
        r->info = x;
        r->st = r->dr = nullptr;

        int y;

        fin>>y;
        creare(r->st,y);
        fin>> y;
        creare(r->dr,y);
    }
}

void afisare(nod *r){
    if(r->st !=nullptr)
        afisare(r->st);

    if(r->dr !=nullptr)
        afisare(r->dr);
    
    if(r->st == r->dr && r->st == nullptr){
        if(r->info !=0)
            res[n] = r->info;
        n++;
    }

}
int main(){
    nod *r= new nod;

    int x;
    fin>>x;

    creare(r,x);
    afisare(r);
    
    std::make_heap(res +1,res+1+n);
    std::sort_heap(res+1,res+1+n);
    for(int i = 2;i<=n;i++){
        fout << res[i] << " ";
    }
    return 0;
}