#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n, m, k;
    cin >> n >> m >> k;

    vector<long long> a(n);
    vector<long long> b(m);
    vector<long long> a_sum(n+1, 0);
    vector<long long> b_sum(m+1, 0);

    for(long long i = 0; i < n; i++){
        cin >> a[i];
    }

    for(long long i = 0; i < m; i++){
        cin >> b[i];
    }

    for(long long i = 0; i < n; i++){
        a_sum[i+1] = a_sum[i] + a[i]; 
    }

    for(long long i = 0; i < m; i++){
        b_sum[i+1] = b_sum[i] + b[i]; 
    }

    long long j = m;
    long long ans = 0;
    for(long long i = 0; i <= n; i++){
        if(a_sum[i] > k) break;

        while(a_sum[i] + b_sum[j] > k){
            j -= 1;
        }
        ans = max(ans, i+j);
    }
    cout << ans << endl;
    return 0;
}