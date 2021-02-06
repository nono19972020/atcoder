#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;

    long long t[n];

    for(long long i = 0; i < n; i++) cin >> t[i];

    long long cnt = t[0] + t[1] + t[2];
    for(long long i = 0; i < n; i++){
        if(i == 0 || i == 1) continue;
        else if(i == 2){
            if(cnt < k){
                printf("%lld\n", i+1);
                return 0;
            }
        }
        else{
            cnt -= t[i-3];
            cnt += t[i];
            if(cnt < k){
                printf("%lld\n", i+1);
                return 0;
            }
        }
    }
    printf("-1\n");
    return 0;
}