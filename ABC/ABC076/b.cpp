#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;

    long long ans = 1;
    for(long long i = 0; i < n; i++){
        if(ans <= k) ans *= 2;
        else ans += k;
    }
    cout << ans << endl;
    return 0;
}