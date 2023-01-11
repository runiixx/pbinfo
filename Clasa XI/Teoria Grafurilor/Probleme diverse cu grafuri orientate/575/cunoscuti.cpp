#include <iostream>

using namespace std;

int main(){
    int n,m,x,y,grade[101]={0},max = 0;
    cin >> n >> m;

    for(int i =1;i<=m;i++){
        cin >> x >> y;
        grade[y] ++;
        if(max < grade[y]){
            max = grade[y];
        }
    }

    for(int i =1;i<=n;i++){
        if(grade[i] == max) {
            cout << i << " ";
        }
    }
    cout <<endl;
    return 0;
}