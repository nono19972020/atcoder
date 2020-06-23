#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n;
    cin >> n;

    if(n <= 3){
        if(n == 1 || n == 2){
            printf("0\n");
        }
        else{
            printf("1\n");
        }
        return 0;
    }

    vector<long long> dp(n+1, 0);
    dp[3] = 1;
    long long f = 10007;

    

    for(long long i = 4; i <= n; i++){
        dp[i] = (dp[i-1]%f) + (dp[i-2]%f) + (dp[i-3]%f);
        dp[i] = dp[i]%f;
    }

    printf("%lld\n", dp[n]);

    return 0;

}