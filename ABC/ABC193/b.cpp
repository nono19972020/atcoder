#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n;
    cin >> n;

    long long minv = 1e12;
    for(long long i = 0; i < n; i++){
        long long a, p, x;
        cin >> a >> p >> x;
        x -= a;
        if(x > 0) minv = min(minv, p);
    }

    if(minv == 1e12) printf("-1\n");
    else printf("%lld\n", minv);

    return 0;
}