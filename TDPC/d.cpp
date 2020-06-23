#include <iostream>
#include <cstdio>
using namespace std;

long long n, d;

double dp[101][70][60][60];
long long c2 = 0, c3 = 0, c5 = 0;

int main(){
    
    

    cin >> n >> d; 

    while(d % 2 == 0){
        
        d = d/2;
        c2++;
    }
    
    while(d % 3 == 0){
        d = d/3;
        c3++;
    }
    while(d % 5 == 0){
        d = d/5;
        c5++;
    }

    //printf("d %lld\n", d);

    if(d > 1){
        printf("0.0000\n");
        return 0;
    }

    //printf("c2 %lld c3 %lld c5 %lld\n", c2, c3, c5);

    dp[0][0][0][0] = 1;

    for(long long i = 0; i < n; i++){
        for(long long j2 = 0; j2 < 70; j2++){
            for(long long j3 = 0; j3 < 60; j3++){
                for(long long j5 = 0; j5 < 60; j5++){
                    dp[i+1][j2][j3][j5] += dp[i][j2][j3][j5]/6.0;
                    dp[i+1][j2+1][j3][j5] += dp[i][j2][j3][j5]/6.0;
                    dp[i+1][j2][j3+1][j5] += dp[i][j2][j3][j5]/6.0;
                    dp[i+1][j2+2][j3][j5] += dp[i][j2][j3][j5]/6.0;
                    dp[i+1][j2][j3][j5+1] += dp[i][j2][j3][j5]/6.0;
                    dp[i+1][j2+1][j3+1][j5] += dp[i][j2][j3][j5]/6.0;
                }
            }
        }
    }

    double p = 0;
    for(long long j2 = c2; j2 < 70; j2++){
        for(long long j3 = c3; j3 < 60; j3++){
            for(long long j5 = c5; j5 < 60; j5++){
                p = p + dp[n][j2][j3][j5];
            }
        }
    }

    printf("%f\n", p);
    return 0;
}