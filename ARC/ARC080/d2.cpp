#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long h, w;
    cin >> h >> w;

    long long n;
    cin >> n;

    vector<long long> a(n);
    for(long long i = 0; i < n; i++) cin >> a[i];
    //for(long long i = 0; i < n; i++) printf("%lld ", a[i]);
    //printf("\n");

    long long ans[h][w];
    long long x = 0;
    long long y = 0;
    long long j = 0;

    //printf("start\n");
    while(y < h){
        //printf("y %lld\n", y);
        x = 0;
        while(y < h and x < w){
            //printf("y %lld x %lld\n", y, x);
            //printf("a[%lld] %lld\n", i, a[i]);
            if(a[j] <= 0) j++;
            
            ans[y][x] = j+1;
            a[j]--;
            x++;
            //printf("y %lld x %lld\n", y, x);
        }
        //printf("a\n");
        y++;
        x = w - 1;
        while(y < h and x >= 0){
            //printf("y %lld x %lld\n", y, x);
            //printf("a[%lld] %lld\n", i, a[i]);
            if(a[j] <= 0) j++;
            //printf("c\n");
            ans[y][x] = j+1;
            
            a[j]--;
            
            x--;
            //printf("y %lld x %lld\n", y, x);
        }
        //printf("b\n");
        y++;
    }

    //printf("finish\n");

    for(long long e = 0; e < h; e++){
        //printf("aaa\n");
        for(long long f = 0; f < w; f++){
            printf("%lld ", ans[e][f]);
        }
        printf("\n");
    }

    return 0;
}