#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;

    vector<long long> a(n);
    for(long long i = 0; i < n; i++) cin >> a[i];

    vector<long long> sum_a(n+1, 0);
    for(long long i = 0; i < n; i++) sum_a[i+1] = sum_a[i] + a[i];

    long long ans = 0;
    for(long long i = 0; i <= n; i++){
        if(i+k <= n){
            ans += sum_a[i+k] - sum_a[i];
        }
    }

    cout << ans << endl;
    return 0;
}