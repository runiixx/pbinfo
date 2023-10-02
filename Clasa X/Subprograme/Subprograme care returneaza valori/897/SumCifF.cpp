#include <iostream>

int sumcif(int n){
    int suma = 0;
    while(n!=0){
        suma+=n%10;
        n/=10;
    }
    return suma;
}

int main(){
    std::cout << sumcif(241);
}