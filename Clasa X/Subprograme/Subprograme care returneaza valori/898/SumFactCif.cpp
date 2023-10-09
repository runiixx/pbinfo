#include <iostream>

long long int sumfactcif(int n){
    long long int suma = 0;
    int fac ;
    if(n==0)
        suma = 1;
    while(n!=0){
        fac = 1;
        for(int i =2;i<=n%10;i++){
            fac *=i;
        }
        suma+=fac;
        n/=10;
    }
    return suma;
}


int main(){

    std::cout <<sumfactcif(1999999999);
}