#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
long long x = 2*1e12;
int main(){
    long long a, k;
    cin >> a >> k;

    if(k == 0){
        cout << x-a << endl;
        return 0;
    }

    long double log_up1 = log((long double)k*(long double)x + (long double)1);
    long double log_up2 = log((long double)k*(long double)a + (long double)1);
    long double log_down = log((long double)k+(long double)1);
    long long ans = (long long)ceil((log_up1 - log_up2)/log_down);

    cout << ans << endl;

    return 0;
}