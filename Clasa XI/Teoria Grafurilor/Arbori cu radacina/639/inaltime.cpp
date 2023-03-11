#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("inaltime.in");
ofstream fout("inaltime.out");
int main()
{
    int t[101],n;
    fin>>n;
    for(int i =1;i<=n;i++){
        fin>>t[i];
    }
    int contor;
    int nivel = 0;
    for(int i =1;i<=n;i++){
        contor=1;
        int x = i;
        while(t[x]!=0){
            contor++;
            x = t[x];
        }
        if(nivel <contor){
            nivel = contor;
        }
    }
    fout<<nivel<<endl;
    return 0;
}