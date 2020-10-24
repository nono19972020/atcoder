#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long x, y;
    cin >> x >> y;

    if(x % y == 0){
        printf("-1\n");
        return 0;
    }

    long long cnt = x;
    while(cnt <= 1e18 and cnt % y == 0){
        cnt += x;
    }

    if(cnt <= 1e18 and cnt % y != 0) printf("%lld\n", cnt);
    else printf("-1\n");
    
    return 0;
}