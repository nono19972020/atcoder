#include <iostream>
#include <cstdio>
#include <vector>
#include <set>
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
    long long n, m, k;
    cin >> n >> m >> k;

    set<pair<long long, long long> > friend_list;
    vector<set<long long> > list(n);

    UnionFind tree(n);
    for(long long i = 0; i < m; i++){
        long long a, b;
        cin >> a >> b;
        a--;
        b--;
        list[a].insert(b);
        list[b].insert(a);
        tree.unite(a, b);
    }
    set<pair<long long, long long> > block_list;

    for(long long i = 0; i < k; i++){
        long long c, d;
        cin >> c >> d;
        c--;
        d--;
        if(tree.same(c, d) == true){
            list[c].insert(d);
            list[d].insert(c);
        }
    }

    for(long long i = 0; i < n; i++){
        cout << tree.treeSize(i) - 1 - list[i].size() << " ";
    }
    cout << endl;

    return 0;
}