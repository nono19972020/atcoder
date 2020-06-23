#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
    long long n, a[100001];
    cin >> n;
    
    for(long long i = 1; i <= n; i++){
        cin >> a[i];
    }
    a[0] = 0;

    long long distance = 0;


    for(long long i = 0; i <= n; i++){
        if(i == n){
            distance = distance + abs(a[0] - a[i]);
        }
        else{
            distance = distance + abs(a[i+1] - a[i]);
        }
    }

    //printf("distance %lld\n", distance);

    long long cancel[100001];

    for(long long i = 1; i <= n; i++){
        if(i == n){
            cancel[i] = distance - (abs(a[i] - a[i-1]) + abs(a[0] - a[i])) + abs(a[0] - a[i-1]);
        }
        cancel[i] = distance - (abs(a[i] - a[i-1]) + abs(a[i+1] - a[i])) + abs(a[i+1] - a[i-1]);
    }

    for(long long i = 1; i <= n; i++){
        printf("%lld\n", cancel[i]);
    }

    return 0;


}