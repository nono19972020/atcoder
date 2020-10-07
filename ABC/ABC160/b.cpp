#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long x;
    cin >> x;

    long long ans = 0;

    long long r = x / 500;
    long long amari = x % 500;

    ans += r * 1000;
    ans += (amari / 5 ) * 5;

    cout << ans << endl;
    return 0;
}