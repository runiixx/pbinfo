#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("nivele11.in");
ofstream fout("nivele11.out");
int raspunsuri[202] = {0};
int d = 0;
int main(){
    int t[101],n;
    
    fin>>n;
    for(int i =1;i<=n;i++){
        fin >>t[i];
    }
    int contor = 0;
    int nod;
    int contorn;
    for(int i =0;i<=n;i++){
        contorn = 0;
        for(int j =1;j<=n;j++){
            
            contor = 0;
            int x = j;
            nod = x;
            while(t[x] !=0){
                contor++;
                x = t[x];
                
            }
            if(contor == i){
            contorn++;
            fout << nod<<" ";
            }
            
            
        }
        if(contor!=0 && contorn!=0){
            fout<< endl;
        }
        
    }
}