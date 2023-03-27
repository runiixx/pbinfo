#include <iostream>
#include <fstream>

std::ifstream fin("componenteconexe1.in");
std::ofstream fout("componenteconexe1.out");

int a[101][101],n;

struct muchie{
    int x,y;
} muchie[101];
int b = 1;

int v[101];

void lungime(int start){
    v[start] = 1;
    for(int i =1;i<=n;i++){
        if(v[i] ==0 && a[i][start] == 1){
            lungime(i);
        }
    }
}

int main(){

    fin >>n;
    int d,c;
    while(fin >>d>>c){
        a[d][c] = 1;
        a[c][d] = 1;
    }

    int suma = 0;

    int nodAnterior = 1;

    lungime(1);
    for(int i =2;i<=n;i++){
        if(v[i] == 0){
            
            lungime(i);
            suma++;
            muchie[b].x = nodAnterior;
            muchie[b].y = i;
            nodAnterior = i;
            b++;
        }

    }

    fout << suma <<std::endl;

    for(int i =1;i<b ;i++){
        fout << muchie[i].x << " " << muchie[i].y << std::endl;
    }



    return 0;
}