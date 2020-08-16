#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long a, b ,x;
    cin >> a >> b >> x;

    long long ans;

    if(a % x == 0) ans = b/x - a/x + 1;
    else ans = b/x - a/x;
    
    cout << ans << endl;
    return 0;
}