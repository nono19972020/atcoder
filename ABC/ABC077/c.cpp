#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    long long n;
    cin >> n;

    vector<long long> a(n);
    vector<long long> b(n);
    vector<long long> c(n);

    for(long long i = 0; i < n; i++) cin >> a[i];
    for(long long i = 0; i < n; i++) cin >> b[i];
    for(long long i = 0; i < n; i++) cin >> c[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());

    vector<long long>::iterator it1, it2;
    long long ans = 0;
    for(long long i = 0; i < n; i++){
        it1 = lower_bound(a.begin(), a.end(), b[i]);
        it2 = upper_bound(c.begin(), c.end(), b[i]);

        long long cnt1 = it1 - a.begin();
        long long cnt2 = c.end() - it2;

        ans += cnt1 * cnt2;
    }

    cout << ans << endl;
    return 0;
}