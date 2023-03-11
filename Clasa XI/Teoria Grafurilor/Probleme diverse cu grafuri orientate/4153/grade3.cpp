#include <iostream>
#include <vector>
using namespace std;
struct {
        int ex,in;
    }fr[101];
int main()
{
    int n,m;
    cin >> n >> m;


    int x,y;
    for(int i = 1;i<=m;i++){
        cin >> x>>y;
        fr[x].ex ++;
        fr[y].in ++;
    }

    int contor = 0;
    vector<int> ras;
    for(int i = 1;i<=m;i++){
        if(fr[i].ex < fr[i].in){
            ras.push_back(i);
        }
    }
    cout << ras.size()<< endl;
    for(int &nod: ras){
        cout << nod << " ";
    }
    
    return 0;
}
