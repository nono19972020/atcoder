#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n;
    cin >> n;

    vector<long long> a(n);
    for(long long i = 0; i < n; i++) cin >> a[i];

    vector<vector<long long> > dp(n-1, vector<long long>(21));
   
    for(long long i = 0; i < 21; i++) dp[0][i] = 0;
    dp[0][a[0]] = 1;
    
    for(long long i = 0; i < n-1; i++){
        for(long long j = 0; j <= 20; j++){
            if(i-1 >= 0 and j - a[i] >= 0) dp[i][j] += dp[i-1][j-a[i]];
            if(i-1 >= 0 and j + a[i] <= 20) dp[i][j] += dp[i-1][j+a[i]];
        } 
    }

    cout << dp[n-2][a[n-1]] << endl;
    return 0;
}