#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long a, b;
    cin >> a >> b;

    long long ans;
    if(a * b > 0) ans = b - a;
    else ans = b - a - 1;

    cout << ans << endl;
    return 0;
}