#include <iostream>
#include <cstdio>
#include <queue>
#include <vector>
using namespace std;



int main(){
    int h, w;
    cin >> h >> w;

    char maze[h][w];
    int break_count[h][w];

    int sy, sx;
    int gy, gx;

    for(int y = 0; y < h; y++){
        for(int x = 0; x < w; x++){
            cin >> maze[y][x];
            break_count[y][x] = 1e9;
            if(maze[y][x] == 's'){
                sy = y;
                sx = x;
            }
            if(maze[y][x] == 'g'){
                gy = y;
                gx = x;
            }
        }
    }

    break_count[sy][sx] = 0;

    deque<pair<int, int> > q;

    q.push_back(make_pair(sy, sx));

    pair<int, int> t;
    
    bool wall;
    while(!q.empty()){
        t = q.front();
        q.pop_front();
        if(t.first-1 >= 0 and break_count[t.first-1][t.second] == 1e9){
            wall = (maze[t.first-1][t.second] == '#');
            break_count[t.first-1][t.second] = break_count[t.first][t.second] + wall;
            if(wall == true){
                q.push_back(make_pair(t.first-1, t.second));
            }
            else{
                q.push_front(make_pair(t.first-1, t.second));
            }
        }
        if(t.first+1 < h and break_count[t.first+1][t.second] == 1e9){
            wall = (maze[t.first+1][t.second] == '#');
            break_count[t.first+1][t.second] = break_count[t.first][t.second] + wall;
            if(wall == true){
                q.push_back(make_pair(t.first+1, t.second));
            }
            else{
                q.push_front(make_pair(t.first+1, t.second));
            }
        }
        if(t.second+1 < w and break_count[t.first][t.second+1] == 1e9){
            wall = (maze[t.first][t.second+1] == '#');
            break_count[t.first][t.second+1] = break_count[t.first][t.second] + wall;
            if(wall == true){
                q.push_back(make_pair(t.first, t.second+1));
            }
            else{
                q.push_front(make_pair(t.first, t.second+1));
            }
        }
        if(t.second-1 >= 0 and break_count[t.first][t.second-1] == 1e9){
            wall = (maze[t.first][t.second-1] == '#');
            break_count[t.first][t.second-1] = break_count[t.first][t.second] + wall;
            if(wall == true){
                q.push_back(make_pair(t.first, t.second-1));
            }
            else{
                q.push_front(make_pair(t.first, t.second-1));
            }
        }
    }

    if(break_count[gy][gx] <= 2){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }


    return 0;

}