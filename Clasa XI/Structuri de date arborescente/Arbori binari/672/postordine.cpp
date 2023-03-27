#include <iostream>
#include <fstream>

std::ifstream fin("postordine.in");
std::ofstream fout("postordine.out");
struct muchie{
    int info,x,y;
} muchii[1001];
bool fr[1001];
int n;

void postordine(int s){
    if(muchii[s].x !=0){
        postordine(muchii[s].x);
    }
    if(muchii[s].y !=0){
        postordine(muchii[s].y);
    }
    fout << muchii[s].info << " ";
}
int main(){
    fin>> n;
    for(int i =1;i<=n;i++){
        fin>>muchii[i].info>>muchii[i].x>>muchii[i].y;
        fr[muchii[i].x] =true;
        fr[muchii[i].y] = true;
    }

    for(int i =1;i<=n;i++){
        if(fr[i] == false){
            postordine(i);
        }
    }
}