#include <iostream>
#include <fstream>

void secventa(int &n){
    int x =0;
    int p =1;
    int c;

    while (n!=0){
        c=n%10;
        if(c == 2 && (n%100)/10 == 2){
            x += 0*p;
        }
        else{
            x += c*p;
        }
        p*=10;
        n/=10;
    }
    n = x;
}

int main(){

    int n = 202233228;
    secventa(n);
    std::cout << n << std::endl;
}