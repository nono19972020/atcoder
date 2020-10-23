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
    for(long long y = 0; y < h; y++){
        for(long long x = 0; x < w; x++){
            cin >> maze[y][x];
            if(maze[y][x] == '.') cnt++;
        }
    }

    queue<pair<long long, long long> > q;
    q.push(make_pair(0, 0));
    vector<vector<long long> > dist(h, vector<long long>(w, -1));
    dist[0][0] = 0;

    long long dy[] = {1, 0, -1, 0};
    long long dx[] = {0, 1, 0, -1};

    while(!q.empty()){
        pair<long long, long long> top;
        top = q.front();
        q.pop();

        for(long long i = 0; i < 4; i++){
            if(0 <= top.first+dy[i] and top.first+dy[i] < h and 0 <= top.second + dx[i] and top.second+dx[i] < w and maze[top.first+dy[i]][top.second+dx[i]] == '.' and dist[top.first+dy[i]][top.second+dx[i]] == -1){
                dist[top.first+dy[i]][top.second+dx[i]] = dist[top.first][top.second] + 1;
                q.push(make_pair(top.first+dy[i], top.second+dx[i]));
            }
        }
    }

    if(dist[h-1][w-1] == -1) printf("-1\n");
    else printf("%lld\n", cnt - dist[h-1][w-1]-1);

    return 0;
}