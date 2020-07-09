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

    for(long long i = 0; i < n; i++){
        cin >> a[i];
    }
    for(long long i = 0; i < n; i++){
        cin >> b[i];
    }
    for(long long i = 0; i < n; i++){
        cin >> c[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());

    long long ans = 0;
    for(long long j = 0; j < n; j++){
        long long pivot = b[j];
        long long distance_a = lower_bound(a.begin(), a.end(), pivot) - a.begin();
        long long distance_c = c.end() - upper_bound(c.begin(), c.end(), pivot);
        ans += distance_a*distance_c;
    }
    cout << ans << endl;
    return 0;
}