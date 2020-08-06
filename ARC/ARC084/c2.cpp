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
    
    long long ans = 0;
    for(long long i = 0; i < n; i++){
        long long num_c = c.end() - upper_bound(c.begin(), c.end(), b[i]);
        long long num_a = lower_bound(a.begin(), a.end(), b[i]) - a.begin();
        ans += num_a * num_c;
    }
    cout << ans << endl;
    return 0;
}