#include <iostream>
#include <cstdio>
using namespace std;
int n, m;
int dp[105][105][105];

int main(){

    for(int i = 0; i < 105; i++){
        for(int j = 0; j < 105; j++){
            for(int k = 0; k < 105; k++){
                dp[i][j][k] = 0;//初期化
            }
        }
    }

    cin >> n >> m;

    int x, y, z, w;

    for(int i = 0; i < n; i++){
        cin >> x >> y >> z >> w;
        dp[x][y][z] = max(dp[x][y][z], w);
    }

    //printf("job input\n");

    for(int i = 0; i <= 100; i++){
        for(int j = 0; j <= 100; j++){
            for(int k = 0; k <= 100; k++){
                dp[i+1][j][k] = max(dp[i+1][j][k], dp[i][j][k]);
                dp[i][j+1][k] = max(dp[i][j+1][k], dp[i][j][k]);
                dp[i][j][k+1] = max(dp[i][j][k+1], dp[i][j][k]);
            }
        }
    }

    for(int i = 0; i < m; i++){
        cin >> x >> y >> z;
        printf("%d\n", dp[x][y][z]);
    }

    return 0;



}