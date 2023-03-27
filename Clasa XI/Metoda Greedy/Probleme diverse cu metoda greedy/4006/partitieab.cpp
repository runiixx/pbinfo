#include <iostream>

int main(){
    int n,a,b;
    
    std::cin>>n>>a>>b;
    
    int x = 0;
    
    while((n -x*b)%a!=0)
        x++;
    
    
    for(int i =1;i<=(n-x*b) /a;i++)
        std::cout << a << " ";
        
    for(int i =1;i<=x;i++)
        std::cout << b << " ";
    return 0;
}