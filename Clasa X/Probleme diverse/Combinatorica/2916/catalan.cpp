#include <iostream>
#include <boost/multiprecision/cpp_int.cpp>

unsigned long long int binomialCoeff(unsigned long long int n, unsigned long long k){
    unsigned long long int res = 1;
    if(k>n-k){
        k = n-k;
    }

    for(int i =0;i<k;++i){
        res*=(n-i);
        res/=(i+1);
    }

    return res;
}

unsigned long long int catalan(unsigned long long int n){
    unsigned long long int c = binomialCoeff(2*n,n);
    return c/(n+1);
}
int main(){
    int n;
    std::cin>>n;

    std::cout << catalan(n) << std::endl;
}