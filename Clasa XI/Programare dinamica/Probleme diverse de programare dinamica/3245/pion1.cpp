#include <iostream>
#include <cmath>
int main(){
    int n,a[102][102];

    std::cin>>n;

    for(int i =1;i<=n;i++){
        for(int j =1;j<=n;j++){
            std::cin>>a[i][j];
        }
    }

    for(int i =1;i<=n;i++){
        for(int j =1;j<=n;j++){
            a[i][j] += std::max(a[i-1][j-1],a[i-1][j+1]);
        }
    }

    for(int i =1;i<=n;i++){
        for(int j =1;j<=n;j++){
            std::cout << a[i][j] << ' ';
        }
        std::cout << std::endl;
    }
    int max = 0;
    for(int j =1;j<=n;j++){
        if(a[n][j] > max){
            max = a[n][j];

        }

    }
    std::cout << max << std::endl;
}