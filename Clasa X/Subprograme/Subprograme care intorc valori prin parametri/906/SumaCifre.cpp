#include <iostream>

int sumcif(int n, int sumapar, int sumaimp){
    sumapar = 0;
    sumaimp = 0;
    while(n!=0){
        if((n%10)%2==0)
            sumapar +=n%10;
        else
            sumaimp +=n%10;
        n/=10;
    }
}

int main(){
    int a,b;
}