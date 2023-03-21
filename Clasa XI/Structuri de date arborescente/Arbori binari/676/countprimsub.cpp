#include <iostream>
#include <fstream>

std::ifstream fin("countprimsub.in");
std::ofstream fout("countprimsub.out");
struct nod{
    int info,st,dr;
}noduri[1001];

bool fr[1001] = {false};
int verifprim(int k){
    if(k<2)
        return 0;
    for(int i =2;i*i<=k;i++){
        if(k%i == 0)
            return 0;
    }   
    return 1;
}
int count(int k){
    if(k==0){
        return 0;
    }
    if(verifprim(noduri[k].info))
         return 1+ count(noduri[k].st) +count(noduri[k].dr);
    return count(noduri[k].st)+count(noduri[k].dr);
    
    }



int main(){

    int n,k,x;
    fin>>n;

    for(int i =1;i<=n;i++){
        fin>>noduri[i].info>>noduri[i].st >> noduri[i].dr;
        fr[noduri[i].st] = true;
        fr[noduri[i].dr] = true;
    }
    



    for(int i =1;i<=n;i++){
        if(fr[i]==0){
            x = i;
        }
    }
    fin>>k;
    int y;
    for(int i =1;i<=k;i++){
        fin>>y;
        fout << count(y)<< std::endl;
    }

}