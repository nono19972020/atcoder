#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n;
    long long x;
    cin >> n >> x;

    x *= 100;
    long long sum = 0;
    for(long long i = 0; i < n; i++){
        long long v, p;
        cin >> v >> p;
        sum += v * p;

        if(sum > x){
            printf("%lld\n", i+1);
            return 0;
        }
    }

    printf("-1\n");
    return 0;
}