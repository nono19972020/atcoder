#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

struct UnionFind{
    vector<long long> par;

    UnionFind(long long n) : par(n){
        for(long long i = 0; i < n; i++){
            par[i] = i;
        }
    }

    long long root(long long x){
        if(par[x] == x){
            return x;
        }
        return par[x] = root(par[x]);
    }

    void unite(long long x, long long y){
        long long rx = root(x);
        long long ry = root(y);
        if(rx == ry){
            return;
        }

        par[rx] = ry;
    }

    bool same(long long x, long long y){
        long long rx = root(x);
        long long ry = root(y);
        return rx == ry;
    }
};

int main(){}