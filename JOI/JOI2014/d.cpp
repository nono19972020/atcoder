#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n, m;
    cin >> n >> m;

    vector<long long> D(n);
    for(long long i = 0; i < n; i++) cin >> D[i];

    vector<long long> C(m+1);
    for(long long i = 1; i <= m; i++) cin >> C[i];

    vector<vector<long long> > dp(m+1, vector<long long>(n+1, 1e9));
    dp[0][0] = 0;

    for(long long i = 0; i < m; i++){
        for(long long j = 0; j < n; j++){
            if(dp[i][j] != 1e9) {
                dp[i+1][j+1] = min(dp[i+1][j+1], dp[i][j] + C[i+1] * D[j]);
                dp[i+1][j] = min(dp[i+1][j], dp[i][j]);
            }
        }
    }

    long long minv = 1e9;
    for(long long i = 0; i <= m; i++) minv = min(minv, dp[i][n]);
    
    cout << minv << endl;
    return 0;
}