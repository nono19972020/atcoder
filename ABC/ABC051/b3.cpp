#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long k, s;
    cin >> k >> s;

    long long ans = 0;
    for(long long x = 0; x <= k; x++){
        for(long long y = 0; y <= k; y++){
            long long z = s - x - y;
            if(0 <= z and z <= k) ans++;
        }
    }

    cout << ans << endl;
    return 0;
}