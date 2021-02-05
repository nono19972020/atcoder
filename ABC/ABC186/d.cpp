#include <iostream>
#include <cstdio>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main(){
    long long n;
    cin >> n;
    
    vector<long long> a(n);
    for(long long i = 0; i < n; i++) cin >> a[i];
    
    sort(a.begin(), a.end());
    vector<long long> sum_a(n+1, 0);
    for(long long i = 0; i < n; i++) sum_a[i+1] = sum_a[i] + a[i];

    long long ans = 0;
    for(long long i = 0; i < n; i++){
        long long tmp = sum_a[n] - sum_a[i+1];
        tmp -= a[i] * (n-1 - i);
        ans += tmp;
    }

    cout << ans << endl;
    return 0;
}