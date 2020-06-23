#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;


int main(){
    long long n;
    long long k;

    

    cin >> n >> k;

    long long minv = n;

    if(n >= k){
        if(n % k == 0){
            printf("0\n");
        }
        else{
            n = n % k;
            minv = n;
            minv = min(n , abs(minv - k));
            printf("%lld\n", minv);
        }
    }
    else{
        minv = min(n , abs(minv - k));

        printf("%lld\n", minv);

    }

    return 0;

 
}