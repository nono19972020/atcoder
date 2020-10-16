#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    long long d, n, m;
    cin >> d >> n >> m;

    vector<long long> dist(n+1);
    dist[0] = 0;
    dist[n] = d;
    for(long long i = 1; i < n; i++) cin >> dist[i];

    vector<long long> k(m);
    for(long long i = 0; i < m; i++) cin >> k[i];

    sort(dist.begin(), dist.end());
    
    long long ans = 0;
    vector<long long>::iterator it;
    for(long long i = 0; i < m; i++){
        long long delta;
        it = lower_bound(dist.begin(), dist.end(), k[i]);
        if(it == dist.begin()){
            ans += abs(k[i]);
            continue;
        }
        delta = abs(*it - k[i]);
        it--;
        delta = min(delta, abs(*it - k[i]));
        ans += delta;
    }

    cout << ans << endl;

    return 0;
}