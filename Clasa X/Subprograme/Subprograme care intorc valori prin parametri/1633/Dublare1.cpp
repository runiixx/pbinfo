#include <iostream>

void dublare1(int &n){
    int nr =0;
    int p=1;
    while(n >9){
        nr = n%10 * p +nr;
        p*=10;
        n/=10;
    }
    nr = n%10 * p +nr;
    p*=10;
    nr = n%10 * p +nr;
    p*=10;
    n = nr;
}


int main(){
    int i = 85412;
    dublare1(i);
    std::cout << i;

}