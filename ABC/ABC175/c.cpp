#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long x, k, d;
    cin >> x >> k >> d;
    if(x > 0){
        long long r = x/d;
        if(r < k){
            if((k-r)%2 == 0) printf("%lld\n", x - r*d);
            else printf("%lld\n", abs(x - (r+1)*d));
        }
        else{
            printf("%lld\n", x-d*k);
        }
    }
    else if(x < 0){
        long long r = abs(x) /d;
        if(r < k){
            if((k-r)%2 == 0) printf("%lld\n", abs(x+r*d));
            else printf("%lld\n", abs(x+(r+1)*d));
        }
        else{
            printf("%lld\n", abs(x + d*k));
        }
    }
    else{
        if(k % 2 == 0){
            printf("0\n");
        }
        else{
            printf("%lld\n", d);
        }
    }
    return 0;
}