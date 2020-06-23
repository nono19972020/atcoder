#include <iostream>
#include <cstdio>
using namespace std;
#define n_max 200
#define w_max 1000000000

long long dp[n_max+1][w_max+1];
long long value[n_max+1];
long long weight[n_max+1];
long long n, w;
long long value_max;

//半分全列挙分からず

void knap_weight(){
    for(int i = 0; i <= n; i++){
        dp[i][0] = 0;
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= w; j++){
            if(j - weight[i] >= 0){
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-weight[i]]+value[i]);
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
}

void knap_value(){
    for(int i = 0; i <= n; i++){
        dp[i][0] = 1e9;
    }
    dp[0][0] = 0;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= value_max; j++){
            if(j - value[i] >= 0){
                dp[i][j] = min(dp[i-1][j], dp[i-1][j - value[i]] + weight[i]);
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
}

int main(){
    cin >> n >> w;

    for(int i = 1; i <= n; i++){
        cin >> value[i] >> weight[i];
    }

    knap_weight();

    printf("%lld\n", dp[n][w]);

    return 0;

}