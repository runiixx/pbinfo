#include <iostream>
#include <queue>
#include <cstring>
int main(){

    std::queue<int> q;

    int n;

    std::cin>>n;
    int x;
    char comanda[6];
    
    for(int i =1;i<=n;i++){
        
        std::cin>>comanda;
        if(std::strcmp(comanda,"push")==0){
            std::cin>>x;
            q.push(x);
        }
        else if(std::strcmp(comanda,"pop")==0){
            q.pop();
        }
        else if(std::strcmp(comanda,"front")==0){
            std::cout << q.front() << '\n';
        }
    }
    

    

    return 0;
}