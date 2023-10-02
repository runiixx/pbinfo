#include <fstream>
std::ifstream fin("pozitiiconsecutive.in");
std::ofstream fout("pozitiiconsecutive.out");
int main(){
   
    
    int x,y;
    fin>>x>>y;
    int z = 9;
    fout << y << ' '<< x << ' ';
    while(z>8){
        z = (y-2-2*x) *(-1);
        y = x;
        x = z;
        fout << z << ' ';
    }
    fout << 3 << ' ' << 0 ;
    return 0;
}