#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long x;
    cin >> x;

    long long r = x / 11;
    long long amari = x % 11;
    long long ans = 2 * r;

    if(1 <= amari and amari <= 6) ans++;
    else if(7 <= amari and amari <= 10) ans += 2;

    cout << ans << endl;
    return 0;
}