#include <iostream>
#include <cstdio>
#include <queue>
#include <vector>
using namespace std;

int main(){
    int h, w;
    cin >> h >> w;

    char maze[h][w];
    int dist[h][w];

    int count_w = 0;

    for(int y = 0; y < h; y++){
        for(int x = 0; x < w; x++){
            cin >> maze[y][x];
            dist[y][x] = 1e9;
            if(maze[y][x] == '.'){
                count_w++;
            }
        }
    }

    queue <pair<int, int> > q;
    pair<int, int> t;
    q.push(make_pair(0, 0));
    dist[0][0] = 0;

    while(!q.empty()){
        t = q.front();
        q.pop();
        if(t.first-1 >= 0 and maze[t.first-1][t.second] == '.' and dist[t.first-1][t.second] == 1e9){
            q.push(make_pair(t.first-1, t.second));
            dist[t.first-1][t.second] = dist[t.first][t.second] + 1;
        }
        if(t.first+1 < h and maze[t.first+1][t.second] == '.' and dist[t.first+1][t.second] == 1e9){
            q.push(make_pair(t.first+1, t.second));
            dist[t.first+1][t.second] = dist[t.first][t.second] + 1;
        }
        if(t.second-1 >= 0 and maze[t.first][t.second-1] == '.' and dist[t.first][t.second-1] == 1e9){
            q.push(make_pair(t.first, t.second-1));
            dist[t.first][t.second-1] = dist[t.first][t.second] + 1;
        }
        if(t.second+1 < w and maze[t.first][t.second+1] == '.' and dist[t.first][t.second+1] == 1e9){
            q.push(make_pair(t.first, t.second+1));
            dist[t.first][t.second+1] = dist[t.first][t.second] + 1;
        }
    }

    if(dist[h-1][w-1] == 1e9){
        printf("-1\n");
    }
    else{
        printf("%d\n", count_w - dist[h-1][w-1]-1);
    }

    return 0;
}


