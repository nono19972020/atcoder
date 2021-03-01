#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long x;
    cin >> x;
    long long ans = 100 - x % 100;

    cout << ans << endl;
    return 0;
}