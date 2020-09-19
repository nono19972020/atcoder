#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;

    vector<long long> l(n);
    for(long long i = 0; i < n; i++) cin >> l[i];

    sort(l.begin(), l.end(), greater<long long>());

    long long ans = 0;
    for(long long i = 0; i < k; i++) ans += l[i];

    cout << ans << endl;
    return 0;
}