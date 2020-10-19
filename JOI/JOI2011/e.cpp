#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
using namespace std;

int main(){
    long long h, w, n;
    cin >> h >> w >> n;

    long long sy, sx;
    vector<pair<long long, long long> > goal(n);
    char maze[h][w];

    for(long long y = 0; y < h; y++){
        for(long long x = 0; x < w; x++){
            cin >> maze[y][x];

            if(maze[y][x] == 'S'){
                sy = y;
                sx= x;
            }
            else if(maze[y][x] != 'X' and maze[y][x] != '.'){
                for(char c = '1'; c <= '9'; c++){
                    if(maze[y][x] == c){
                        goal[c-'1'] = make_pair(y, x);
                        
                    }
                }
            }
        }
    }

    long long dy[] = {1, 0, -1, 0};
    long long dx[] = {0, 1, 0, -1};

    long long ans = 0;
    for(long long i = 0; i < n; i++){
        if(i != 0){
            sy = goal[i-1].first;
            sx = goal[i-1].second;
        }
        
        long long gy = goal[i].first;
        long long gx = goal[i].second;

        queue<pair<long long, long long> > q;
        vector<vector<long long> > dist(h, vector<long long>(w, -1));

        q.push(make_pair(sy, sx));
        dist[sy][sx] = 0;

        while(!q.empty()){
            pair<long long, long long> top;
            top = q.front();
            q.pop();

            for(long long j = 0; j < 4; j++){
                if(0 <= top.first+dy[j] and top.first+dy[j] < h and 0 <= top.second+dx[j] and top.second+dx[j] < w and maze[top.first+dy[j]][top.second+dx[j]] != 'X' and dist[top.first+dy[j]][top.second+dx[j]] == -1){
                    q.push(make_pair(top.first+dy[j], top.second+dx[j]));
                    dist[top.first+dy[j]][top.second+dx[j]] = dist[top.first][top.second] + 1;
                }
            }
        }

        ans += dist[gy][gx];
    }

    cout << ans << endl;
    return 0;
}