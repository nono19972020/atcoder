#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;


long long N, W;
vector<vector<long long> > dp(101, vector<long long>(100001));
vector<long long> w(101);
vector<long long> v(101);

void knap(){
    for(long long i = 0; i <= N; i++) dp[i][0] = 0;

    for(long long i = 1; i <= N; i++){
        for(long long j = 1; j <= W; j++){
            if(w[i] <= j) dp[i][j] = max(dp[i-1][j], dp[i-1][j - w[i]] + v[i]);
            else dp[i][j] = dp[i-1][j];
        }
    }
}

int main(){
    cin >> N >> W;
    for(long long i = 1; i <= N; i++) cin >> w[i] >> v[i];

    knap();

    cout << dp[N][W] << endl;
    return 0;
}