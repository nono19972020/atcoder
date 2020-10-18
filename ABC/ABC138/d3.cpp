#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

long long n, q;

vector<vector<long long> > v(200001, vector<long long>());
vector<long long> ans(200001, 0);

void dfs(long long u, long long p){
    if(p != -1) ans[u] += ans[p];

    for(auto next : v[u]){
        if(next == p) continue;

        dfs(next, u);
    }
}

int main(){
    cin >> n >> q;

    for(long long i = 0; i < n-1; i++){
        long long a, b;
        cin >> a >> b;
        v[a-1].push_back(b-1);
        v[b-1].push_back(a-1);
    }

    for(long long i = 0; i < q; i++){
        long long p, x;
        cin >> p >> x;
        ans[p-1] += x;
    }

    dfs(0, -1);

    for(long long i = 0; i < n; i++){
        if(i != n-1) printf("%lld ", ans[i]);
        else printf("%lld\n", ans[i]);
    }

    return 0;
}