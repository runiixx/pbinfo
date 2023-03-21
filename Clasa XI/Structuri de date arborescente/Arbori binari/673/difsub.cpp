#include <iostream>
#include <fstream>
#include <cmath>

std::ifstream fin("difsub.in");
std::ofstream fout("difsub.out");
struct nod{
    int info,st,dr;
}noduri[1001];

void preordine(int k, int &suma){
    suma+=noduri[k].info;
    if(noduri[k].st !=0){
        preordine(noduri[k].st, suma);
    }
    if(noduri[k].dr!=0){
        preordine(noduri[k].dr,suma);
    }
}

int suma(int k){
    if(k ==0)
        return 0;
    else
        return noduri[k].info+suma(noduri[k].st) +suma(noduri[k].dr);
}
int main(){

    int n;
    fin>>n;
    bool fr[1001] = {false};
    for(int i =1;i<=n;i++){
        fin>>noduri[i].info >> noduri[i].st >> noduri[i].dr;
        fr[noduri[i].st] = true;
        fr[noduri[i].dr] = true;
    }
    int sumas = 0, sumad = 0;
    for(int i =1;i<=n;i++){
        if(fr[i] == 0){
           
            fout<<std::abs(suma(noduri[i].st)-suma(noduri[i].dr));

        }
    }
    
    
    return 0;
}