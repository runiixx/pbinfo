#include <iostream>

int cmmnr(int n){
    int fr[10] = {0};
    int x = 0;
    while(n!=0){
        fr[n%10] ++;
        n/=10;
    }
    
    for(int i =9;i>=0;i--){
        for(int j =1;j<=fr[i];j++){
            x= x*10+i;
        }
    }
    return x;
}

int main(){

    std::cout << cmmnr(12334709);
}