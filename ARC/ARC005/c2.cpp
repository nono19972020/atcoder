#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
using namespace std;

long long INF = 1e12;

int main(){
    long long h, w;
    cin >> h >> w;

    char maze[h][w];
    long long sy, sx, gy, gx;

    for(long long i = 0; i < h; i++){
        for(long long j = 0; j < w; j++){
            cin >> maze[i][j];
            if(maze[i][j] == 's') sy = i, sx = j;
            else if(maze[i][j] == 'g') gy = i, gx = j;
        }
    }

    vector<vector<long long> > cost(h, vector<long long>(w, INF));
    deque<pair<long long, long long> > q;

    cost[sy][sx] = 0;
    q.push_back(make_pair(sy, sx));

    long long dy[] = {1, -1, 0, 0};
    long long dx[] = {0, 0, 1, -1};

    while(!q.empty()){
        pair<long long, long long> top;
        top = q.front();
        q.pop_front();

        for(long long i = 0; i < 4; i++){
            if(0 <= top.first+dy[i] and top.first+dy[i] < h and 0 <= top.second+dx[i] and top.second+dx[i] < w and maze[top.first+dy[i]][top.second+dx[i]] != '#' and cost[top.first+dy[i]][top.second+dx[i]] > cost[top.first][top.second]){
                q.push_front(make_pair(top.first+dy[i], top.second+dx[i]));
                cost[top.first+dy[i]][top.second+dx[i]] = cost[top.first][top.second];
            }
        }

        for(long long i = 0; i < 4; i++){
            if(0 <= top.first+dy[i] and top.first+dy[i] < h and 0 <= top.second+dx[i] and top.second+dx[i] < w and maze[top.first+dy[i]][top.second+dx[i]] == '#' and cost[top.first+dy[i]][top.second+dx[i]] > cost[top.first][top.second] + 1){
                q.push_back(make_pair(top.first+dy[i], top.second+dx[i]));
                cost[top.first+dy[i]][top.second+dx[i]] = cost[top.first][top.second] + 1;
            }
        }
    }

    if(cost[gy][gx] <= 2) printf("YES\n");
    else printf("NO\n");

    return 0;
}