#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

long long f(long long n, long long k){
    return min(k - 1, 2*n + 1 - k);
}

int main(){
    long long n, k;
    cin >> n >> k;

    long long ans = 0;
    for(long long x = 2; x <= 2*n; x++){
        if(x - k < 2 || x - k > 2 * n) continue;
        ans += f(n, x) * f(n, x - k);
    }

    cout << ans << endl;
    return 0;
}