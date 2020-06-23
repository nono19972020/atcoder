#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<long long> a(n);

    for(long long i = 0; i < n; i++){
        cin >> a[i];
    }

    vector<long long> dp(n, 1e9);

    dp[0] = 0;
    dp[1] = abs(a[0]-a[1]);
    for(long long i = 2; i < n; i++){
        dp[i] = min(dp[i], dp[i-1]+abs(a[i]-a[i-1]));
        dp[i] = min(dp[i], dp[i-2]+abs(a[i]-a[i-2]));
    }

    cout << dp[n-1] << endl;

    return 0;
}