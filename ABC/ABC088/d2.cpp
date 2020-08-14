#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
using namespace std;

int main(){
    long long h, w;
    cin >> h >> w;

    char maze[h][w];
    long long cnt = 0;
    for(long long i = 0; i < h; i++){
        for(long long j = 0; j < w; j++){
            cin >> maze[i][j];
            if(maze[i][j] == '.') cnt++;
        }
    }

    long long sy = 0, sx = 0, gy = h-1, gx = w-1;

    vector<vector<long long> > distance(h, vector<long long> (w, -1));
    queue<pair<long long, long long> > q;

    q.push(make_pair(sy, sx));
    distance[sy][sx] = 0;

    long long dy[] = {1, -1, 0, 0};
    long long dx[] = {0, 0, 1, -1};

    while(!q.empty()){
        pair<long long, long long> top;
        top = q.front();
        q.pop();

        for(long long i = 0; i < 4; i++){
            if(0 <= top.first+dy[i] and top.first+dy[i] < h and 0 <= top.second+dx[i] and top.second+dx[i] < w and distance[top.first+dy[i]][top.second+dx[i]] == -1 and maze[top.first+dy[i]][top.second+dx[i]] == '.'){
                distance[top.first+dy[i]][top.second+dx[i]] = distance[top.first][top.second] + 1;
                q.push(make_pair(top.first+dy[i], top.second+dx[i]));
            }
        }
    }
    long long ans = -1;

    if(distance[gy][gx] != -1){
        ans = cnt - distance[gy][gx] -1;
    }

    cout << ans << endl;
    return 0;
}