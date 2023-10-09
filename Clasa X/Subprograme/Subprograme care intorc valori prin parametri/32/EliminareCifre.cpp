#include <iostream>

void P (int &n, int c){
    int nr =0;
    int p = 1;
    while(n!=0){
        if(n%10 !=c){
            nr = n%10*p + nr;
            p *=10;
        }
        n/=10;
    }
    n = nr;
}

int main(){
    int a,b;
    a = 2524722;
    P(a,2);
    std::cout << a;
}