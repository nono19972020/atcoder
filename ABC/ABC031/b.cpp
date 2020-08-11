#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long l, h, n;
    cin >> l >> h >> n;

    for(long long i = 0; i < n; i++){
        long long a;
        cin >> a;
        if(a < l) printf("%lld\n", l-a);
        else if(l <= a and a <= h) printf("0\n");
        else printf("-1\n");
    }
    return 0;
}