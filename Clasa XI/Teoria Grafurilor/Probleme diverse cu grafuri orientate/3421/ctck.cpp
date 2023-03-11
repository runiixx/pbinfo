#include <iostream>

using namespace std;
int m,n,a[101][101],s[101],p[101],k,nrc, ctc[101];
void df1(int x){
    s[x] =1;
    for(int i =1;i<=n;i++){
        if(s[i] ==0 && a[x][i] == 1){
            df1(i);
        }
    }
}
void df2(int x){
    p[x] =1;
    for(int i = 1;i<=n;i++){
        if(p[i] ==0 && a[i][x] == 1){
            df2(i);
        }

    }
}
int main()
{
    cin>> n>>m>>k;
    int x,y;
    for(int i =1;i<=m;i++){
        cin >>x>>y;
        a[x][y] = 1;
    }
    for(int i =1;i<=n;++i){
        if(ctc[i]==0){
            for(int j = 1;j<=n;++j){
                s[j] = p[j] =0;

            }
            nrc++;
            df1(i);
            df2(i);
            for(int j = 1; j<=n;++j){
                if(s[j] ==1 && p[j] ==1){
                    ctc[j] = nrc;
                }
            }


        }
    }
    int contor =0;
    for(int i=1;i<=n;i++){
        if(ctc[i] == ctc[k]){
            contor++;
        }
    }
    cout << contor<<endl;
    return 0;
}