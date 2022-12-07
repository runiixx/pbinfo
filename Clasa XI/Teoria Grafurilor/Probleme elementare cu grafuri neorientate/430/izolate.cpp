#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("izolate.in");
ofstream fout("izolate.out");

int main(){

    int n,fr[101]={0};
    int x,y;
    fin >> n;
    while(fin >> x>> y){
        fr[x] ++;
        fr[y] ++;
    }
    int contor = 0;
    for(int i = 1;i<=n;i++){
        if(fr[i] == 0){
            contor ++;
        }
    }
    fout << contor << " ";
    for(int i = 1;i<=n;i++){
        if(fr[i] == 0){
            fout << i << " ";
        }
    }
    fout << endl;
}