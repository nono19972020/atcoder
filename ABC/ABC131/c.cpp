#include <iostream>
#include <cstdio>
using namespace std;

long long gcd(long long x, long long y){
    if(y == 0){
        return x;
    }

    return gcd(y, x%y);
}

int main(){
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    long long l = c*d/gcd(c, d);

    //printf("%lld\n", c*d/gcd(c, d));

    long long t = l - l/c - l/d + 1;

    //printf("%lld\n", t);

    long long count_a = t*((a-1)/l) + (a-1)%l - (((a-1)%l)/c + ((a-1)%l)/d);
    
    long long count_b = t*(b/l) + (b)%l - (((b)%l)/c + ((b)%l)/d);
    //printf("count_a %lld\n", count_a);
    //printf("count_b %lld\n", count_b);

    printf("%lld\n", count_b - count_a);

    return 0;

}