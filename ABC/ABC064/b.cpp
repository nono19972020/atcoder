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

    long long ans = a[n-1] - a[0];

    cout << ans << endl;
    return 0;
}