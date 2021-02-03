#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long a, b, c;
    cin >> a >> b >> c;
    
    double dp[101][101][101];
    for(long long i = 0; i < 101; i++){
        for(long long j = 0; j < 101; j++){
            dp[i][j][100] = 0;
            dp[i][100][j] = 0;
            dp[100][i][j] = 0;
        }
    }
    
    for(long long x = 100; x >= 0; x--){
        for(long long y = 100; y >= 0; y--){
            for(long long z = 100; z >= 0; z--){
                if(x == 100 || y == 100 || z == 100) continue;

                dp[z][y][x] = (x * (dp[z][y][x+1] + 1) + y * (dp[z][y+1][x] + 1) + z * (dp[z+1][y][x] + 1)) /(x + y + z);
            }
        }
    }

    
    printf("%.10f\n", dp[c][b][a]);
    
    return 0;
}