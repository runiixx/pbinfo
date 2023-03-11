#include <iostream>
using namespace std;
int n, m, k, a[100][100], v1[100]={0}, v2[100]={0};
int nrmax;
void dus(int i, int nr)
{
    v1[i]=nr;
    for(int j=1; j<=n; j++)
    {
        if(a[i][j]==1 && v1[j]==0)
        {
            dus(j, nr);
        }
    }
}
void intors(int i, int nr)
{
    v2[i]=nr;
    for(int j=1; j<=n; j++)
    {
        if(a[j][i]==1 && v2[j]==0)
        {
           intors(j, nr);
        }
    }
}

void tare_conex(int k, int nr){ ///nr=numarul componentei conexe
    dus(k, nr);
    intors(k, nr);
    for(int i=1; i<=n; i++){
        if(v1[i]!=v2[i]){
            v1[i]=0;
            v2[i]=0;
        }
    }
}
int main()
{
    int x, y, c=0;
    cin>>n>>m;
    for(int i=1; i<=m; i++)
    {
        cin>>x>>y;
        a[x][y]=1;
    }
    for(int i=1; i<=n; i++){
        if(v1[i]==0){
            c++;
            tare_conex(i, c);
        }
    }
    for(int i=1; i<=n; i++){
        if(nrmax <v1[i]){
            nrmax = v1[i];
        }


    }

    int contor = 0;
    int maxnod = 0;
    for(int i =1;i<=nrmax;i++){
        contor =0;
        for(int j =1;j<=n ;j++){
            if(v1[j] == i){
                contor++;
            }
        }
        if(maxnod <contor){
            maxnod = contor;
        }


    }
    for(int i =1;i<=nrmax;i++){
        contor =0;
        for(int j =1;j<=n ;j++){
            if(v1[j] == i){
                contor++;
            }
        }
        if(contor==maxnod){
            for(int j =1;j<=n;j++){
                if(v1[j]  == i){
                    cout << j<< " ";
                }
            }
            cout << endl;
        }


    }
    

}