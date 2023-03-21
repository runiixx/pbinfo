#include <iostream>

int a[200001],b[200001],n,m;

void adauga(int s,int d,int x){
    b[s] +=x;
    b[d+1] -=x;
}

int main(){
    std::cin>>n>>m;

    int s,d,x;
    for(int i =1;i<=m;i++){
        std::cin>>s>>d>>x;
        adauga(s,d,x);

    }
    a[1] = b[1];
    for(int i =2;i<=n;i++){
        a[i] = b[i] + a[i-1];
    }

    for(int i =1;i<=n;i++){
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
}