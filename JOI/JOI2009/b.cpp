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
    //for(long long i = 0; i <= n; i++) printf("%lld\n", dist[i]);

    long long ans = 0;
    vector<long long>::iterator it;
    for(long long i = 0; i < m; i++){
        //printf("k %lld\n", k[i]);
        it = lower_bound(dist.begin(), dist.end(), k[i]);
        if(it == dist.begin()){
            ans += abs(k[i]);
            continue;
        }
        //printf("it %lld\n", *it);
        //it--;
        //printf("it++ %lld\n", *--it);
        ans += min(abs(*it - k[i]), abs(*--it - k[i]));
        //printf("delta %lld\n", min(abs(*it - k[i]), abs(*--it - k[i])));
    }

    cout << ans << endl;

    return 0;
}