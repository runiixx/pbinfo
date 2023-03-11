#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("frunze.in");
ofstream fout("frunze.out");


int main()
{
    int t[101];
    int frunze[101];
    int contor = 0;
    int radacina = 0;

    int n;
    fin >> n;
    for(int i =1;i<=n;i++){
        fin >> t[i];
        if(t[i] == 0){
            radacina = i;
        }
    }
    int ok;
    for(int i =1;i<=n;i++){

        ok = 1;
        for(int j =1;j<=n;j++){
            if(t[j] == i){
                ok = 0;
            }
        }
        if(ok == 1){
            frunze[contor] = i;
            contor++;
        }
    }

    fout << radacina<<endl<<contor<<endl;
    for(int i =0;i<contor;i++){
        fout<<frunze[i]<<" ";
    }
    fout <<endl;
    return 0;
}