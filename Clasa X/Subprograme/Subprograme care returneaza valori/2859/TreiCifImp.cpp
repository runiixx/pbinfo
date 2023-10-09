#include <iostream>

int TreiCifImp(int n){
    int nr = 0;
    
    while(n!=0){
        
        if((n%10)%2!=0){
            nr++;
        }
        else{
            nr = 0;
        }
        
        if(nr ==3)
            return 1;
        n/=10;
    }
    
    return 0;

}

int main(){
    std::cout << TreiCifImp(113423);
}