#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<long long> a(3);
    cin >> a[0] >> a[1] >> a[2];

    sort(a.begin(), a.end());

    long long ans = abs(a[1]-a[0]) + abs(a[2]-a[1]);

    cout << ans << endl;
    return 0;
}