#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n;
    cin >> n;

    vector<long long> a(n), b(n);
    long long amin = 1e12, amax = 0;
    for(long long i = 0; i < n; i++){
        cin >> a[i] >> b[i];
        amin = min(amin, a[i]);
        amax = max(amax, a[i]);
    }

    long long bmin;
    for(long long i = 0; i < n; i++){
        if(a[i] == amax) bmin = b[i];
    }

    //printf("amin %lld amax %lld bmin %lld\n", amin, amax, bmin);

    long long ans = amax + bmin;

    cout << ans << endl;
    return 0;
}