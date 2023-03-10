#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;
ifstream fin("heap_sort.in");
ofstream fout("heap_sort.out");
int n;
int  a[1000001];
int main(){

    
    fin>>n;

    for(int i =1;i<=n;i++){
        fin>>a[i];
    }
        
    
    make_heap(a+1,a+n+1);
    sort_heap(a+1,a+n+1);

    for(int i =1;i<=n;i++){
        fout<<a[i]<<" ";
    }
    return 0;
}