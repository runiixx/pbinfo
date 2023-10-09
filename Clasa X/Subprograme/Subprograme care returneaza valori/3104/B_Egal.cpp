#include <iostream>

int Egal(int n){
    int c = 0;
    while(n!=0){
        if((n%10)%2==1 && c ==0){
            c = n%10;
        }
        if(n%10!=c && (n%10)%2==1){
            return 0;
        }
        n/=10;
        
    }
    return 1;
    
    
}

int main(){

    std::cout << Egal(7727470);
}