#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long k, n;

    cin >> k >> n;

    long long a[n+1];

    for(long long i = 1; i <= n; i++){
        cin >> a[i];
    }

    long long distance[n+1];

    for(long long i = 1; i <= n; i++){
        if(i == n){
            distance[i] = k - a[i] + a[1];
        }
        else{
            distance[i] = a[i+1] - a[i];
        }
    }

    long long maxv = 0;

    for(long long i = 1; i <= n; i++){
        maxv = max(distance[i], maxv);
    }

    printf("%lld\n", k-maxv);

    return 0;


}