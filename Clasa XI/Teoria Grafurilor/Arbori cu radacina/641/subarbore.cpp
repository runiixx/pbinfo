#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("subarbore.in");
ofstream fout("subarbore.out");

int main(){
    int n,k,t[101];
    fin >> n >> k;
    for(int i =1;i<=n;i++){
        fin>>t[i];
    }

    for(int i =1;i<=n;i++){
        int x = i;
        while(t[x] !=0 ){
            if(x ==k){
                fout<<i<<" ";
            }
            x = t[x];
            
        }
    }
}