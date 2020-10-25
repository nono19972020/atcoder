#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

long long mod = 10000;

int main(){
    long long n, k;
    cin >> n >> k;

    long long dp[n+1][3][3];
    for(long long i = 0; i < n+1; i++){
        for(long long j = 0; j < 3; j++){
            for(long long k = 0; k < 3; k++) dp[i][j][k] = 0;
        }
    }
    dp[0][0][0] = 1;

    vector<long long> eat(n, -1);
    for(long long i = 0; i < k; i++){
        long long a, b;
        cin >> a >> b;
        eat[a-1] = b-1;
    }

    for(long long i = 0; i < n; i++){
        vector<long long> cs;
        if(eat[i] >= 0) cs.push_back(eat[i]);
        else{
            cs.push_back(0);
            cs.push_back(1);
            cs.push_back(2);
        }

        for(long long a = 0; a < 3; a++){
            for(long long b = 0; b < 3; b++){
                for(auto c : cs){
                    if(i >= 2 and a == b and b == c) continue;
                    dp[i+1][b][c] += (dp[i][a][b] % mod);
                    dp[i+1][b][c] %= mod;
                }
            }
        }
    }

    long long ans = 0;
    for(long long a = 0; a < 3; a++){
        for(long long b = 0; b < 3; b++) ans += dp[n][a][b] % mod, ans %= mod;
    }

    cout << ans << endl;
    return 0;
}