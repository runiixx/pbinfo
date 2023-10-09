#include <iostream>

void detcifre(int n, int &a, int &b){
    b = n%10;
    while(n/10!=0){
        n/=10;
    }
    a = n;
}