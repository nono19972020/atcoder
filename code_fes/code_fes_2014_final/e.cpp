#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n;
    cin >> n;

    long long r[n];

    for(long long i = 0; i < n; i++){
        cin >> r[i];
    }

    long long dp[n][2];

    for(long long i = 0; i < n; i++){
        dp[i][0] = 1;
        dp[i][1] = 1;
        for(long long j = 0; j < i; j++){
            if(r[j] < r[i]){
                dp[i][0] = max(dp[i][0], dp[j][1] + 1);
            }
            if(r[j] > r[i]){
                dp[i][1] = max(dp[i][1], dp[j][0] + 1);
            }
        }
    }

    long long ans = max(dp[n-1][0], dp[n-1][1]);

    if(ans < 3) ans = 0;
    cout << ans << endl;
    return 0;
}