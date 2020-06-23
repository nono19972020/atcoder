#include <iostream>
#include <cstdio>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    long long n, m;
    cin >> n >> m;
    long long h[n + 1];

    int good[n + 1];
    int bad[n + 1];
    long long a, b;

    for(long long i = 1; i <= n; i++){
        cin >> h[i];
        good[i] = 0;
        bad[i] = 0;
    }

    for(long long i = 0; i < m; i++){
        cin >> a >> b;
        if(h[a] - h[b] > 0){
            good[a] = 1;
            bad[b] = 1;

        }
        else if(h[a] - h[b] < 0){
            good[b] = 1;
            bad[a] = 1;
        }
        else{
            bad[a] = 1;
            bad[b] = 1;
        }
    }

    long long count = 0;

    for(long long i = 1; i <= n; i++){
        if(good[i] > 0 and bad[i] == 0){
            count++;
        }
        else if(good[i] == 0 and bad[i] == 0){
            count++;
        }
    }

    printf("%lld\n", count);

    return 0;

    
}