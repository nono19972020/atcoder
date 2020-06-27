#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n, a, b;
    cin >> n >> a >> b;

    vector<long long> x(n);

    for(long long i = 0; i < n; i++){
        cin >> x[i];
    }

    vector<long long> dp(n);
    dp[0] = 0;

    for(long long i = 1; i < n; i++){
        dp[i] = dp[i-1] + min(a*abs(x[i]-x[i-1]), b);
    }

    cout << dp[n-1] << endl;
    return 0;
}