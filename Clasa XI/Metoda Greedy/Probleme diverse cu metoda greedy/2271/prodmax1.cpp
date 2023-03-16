#include <iostream>

int main(){
    int a[100001], max1=0, max2=0, min1=0,min2 =0;
    int aux;
    int n;
    std::cin>>n;
    for(int i =1;i<=n;i++){
        std::cin>>a[i];
        if(max1 <a[i]){
            aux = max1;
            max1 = a[i];
            max2 = aux;
        }
        if(min1 > a[i]){
            aux = min1;
            min1 = a[i];
            min2 = aux;
        }


    }
    if(min1 * min2 > max1 * max2){
        std::cout << min1  * min2<< std::endl;
    }
    else{
        std::cout << max1  * max2 << std::endl;
    }
}