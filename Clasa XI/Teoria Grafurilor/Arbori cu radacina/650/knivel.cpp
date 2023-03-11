#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("knivel.in");
ofstream fout("knivel.out");

int main()
{
    int t[101], n,k;
    fin>>n>>k;

    for(int i =1;i<=n;i++){
        fin>>t[i];
    }

    for(int i =1;i<=n;i++){
        int contor = 1;
        int x = i;
        while(t[x]!=0){
            contor++;
            x = t[x];
        }
        if(contor == k){
            fout<< i<<" ";
        }
    }
    return 0;
}