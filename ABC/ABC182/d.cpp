#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n;
    cin >> n;

    vector<long long> a(n);
    for(long long i = 0; i < n; i++) cin >> a[i];

    vector<long long> p(n);
    vector<long long> q(n);
    long long maxv = 0;
    for(long long i = 0; i < n; i++){
        if(i == 0) p[i] = a[i];
        else p[i] = p[i-1] + a[i];
    }
    for(long long i = 0; i < n; i++){
        q[i] = max(maxv, p[i]);
        maxv = max(maxv, p[i]);
    }

    long long ans = 0;
    long long now = 0;
    for(long long i = 0; i < n; i++){
        ans = max(ans, now+q[i]);
        now += p[i];
    }

    cout << ans << endl;
    return 0;
}