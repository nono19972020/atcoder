#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    long long n, m, k;
    cin >> n >> m >> k;

    vector<long long> a(n), b(m);
    for(long long i = 0; i < n; i++) cin >> a[i];
    for(long long i = 0; i < m; i++) cin >> b[i];

    vector<long long> sum_a(n+1, 0), sum_b(m+1, 0);
    for(long long i = 0; i < n; i++) sum_a[i+1] = sum_a[i] + a[i];
    for(long long j = 0; j < m; j++) sum_b[j+1] = sum_b[j] + b[j];

    long long maxv = 0;
    for(long long i = 0; i <= n; i++){
        if(k < sum_a[i]) continue;

        long long j = upper_bound(sum_b.begin(), sum_b.end(), k-sum_a[i]) - sum_b.begin();
        maxv = max(maxv, i+j-1);
    }

    cout << maxv << endl;
    return 0;
}