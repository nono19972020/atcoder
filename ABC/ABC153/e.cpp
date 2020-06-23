#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    long long h, n;
    cin >> h >> n;

    vector<pair<long long, long long> > ab(n);
    vector<long long> b(n);

    for(long long i = 0; i < n; i++){
        cin >> ab[i].first >> ab[i].second;
    }

    vector<long long> dp(h+1, 1e9);

    sort(ab.begin(), ab.end());

    dp[0] = 0;

    for(long long i = 0; i <= h; i++){
        for(long long j = 0; j < n; j++){
            if(i < ab[j].first){
                dp[i] = min(dp[i], ab[j].second);
            }
            else{
                dp[i] = min(dp[i], dp[i-ab[j].first]+ab[j].second);
            }
            

            //printf("dp[%d] %d\n", i, dp[i]);
        }
    }

    printf("%lld\n", dp[h]);

    return 0;
}