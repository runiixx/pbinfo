#include <iostream>
#include <fstream>
#include <cmath>
std::ifstream fin("arme.in");
std::ofstream fout("arme.out");
int n,m,pbn[1001],pbm[1001];
int arme[2002];
int main(){
   

    fin>>n>>m;
    for(int i =1;i<=n+m;i++){
        fin>>arme[i];
    }
    
    int sortat,aux;

    do{
        sortat = 0;
        for(int i =1;i<n+m;i++){
            if(arme[i] >arme[i+1]){
                aux = arme[i];
                arme[i] = arme[i+1];
                arme[i+1] = aux;
                sortat = 1;
            }
        }
    }while(sortat == 1);
    int s = 0;

    for(int i =n+m;i>m;i--){
        s+=arme[i];
    }
    fout << s << std::endl;

    fin.close();
    fout.close();
    return 0;
}