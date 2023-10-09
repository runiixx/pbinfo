#include <iostream>

void inserare(int &n){
    int nr = n%10;
    int p = 10;
    int c;

    while(n!=0){
        c = nr/p - n%10;
        std::cout << c << std::endl;
        nr+=c*p;
        p*=10;
        n/=10;

    }

    n = nr;

}

int main(){
    int n = 7255;
    inserare(n);
    
}