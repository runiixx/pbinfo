#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("nrfii.in");
ofstream fout("nrfii.out");

int main(){
    int t[101],n,max = 0;

    fin>>n;
    for(int i =1;i<=n;i++){
        fin>>t[i];
    }
    int contor;
    for(int i =1;i<=n;i++){
        contor =0;
        for(int j = 1;j<=n;j++){
            if(t[j] == i){
                contor++;
            }
        }
        if(max <contor){
            max = contor;
        }
    }
    for(int i =1;i<=n;i++){
        contor =0;
        for(int j = 1;j<=n;j++){
            if(t[j] == i){
                contor++;
            }
        }
        if(max ==contor){
            fout<< i<< " ";
        }
    }
    return 0;
}