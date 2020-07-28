#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n;
    cin >> n;

    long long t[n];
    for(long long i = 0; i < n; i++) cin >> t[i];

    long long minv = 1e9;
    for(long long bit = 0; bit < (1 << n); bit++){
        long long time_a = 0, time_b = 0;
        for(long long mask = 0; mask < n; mask++){
            if(bit & (1 << mask)) time_a += t[mask];
            else time_b += t[mask];
        }

        minv = min(minv, max(time_a, time_b));
    }
    cout << minv << endl;
    return 0;
}