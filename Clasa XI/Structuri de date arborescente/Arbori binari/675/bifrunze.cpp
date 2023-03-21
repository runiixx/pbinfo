#include <iostream>
#include <fstream>

std::ifstream fin("bifrunze.in");
std::ofstream fout("bifrunze.out");

int x,s,d,n;

int main(){
    fin>>n;
    for(int i=1;i<=n;i++){
        fin>>x>>s>>d;
        if(s==0 &&d==0){
            fout<< i<<" ";
        }
    }
    fout<<std::endl;
}