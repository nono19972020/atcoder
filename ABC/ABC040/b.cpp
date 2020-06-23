#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n;

    cin >> n;
    
    long long minv = 1e9;
    for(long long x = 1; x <= n; x++){
        long long y = n/x;
        minv = min(minv, abs(x-y)+n-x*y);
    }

    cout << minv << endl;

    return 0;
}