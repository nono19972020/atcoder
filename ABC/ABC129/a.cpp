#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long p, q, r;
    cin >> p >> q >> r;

    long long ans = p + q;
    ans = min(ans, p + r);
    ans = min(ans, q + r);

    cout << ans << endl;
    return 0;
}