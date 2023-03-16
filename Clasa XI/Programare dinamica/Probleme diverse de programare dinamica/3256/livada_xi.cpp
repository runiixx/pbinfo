#include <iostream>
#include <fstream>
#include <cmath>

std::ifstream fin("livada_xi.in");
std::ofstream fout("livada_xi.out");

int a[102][102],min = 9999999,n;
void afisare(){
    for(int i =1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            std::cout <<a[i][j] <<" ";
        }
        std::cout << std::endl;
    }
}
int main(){

    fin>>n;

    for(int i =1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            fin>>a[i][j];
        }
    }
    std::cout << std::endl;
    for(int i =n;i>=1;i--){
        for(int j =1;j<=i;j++){
            if(j==1){
                a[i][j] +=a[i+1][j];
            }
            else{
                if(i==n){
                    a[i][j] += std::max(a[i+1][j],a[i][j-1]);
                }
                else{
                    a[i][j] += std::min(a[i+1][j],a[i][j-1]);
                }
                
            }
            
        }
    }

    for(int i =1;i<=n;i++){
        if(a[i][i] <min){
            min = a[i][i];
        }

    }
    fout << min<<std::endl;
    return 0;
}