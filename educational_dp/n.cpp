#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

long long n;
vector<long long> a(410, 0);
vector<long long> sum_a(410, 0);
vector<vector<bool> > flag(410, vector<bool>(410, false));
vector<vector<long long> > dp(410, vector<long long>(410, 0));

long long f(long long l, long long r){
    if(flag[l][r] == true) return dp[l][r];

    flag[l][r] = true;
    if(l == r) return 0;

    long long cost = 1e18;
    for(long long i = l; i < r; i++) cost = min(cost, f(l, i) + f(i+1, r));

    dp[l][r] = cost + sum_a[r+1] - sum_a[l];
    return dp[l][r];
}

int main(){
    long long n;
    cin >> n;

    for(long long i = 0; i < n; i++) cin >> a[i];
    
    for(long long i = 0; i < n; i++) sum_a[i+1] = sum_a[i] + a[i];

    cout << f(0, n-1) << endl;
    return 0;
}