#include <iostream>
#include <fstream>

std::ifstream fin("nivelebin.in");
std::ofstream fout("nivelebin.out");

struct nod{
    int info,st,dr;
}noduri[1001];
bool fr[1001] = {false};
int nivele[1001];
int max;
void preordine(int k,int nivel){
    if(max < nivel){
        max = nivel;
    }
    nivele[nivel]++;
    //fout << noduri[k].info<< " ";
    if(noduri[k].st != 0)
        preordine(noduri[k].st,nivel+1);
    if(noduri[k].dr !=0)
        preordine(noduri[k].dr,nivel+1);
}
int main(){
    int n;

    fin>>n;

    
    for(int i =1;i<=n;i++){
        fin>>noduri[i].info>>noduri[i].st>>noduri[i].dr;
        fr[noduri[i].st] = true;
        fr[noduri[i].dr] = true;
    };

    

    for(int i =1;i<=n;i++){
        if(fr[i]==false){
            preordine(i,1);
        }
    }

    fout << max << std::endl;

    for(int i =1;i<=max ; i++){
        fout << nivele[i] << " ";
    }


}