#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int n, ng1, ng2, ng3;
    cin >> n >> ng1 >> ng2 >> ng3;

    int dp[n+1];
    int INF = 100000;

    for(int i = 0; i <= n; i++){
        dp[i] = INF;
    }

    dp[n] = 0;

    for(int i = n; i >= 0; i--){
        if(i == ng1 || i == ng2 || i == ng3){
            continue;
        }

        for(int j = 1; j <= 3; j++){
            if(i-j >= 0){
                dp[i-j] = min(dp[i-j], dp[i]+1);
            }
        }
    }

    if(dp[0] <= 100){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;


}