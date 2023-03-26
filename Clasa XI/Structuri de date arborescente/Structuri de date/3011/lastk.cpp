#include <iostream>
#include <queue>


int main(){
    std::priority_queue<int> pq;

    int a,b,c,d,n,k;

    std::cin>>n>>k>>a>>b>>c>>d;

    pq.push(a);
    int x;
    for(int i =1;i<n;i++){
        x = pq.top();
        pq.push((b* x + c)% d); 
    }

    std::cout <<pq.size() << std::endl;
    while(!pq.empty()){
        std::cout << pq.top()<< " ";
        pq.pop();
    }

    
    

}
