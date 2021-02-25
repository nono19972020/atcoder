#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

long long modpow(long long x, long long n, long long mod) {
    x = x % mod;
    if(n == 0){
        return 1;
    }
    else if(n%2 == 1){
        return(x*modpow(x, n-1, mod))%mod;
    }
    else{
        return modpow((x*x)%mod, n/2, mod)%mod;
    }
}

int main(){
    long long a, b, c;
    cin >> a >> b >> c;

    vector<long long> v;
    long long cnt = a % 10;
    v.push_back(cnt);

    while(true){
        cnt *= (a % 10);
        cnt = cnt % 10;
        if(cnt == v[0]) break;
        v.push_back(cnt);
    }

    long long T = v.size();
    long long index = modpow(b, c, T);
    index--;
    if(index < 0) index += T;

    long long ans = v[index];
    cout << ans << endl;

    return 0;
}