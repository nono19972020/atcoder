#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

long long n, m;

long long dy[] = {1, 0, -1, 0};
long long dx[] = {0, 1, 0, -1};

vector<vector<long long> > maze(100, vector<long long>(100));

long long ans = 0;

void dfs(long long y, long long x, long long dist){
    if(maze[y][x] == 0) return;

    maze[y][x] = 0;//割る

    long long next = dist + 1;
    for(long long i = 0; i < 4; i++){
        if(0 <= y + dy[i] and y + dy[i] < m and 0 <= x + dx[i] and x + dx[i] < n) dfs(y + dy[i], x + dx[i], next);
    }

    maze[y][x] = 1;//もう一回来るかもしれないので直す
    ans = max(ans, dist + 1);
}

int main(){
    cin >> n >> m;

    for(long long y = 0; y < m; y++){
        for(long long x = 0; x < n; x++) cin >> maze[y][x];
    }

    for(long long y = 0; y < m; y++){
        for(long long x = 0; x < n; x++){
            if(maze[y][x] == 0) continue;

            dfs(y, x, 0);
        }
    }

    cout << ans << endl;
    return 0;
}