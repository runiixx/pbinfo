#include <iostream>

using namespace std;

int main(){
    int m,n, grade[101] = {0};
    int k,x,y;
    cin >> n >> m>>k;
    int ok = 0;
    for(int i =1;i<=m;i++){
        cin >> x >> y;
        grade[x]++;
        grade[y]++;
    }
    for(int i =1;i<=n;i++){
        if(grade[i] == k && grade[i] !=0 ){
            ok = 1;
            cout << i << " ";
        }
    }
    if(ok ==0){
        cout << "Nu exista" << endl;
    }
    return 0;
}