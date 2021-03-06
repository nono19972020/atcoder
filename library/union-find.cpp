#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

struct UnionFind{
    vector<long long> par;
    vector<long long> size;

    UnionFind(long long n) : par(n){
        //initialization
        for(long long i = 0; i < n; i++){
            par[i] = i;
        }
        size.resize(n, 1);
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
        size[ry] += size[rx]; 
    }

    bool same(long long x, long long y){
        long long rx = root(x);
        long long ry = root(y);
        return rx == ry;
    }

    long long treeSize(long long x){
        //group size
        return size[root(x)];
    }
};

//使い方
// UnionFind tree(n); 定義をする
//合併する tree.unite(a, b);
//同じか確認する tree.same(a, b); true or false
//属しているグループのサイズを確認する tree.treeSize(i)