#include <iostream>
#include <cmath>
#include <fstream>

std::ifstream fin("sumtri_xi.in");
std::ofstream fout("sumtri_xi.out");

int a[102][102],n,max = 0;
void afisare(){
    for(int i =1;i<=n;i++){
        for(int j =1;j<=n;j++){
            std::cout << a[i][j] << " ";
        }
        std::cout << std::endl;
    }

}
int main(){

    fin>> n;
    for(int i =1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            fin>> a[i][j];
        }
    }
    std::cout << std::endl;
    for(int i =n;i>=1;i--){
        for(int j = i;j>=1;j--){
            if(i==j){
                a[i][j] +=a[i+1][j+1];
                
            }
            else if(i==n){
                a[i][j] +=a[i][j+1];
            }
            else{
                a[i][j] += std::max(a[i][j+1],a[i+1][j+1]);
            }
        }
    }
    for(int i =1;i<=n;i++){
        if(a[i][1] > max){
            max = a[i][1];
        }

    }
    fout<<max << std::endl;
}