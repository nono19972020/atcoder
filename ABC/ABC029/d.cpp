#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n;
    cin >> n;

    long long index = n + 1;
    long long ans = 0;
    long long mod = 1;
    long long num_0 = 1;

    for(long long i = 0; i < 9; i++){
        mod *= 10;
        long long amari = index % mod;
        long long q = index / mod;
        ans += q * num_0;

        if(num_0 < amari and amari <=  2 * num_0) ans += amari - num_0;
        else if(2 * num_0 < amari) ans += num_0;

        num_0 *= 10;
    }

    cout << ans << endl;
    return 0;

}