#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    long long l, r;
    cin >> l >> r;

    if(r - l > 3000){
        printf("0\n");

        return 0;
    }

    long long min0 = 1e9;

    for(long long i = l; i < r; i++){
        for(long long j = i+1; j <= r; j++){
            min0  = min(min0, (i*j)%2019);
        }
    }

    printf("%lld\n", min0);
}