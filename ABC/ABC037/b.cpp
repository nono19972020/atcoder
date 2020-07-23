#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n, q;
    cin >> n >>q;
    vector<long long> a(n, 0);

    for(long long i = 0; i < q; i++){
        long long l, r, t;
        cin >> l >> r >> t;
        for(long long j = l-1; j <= r-1; j++) a[j] = t;
    }

    for(long long i = 0; i < n; i++) printf("%lld\n", a[i]);
    
    return 0;
}