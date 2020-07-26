#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

vector<long long> dp(100001, 1e9);

int main(){
    long long n;
    cin >> n;

    vector<long long> a(n);

    for(long long i = 0; i < n; i++) cin >> a[i];

    dp[0] = 0;
    for(long long i = 1; i < n; i++){
        dp[i] = min(dp[i], abs(a[i]-a[i-1])+dp[i-1]);
        if(i - 2 >= 0) dp[i] = min(dp[i], abs(a[i]-a[i-2])+dp[i-2]);
    }
    cout << dp[n-1] << endl;
    return 0;
}