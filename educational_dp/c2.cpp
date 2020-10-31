#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n;
    cin >> n;

    vector<long long> a(n+1, 0), b(n+1, 0), c(n+1, 0);
    for(long long i = 1; i <= n; i++) cin >> a[i] >> b[i] >> c[i];

    vector<vector<long long> > dp(n+1, vector<long long>(3, 0));
    

    for(long long i = 1; i <= n; i++){
        for(long long j = 0; j < 3; j++){
            for(long long k = 0; k < 3; k++){
                if(j != k and k == 0) dp[i][j] = max(dp[i][j], dp[i-1][k] + a[i]);
                else if(j != k and k == 1) dp[i][j] = max(dp[i][j], dp[i-1][k] + b[i]);
                else if(j != k and k == 2) dp[i][j] = max(dp[i][j], dp[i-1][k] + c[i]);
            }
        }
    }

    long long maxv = 0;
    for(long long i = 0; i < 3; i++) maxv = max(maxv, dp[n][i]);

    cout << maxv << endl;
    return 0;
}