#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    long long n , k;
    cin >> n >> k;

    vector<long long> x(n);
    for(long long i = 0; i < n; i++) cin >> x[i];
    
    long long ans = 1e12;
    for(long long i = 0; i + k - 1 < n; i++){
        long long left = x[i];
        long long right = x[i+k-1];
        ans = min(ans, abs(left) + abs(right-left));
        ans = min(ans, abs(right) + abs(left - right));
    }
    
    cout << ans << endl;
    return 0;
}