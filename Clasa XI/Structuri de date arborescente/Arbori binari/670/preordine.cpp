#include <iostream>
#include <fstream>

std::ifstream fin("preordine.in");
std::ofstream fout("preordine.out");

bool fr[1001] = {false};
struct nod{
    int info,st,dr;
}noduri[1001];
void preordine(int k){
    fout<<k<<" ";
    if(noduri[k].st!=0)
        preordine(noduri[k].st);
    if(noduri[k].dr !=0)
        preordine(noduri[k].dr);

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
    preordine(x);

    return 0;

    
}