#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long a, b, k, l;

    cin >> a >> b >> k >> l;

    if(k%l == 0){
        printf("%lld\n", b*k/l);
        return 0;
    }

    long long only = b*((k+l-1)/l);
    //printf("wari %lld\n", (k+l-1)/l);
    long long set = b*(k/l)+(k - l*(k/l))*a;

    long long minv = min(only, set);
    //printf("only %lld set %lld\n", only, set);

    printf("%lld\n", minv);

    return 0;
}