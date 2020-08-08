#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

long long mod = 1e9+7;

long long dy[] = {1, 0, -1, 0};
long long dx[] = {0, 1, 0, -1};
long long h, w;
long long a[1010][1010];
vector<vector<long long> > dp(1010, vector<long long>(1010, -1));

long long dfs(long long y, long long x){
    if(dp[y][x] != -1) return dp[y][x];

    long long ret = 1;
    for(long long i = 0; i < 4; i++){
        long long ny = y + dy[i];
        long long nx = x + dx[i];
        if(ny < 0 || ny >= h || nx < 0 || nx >= w) continue;
        if(a[y][x] < a[ny][nx]){
            ret += dfs(ny, nx);
            ret %= mod;
        }
    }
    return dp[y][x] = ret;
}

int main(){
    cin >> h >> w;

    for(long long i = 0; i < h; i++){
        for(long long j = 0; j < w; j++){
            cin >> a[i][j];
        }
    }

    long long ans = 0;

    for(long long i = 0; i < h; i++){
        for(long long j = 0; j < w; j++){
            ans += dfs(i, j);
            ans %= mod;
        }
    }

    cout << ans << endl;
    return 0;
}