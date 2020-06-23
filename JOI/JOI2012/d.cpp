#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
    int d, n;

    cin >> d >> n;

    int t[d+1];
    for(int i = 1; i <= d; i++){
        cin >> t[i];
    }

    int a[n+1], b[n+1], c[n+1];
    for(int i = 1; i <= n; i++){
        cin >> a[i] >> b[i] >> c[i];
    }

    int dp[d+1][n+1];

    for(int i = 1; i <= d; i++){
        for(int j = 1; j <= n; j++){
            dp[i][j] = -10000;
            }
    }

    for(int i = 1; i <= n; i++){
        if(a[i] <= t[1] and t[1] <= b[i]){
            dp[1][i] = 0;
        }
    }


    for(int i = 2; i <= d; i++){
        //printf("t[i] %d\n", t[i]);
        for(int j = 1; j <= n; j++){
            if(a[j] <= t[i] and t[i] <= b[j]){
                for(int j2 = 1; j2 <= n; j2++){
                    dp[i][j] = max(dp[i][j], dp[i-1][j2] + abs(c[j] - c[j2]));
                    //printf("dp[%d][%d] %d\n", i, j, dp[i][j]);
                }
            }
        }
    }

    int maxv = 0;
    for(int j = 1; j <= n; j++){
        //printf("dp %d\n", dp[d][j]);
        maxv = max(maxv, dp[d][j]);
    }

    printf("%d\n", maxv);

    return 0;
    
}