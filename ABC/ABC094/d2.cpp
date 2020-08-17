#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<long long> a(n);
    for(long long i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    long long maxv = a[n-1];
    long long distance = 1e15;

    for(long long i = 0; i < n-1; i++){
        if(distance > abs(maxv/2 - a[i])) distance = abs(maxv/2 - a[i]);
    }

    long long r;
    for(long long i = 0; i < n-1; i++){
        if(distance == abs(maxv/2 - a[i])) r = a[i];
    }

    printf("%lld %lld\n", maxv, r);
    return 0;
}