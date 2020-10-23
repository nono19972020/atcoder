#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long a, b, c;
    cin >> a >> b >> c;

    long long ans = 0;

    if(c - a >= 0){
        ans += a;
        c -= a;
        if(c < b) ans += c + b;
        else if(c > b) ans += 2 * b + 1;
        else ans += 2 * b;
    }
    else ans += c + b;

    cout << ans << endl;
    return 0;
}