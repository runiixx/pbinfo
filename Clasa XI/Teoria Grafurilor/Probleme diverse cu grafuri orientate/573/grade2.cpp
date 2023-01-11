#include <iostream>

using namespace std;

int main(){
    int n,m,contor = 0;
    int interior[101] = {0};
    int exterior[101] = {0};
    
    cin >>n >> m;
    int x,y;
    for(int i =1;i<=m;i++){
        cin >>x >> y;
        interior[x] ++; 
        exterior[y] ++;
    }
    for(int i = 1;i<=n;i++){
        if(interior[i] == exterior[i] && interior[i] !=0){
            contor ++;
        }
    }
    cout << contor << endl;
    for(int i = 1;i<=n;i++){
        if(interior[i] == exterior[i] && interior[i] !=0){
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}