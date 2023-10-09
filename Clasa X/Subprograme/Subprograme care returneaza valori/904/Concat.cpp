#include <iostream>

int concat(int a, int b){
    int nr =0;
    int p =1;
    while(b!=0){
        nr = b%10 * p + nr;
        p *=10;
        b/=10;
    }
    while(a!=0){
        nr = a%10 * p + nr;
        p *=10;
        a/=10;
    }
    return nr;
}

int main(){
    std::cout << concat(412,27);
}