#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long w, a, b;
    cin >> w >> a >> b;

    long long ans;
    if(b >= a + w) ans = b - (a+w);
    else if(a-w < b and b < a+w) ans = 0;
    else if(b <= a-w) ans = a-w - b;

    cout << ans << endl;
    return 0;
}