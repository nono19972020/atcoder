#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long k, s;
    cin >> k >> s;

    long long cnt = 0;

    for(long long z = 0; z <= k; z++){
        for(long long y = 0; y <= k; y++){
            long long x = s - y - z;
            if(0 <= x and x <= k) cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}