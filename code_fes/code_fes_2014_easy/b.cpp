#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n;
    cin >> n;

    long long amari = n % 20;
    long long r = n / 20;
    if(amari == 0) r--;

    long long ans;
    if(amari == 0) amari = 20;

    if(r % 2 == 0) ans = amari;
    else ans = 21 - amari;

    cout << ans << endl;
    return 0;
}