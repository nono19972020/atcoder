#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;

    vector<long long> h(n);
    for(long long i = 0; i < n; i++) cin >> h[i];

    sort(h.begin(), h.end());

    if(k >= n){
        printf("0\n");
        return 0;
    }
    long long ans = 0;
    for(long long i = 0; i < n - k; i++) ans += h[i];

    cout << ans << endl;
    return 0;
}