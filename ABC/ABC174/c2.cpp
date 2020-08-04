#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long k;
    cin >> k;

    long long l;
    if(k % 7 == 0) l = 9*k/7;
    else l = 9*k;

    if(l % 2 == 0 || l % 5 == 0){
        printf("-1\n");
        return 0;
    }

    long long pow10 = 10;
    for(long long i = 1; i <= 1000000; i++){
        if(pow10%l == 1){
            printf("%lld\n", i);
            return 0;
        }
        pow10 = pow10 % l;
        pow10 = pow10*10;
    }
    return 0;
}