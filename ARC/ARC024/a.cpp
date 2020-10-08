#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    vector<long long> L(200, 0);
    vector<long long> R(200, 0);

    long long l, r;
    cin >> l >> r;

    for(long long i = 0; i < l; i++){
        long long x;
        cin >> x;
        L[x]++;
    }
    for(long long i = 0; i < r; i++){
        long long x;
        cin >> x;
        R[x]++;
    }

    long long ans = 0;
    for(long long i = 0; i < 200; i++) ans += min(L[i], R[i]);

    cout << ans << endl;
    return 0;
}