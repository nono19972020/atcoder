#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n, m, k;
    cin >> n >> m >> k;
    vector<long long> a(n);
    vector<long long> b(m);

    for(long long i = 0; i < n; i++) cin >> a[i];
    for(long long j = 0; j < m; j++) cin >> b[j];

    vector<long long> sum_a(n+1, 0);
    vector<long long> sum_b(m+1, 0);

    for(long long i = 0; i < n; i++) sum_a[i+1] = sum_a[i] + a[i];
    for(long long i = 0; i < m; i++) sum_b[i+1] = sum_b[i] + b[i];

    long long start_j = m;
    long long ans = 0;
    for(long long i = 0; i <= n; i++){
        if(sum_a[i] > k) break;

        long long j = start_j;
        while(j >= 0 and sum_a[i] + sum_b[j] > k){
            j--;
        }
        start_j = j;
        ans = max(ans, i+start_j);
    }
    cout << ans << endl;
    return 0;
}