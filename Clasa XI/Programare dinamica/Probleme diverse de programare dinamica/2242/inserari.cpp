#include <iostream>

using namespace std;
int a[100001],n,contor,fr[100001],poz,x,mutari;

int cb(int x , int n){
    int st = 1 , dr = n;
    while(st <= dr){
        int m = (st + dr) / 2;
        if(a[m] > x){
             dr = m - 1;
        }
        else{ 
            st = m + 1;
        }
    }
    return st;
}
int main(){
    cin >> n;
    for(int i = 1 ; i <= n ; i++){
        cin >> x;
        poz = cb(x , mutari);
        if(a[poz] <= x){
             mutari++;
             poz = mutari;
         }
        a[poz] = x;
    }
    cout << n - mutari;
}