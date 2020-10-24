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



int main(){
    long long n, m;
    cin >> n >> m;

    vector<long long> a(n), b(n);
    for(long long i = 0; i < n; i++) cin >> a[i];
    for(long long i = 0; i < n; i++) cin >> b[i];

    UnionFind tree(n);

    for(long long i = 0; i < m; i++){
        long long c, d;
        cin >> c >> d;
        tree.unite(c-1, d-1);
    }

    vector<long long> parent_pre(n, 0);
    vector<long long> parent_after(n, 0);

    for(long long i = 0; i < n; i++){
        parent_pre[tree.root(i)] += a[i];
        parent_after[tree.root(i)] += b[i];
    }

    if(parent_pre == parent_after) printf("Yes\n");
    else printf("No\n");

    return 0;
}