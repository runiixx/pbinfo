#include <iostream>
#include <fstream>

std::ifstream fin("inordine.in");
std::ofstream fout("inordine.out");

bool fr[1001] = {false};
struct nod{
    int info,st,dr;
}noduri[1001];
void inordine(int k){
    
    if(noduri[k].st!=0)
        inordine(noduri[k].st);
    fout<<k<<" ";
    if(noduri[k].dr !=0)
        inordine(noduri[k].dr);

}

int main(){
    int n;
    fin>>n;
    for(int i=1;i<=n;i++){
        fin>>noduri[i].info>>noduri[i].st>>noduri[i].dr;
        fr[noduri[i].st] = true;
        fr[noduri[i].dr] = true;
    }
    int x;
    for(int i =1;i<=n;i++){
        if(fr[i] == false){
            x = i;
        }
    }
    
    inordine(x);

    return 0;

    
}