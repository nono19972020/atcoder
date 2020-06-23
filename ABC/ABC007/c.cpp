#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;

int main(){
    int h, w;
    int sy, sx;
    int gy, gx;

    cin >> h >> w;
    cin >> sy >> sx;
    cin >> gy >> gx;

    char c[h][w];
    int dist[h][w];

    for(int y = 0; y < h; y++){
        for(int x = 0; x < w; x++){
            cin >> c[y][x];
            dist[y][x] = 10000;
        }
    }

    queue<pair<int, int> > q;

    q.push(make_pair(sy-1, sx-1));
    dist[sy-1][sx-1] = 0;

    pair<int, int> t;//<y, x>
    while(!q.empty()){
        t = q.front();
        q.pop();
        if(t.second+1 < w and c[t.first][t.second+1] == '.' and dist[t.first][t.second+1] == 10000){
            q.push(make_pair(t.first, t.second+1));
            dist[t.first][t.second+1] = dist[t.first][t.second] + 1;
        }

        if(t.second-1 >=0 and c[t.first][t.second-1] == '.' and dist[t.first][t.second-1] == 10000){
            q.push(make_pair(t.first, t.second-1));
            dist[t.first][t.second-1] = dist[t.first][t.second] + 1;
        }
        if(t.first+1 < h and c[t.first+1][t.second] == '.' and dist[t.first+1][t.second] == 10000){
            q.push(make_pair(t.first+1, t.second));
            dist[t.first+1][t.second] = dist[t.first][t.second] + 1;
        }
        if(t.first-1 >= 0 and c[t.first-1][t.second] == '.' and dist[t.first-1][t.second] == 10000){
            q.push(make_pair(t.first-1, t.second));
            dist[t.first-1][t.second] = dist[t.first][t.second] + 1;
        }

    }

    printf("%d\n", dist[gy-1][gx-1]);

    return 0;

}