#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n;

    cin >> n;

    long long k[n+1];
    long long a[n];

    for(long long j = 1; j <= n-1; j++){
        cin >> k[j];
    }
    k[0] = 1e9;
    k[n] = 1e9;

    for(long long i = 0; i < n; i++){
        a[i] = min(k[i], k[i+1]);
    }
    

   

    for(long long i = 0; i < n; i++){
        printf("%lld ", a[i]);
    }
    printf("\n");

    return 0;


}