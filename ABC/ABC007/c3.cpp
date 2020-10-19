#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
using namespace std;

int main(){
    long long r, c, sy, sx, gy, gx;
    cin >> r >> c >> sy >> sx >> gy >> gx;

    sy--, sx--, gy--, gx--;

    char maze[r][c];

    for(long long i = 0; i < r; i++){
        for(long long j = 0; j < c; j++) cin >> maze[i][j];
    }

    vector<vector<long long> > dist(r, vector<long long>(c, -1));

    dist[sy][sx] = 0;

    queue<pair<long long, long long> > q;
    q.push(make_pair(sy, sx));

    long long dy[] = {1, 0, -1, 0};
    long long dx[] = {0, 1, 0, -1};
    while(!q.empty()){
        pair<long long, long long> top;
        top = q.front();
        q.pop();

        for(long long i = 0; i < 4; i++){
            if(0 <= top.first + dy[i] and top.first + dy[i] < r and 0 <= top.second + dx[i] and top.second + dx[i] < c and maze[top.first+dy[i]][top.second+dx[i]] == '.' and dist[top.first+dy[i]][top.second+dx[i]] == -1){
                q.push(make_pair(top.first+dy[i], top.second+dx[i]));
                dist[top.first+dy[i]][top.second+dx[i]] = dist[top.first][top.second] + 1;
            }
        }
    }
    
    cout << dist[gy][gx] << endl;
    return 0;
}