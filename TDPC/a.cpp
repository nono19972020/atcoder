#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int n;
    cin >> n;
    int p[n+1];
    int sum = 0;

    for(int i = 1; i <= n; i++){
        cin >> p[i];
        sum = sum + p[i];
    }

    //printf("sum %d\n", sum);

    bool dp[n+1][sum+1];

    
    
    for(int j = 0; j <= sum; j++){
        dp[0][j] = false;
    }
    

    dp[0][0] = true;

    for(int i = 1; i <= n; i++){
        //printf("i %d\n", i);
        for(int j = 0; j <= sum; j++){
            if(j - p[i] >= 0){
                dp[i][j] = (dp[i-1][j-p[i]] | dp[i-1][j]);
                //printf("a\n");
                //printf("dp[i][j] %d\n", dp[i][j]);
            }
            else{
                dp[i][j] = dp[i-1][j];
                //printf("b\n");
                //printf("dp[i][j] %d\n", dp[i][j]);
            }
        }
    }

    int count = 0;

    for(int j = 0; j <=sum; j++){
        if(dp[n][j] == true){
            count++;
        }
    }

    printf("%d\n", count);

}