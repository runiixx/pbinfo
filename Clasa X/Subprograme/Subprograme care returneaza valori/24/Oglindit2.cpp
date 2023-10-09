#include <iostream>

int oglindit(int n){
    int x = 0;

    while(n!=0){
        x =x*10 +n%10;
        n/=10;
            
    }

    return x;
}

int main(){

    std::cout << oglindit(123456);
}