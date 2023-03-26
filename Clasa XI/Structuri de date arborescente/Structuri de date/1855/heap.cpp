#include <fstream>
#include <iostream>
#include <set>

using namespace std;
ifstream fin("heap.in");
ofstream fout("heap.out");

int main()
{
    long long m,opt,x;
    multiset<long long> a;
    multiset<long long> ::iterator it;
    fin >> m;
    for (int i = 1; i <= m; i++) {
        fin >> opt;
        if (opt == 1) {
            fin >> x;
            a.insert(x);
        }
        if (opt == 2) {
            it = a.end();
            it--;
            fout<< *it<<endl;
            a.erase(it);

        }
    }
}