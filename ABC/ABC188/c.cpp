#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long N = pow(2, n);
    long long a[N];
    for(long long i = 0; i < N; i++) cin >> a[i];

    long long maxv = a[0];
    for(long long i = 0; i < N; i++) maxv = max(maxv, a[i]);
    long long max_index = 0;
    for(long long i = 0; i < N; i++){
        if(maxv == a[i]) max_index = i;
    }

    long long ans = 0;
    if(0 <= max_index and max_index <= pow(2, n-1) - 1){
        long long maxv2 = a[N-1];
        for(long long i = pow(2, n-1); i < N; i++) maxv2 = max(maxv2, a[i]);

        for(long long i = pow(2, n-1); i < N; i++){
            if(a[i] == maxv2) ans = i;
        }
    }
    else{
        long long maxv2 = a[0];
        for(long long i = 0; i < pow(2, n-1); i++) maxv2 = max(maxv2, a[i]);

        for(long long i = 0; i < pow(2, n-1); i++){
            if(a[i] == maxv2) ans = i;
        }
    }

    cout << ans+1 << endl;
    return 0;
}