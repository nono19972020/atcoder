#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n;
    cin >> n;

    vector<vector<char> > s(5, vector<char>(n));
    for(long long i = 0; i < 5; i++){
        for(long long j = 0; j < n; j++) cin >> s[i][j];
    }
    vector<long long> R(n, 0), B(n, 0), W(n, 0);

    for(long long j = 0; j < n; j++){
        for(long long i = 0; i < 5; i++){
            if(s[i][j] == 'R') R[j]++;
            else if(s[i][j] == 'B') B[j]++;
            else if(s[i][j] == 'W') W[j]++;
        }
    }

    vector<vector<long long> > dp(n, vector<long long>(3, 1e9));

    dp[0][0] = 5 - R[0];
    dp[0][1] = 5 - B[0];
    dp[0][2] = 5 - W[0];

    for(long long i = 0; i < n; i++){
        for(long long j = 0; j < 3; j++){
            for(long long k = 0; k < 3; k++){
                if(i > 0 and j != k){
                    if(j == 0) dp[i][j] = min(dp[i][j], dp[i-1][k] + 5 - R[i]);
                    else if(j == 1) dp[i][j] = min(dp[i][j], dp[i-1][k] + 5 - B[i]);
                    else dp[i][j] = min(dp[i][j], dp[i-1][k] + 5 - W[i]);
                }
            }
        }
    }

    long long minv = 1e9;
    for(long long j = 0; j < 3; j++) minv = min(minv, dp[n-1][j]);

    cout << minv << endl;
    return 0;
}