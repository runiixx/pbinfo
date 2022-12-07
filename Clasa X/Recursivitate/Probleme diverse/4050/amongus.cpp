#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("amongus.in");
ofstream fout("amongus.out");
int di[] = {-1,0,1,0};
int dj[] = {0,1,0,-1};
int harta[101][101] = {0};
int n,m,contorPortaluri =0;
void afisareHarta(){
    for(int i =1;i<=n;i++){
        for(int j =1;j<=m;j++){
            fout << harta[i][j] << " ";
        }
        fout << endl;
    }
    fout << endl;
}
void program1(){
    int camereSigure = 0;
    for(int i =1;i<=n;i++){
        for(int j = 1;j<=m;j++){
            if(harta[i][j] == 0){
                camereSigure ++;
            }
        }
    }
    fout << camereSigure<<endl;
}
void fill(int i,int j,int v){
    if(harta[i][j] == 2){
            contorPortaluri++;
        }
    if(i>=1 && i<=n && j >=1 && j <=m  && harta[i][j] !=1 ){
        
        harta[i][j] = v;
        for(int k =0;k<4;k++){
            if(harta[i+di[k]][j+dj[k]]!=3){
                fill(i+di[k],j+dj[k],v);
            }
        }
    }
}

void program2(){
    fill(1,1,3);
    afisareHarta();
}
void program3(){
    fill(1,1,3);
    fout << contorPortaluri<< endl;
}
void citire(){
    fin >> n >>m;
    for(int i =1;i<=n;i++){
        for (int j = 1;j<=m;j++){
            fin >> harta[i][j];
        }
    }
}
int main(){
    int program;
    fin >> program;
    citire();
    if(harta[1][1] == 1){
        fout << "misiune imposibila" << endl;

    }
    else{
        if(program == 1){
            program1();
        }   
        if(program == 2){
            program2();
        }
        if(program == 3){
            program3();
        }
    }
    

    return 0;
}