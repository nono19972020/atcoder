#include <iostream>
#include <cstdio>
using namespace std;
#define n_max 50
#define w_max 10000




int main(){

long long w;
long long n;
long long k;

cin >> w;
cin >> n >> k;

long long wide[n+1];
long long b[n+1];


long long dp[50+1][w+1][50+1];



for(long long i = 1; i <= n; i++){
    cin >> wide[i] >> b[i];
}


dp[0][0][0] = 0;

for(long long z = 1; z <= n; z++){
   dp[z][0][0] = 0;
}

for(long long z = 1; z <= n; z++){
    for(long long y = 1; y <= w; y++){
        for(long long x = 1; x <= k; x++){
            if(wide[z] <= y){
                dp[z][y][x] = max(dp[z-1][y-wide[z]][x-1] + b[z], dp[z-1][y][x]);
            }
            else{
                dp[z][y][x] = dp[z-1][y][x];
            }
        }
    }
}

printf("%lld\n", dp[n][w][k]);

return 0;

}