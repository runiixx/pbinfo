#include <iostream>
#include <set>
#include <iterator>
#include <fstream>

std::ifstream fin("arme1.in");
std::ofstream fout("arme1.out");

int main(){
    
    std::multiset<long long int> arme;
    std::multiset<long long int> :: iterator it;
    int n,m;
    long long int arma;
    std::cin >> n >>m;
    for(int i =1;i<=n+m;i++){
        std::cin >> arma;
        arme.insert(arma);
        if(arme.size() > n){
            it = arme.begin();
            arme.erase(arme.begin(), ++it);
        }
    }
    long long suma = 0;
    for(it = arme.begin();it != arme.end();++it){
        suma += *it;
    }
    std::cout <<suma << std::endl;
    
    return 0;
}