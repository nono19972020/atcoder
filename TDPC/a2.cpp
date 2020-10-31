#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long sum = 0;
    vector<long long> p(n+1, 0);
    for(long long i = 1; i <= n; i++){
        cin >> p[i];
        sum += p[i];
    }

    vector<vector<bool> > dp(n+1, vector<bool>(sum+1, false));

    for(long long i = 0; i <= n; i++) dp[i][0] = true;

    for(long long i = 1; i <= n; i++){
        for(long long j = 0; j <= sum; j++){
            if(j-p[i] >= 0 and dp[i-1][j-p[i]] == true) dp[i][j] = true, dp[i][j-p[i]] = true;
        }
    }

    long long cnt = 0;
    for(long long i = 0; i <= sum; i++){
        if(dp[n][i] == true){
            cnt++;
            //printf("%lld\n", i);
        }
    }

    cout << cnt << endl;
    return 0;
}