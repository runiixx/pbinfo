#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("nivele.in");
ofstream fout("nivele.out");

int main()
{
    int t[101],n,k,a[101];
    fin >> n;
    for(int i =1;i<=n;i++){
         fin>>t[i];
    }
    fin>>k;
    for(int i =1;i<=k;i++){
        fin>>a[i];
    }
    int contor;
    for(int i =1;i<=k;i++){
        contor = 1;
        int x = a[i];
        while(t[x] !=0){
            contor++;
            x = t[x];
        }
        fout << contor<<endl;
    }
    return 0;
}