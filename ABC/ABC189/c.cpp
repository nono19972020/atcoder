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

    long long ans = 0;
    for(long long left = 0; left < n; left++){
        long long pivot = a[left];
        for(long long right = left; right < n; right++){
            pivot = min(pivot, a[right]);
            ans = max(ans, pivot*(right - left + 1));
        }
    }

    cout << ans << endl;
    return 0;
}