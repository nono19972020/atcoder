#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;


long long N, W;
vector<vector<long long> > dp(101, vector<long long>(100001));
vector<long long> w(101);
vector<long long> v(101);

void knap(){
    
    dp.assign(101, vector<long long>(100001, 1e12));
    dp[0][0] = 0;

    for(long long i = 1; i <= N; i++){
        for(long long j = 0; j <= 100000; j++){
            if(v[i] <= j) dp[i][j] = min(dp[i-1][j], dp[i-1][j - v[i]] + w[i]);
            else dp[i][j] = dp[i-1][j];
        }
    }
}

int main(){
    cin >> N >> W;
    for(long long i = 1; i <= N; i++) cin >> w[i] >> v[i];

    knap();

    for(long long value = 100000; value >= 0; value--){
        if(W >= dp[N][value]){
            printf("%lld\n", value);
            return 0;
        }
    }
}