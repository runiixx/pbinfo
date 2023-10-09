#include <iostream>

void sum_cif(int n, int &suma){
    suma = 0;
    while(n!=0){
        suma+=n%10;
        n/=10;
    }

}

int main(){
    int a,b;
    sum_cif(123456789,a);
    std::cout << a;
}