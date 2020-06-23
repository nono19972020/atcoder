#include <iostream>
#include <cstdio>
#include <queue>
#include <vector>
using namespace std;

int h, w, n;
char maze[1000][1000];
int dist[1000][1000];

void init(){
    for(int y = 0; y < h; y++){
        for(int x = 0; x < w; x++){
            dist[y][x] = 100000;
        }
    }
}

int main(){
  
    cin >> h >> w >> n;

    

    int sy, sx;
    vector<pair<int, int> > g(n);

    //int i = 1;
    for(int y = 0; y < h; y++){
        for(int x = 0; x < w; x++){
            cin >> maze[y][x];
            //dist[y][x] = 100000;
            if(maze[y][x] == 'S'){
                sy = y;
                sx = x;
            }
            if(maze[y][x] == '1'){
                g[0] = make_pair(y, x);
                
            }
            if(maze[y][x] == '2'){
                g[1] = make_pair(y, x);
                
            }
            if(maze[y][x] == '3'){
                g[2] = make_pair(y, x);
                
            }
            if(maze[y][x] == '4'){
                g[3] = make_pair(y, x);
                
            }
            if(maze[y][x] == '5'){
                g[4] = make_pair(y, x);
                
            }
            if(maze[y][x] == '6'){
                g[5] = make_pair(y, x);
                
            }
            if(maze[y][x] == '7'){
                g[6] = make_pair(y, x);
                
            }
            if(maze[y][x] == '8'){
                g[7] = make_pair(y, x);
                
            }
            if(maze[y][x] == '9'){
                g[8] = make_pair(y, x);
                
            }
        }
    }


    int target_x, target_y;
    int time = 0;

    queue<pair<int, int> >q;
    pair<int, int> t;

    for(int j = 0; j < n; j++){
        init();
        dist[sy][sx] = 0;
        target_y = g[j].first;
        target_x = g[j].second;
        //printf("sy sx %d %d\n", sx, sy);
        //printf("ty tx %d %d\n", target_y, target_x);
        q.push(make_pair(sy, sx));

        while(!q.empty()){
            t = q.front();
            q.pop();

            //printf("topy topx %d %d\n", t.first, t.second);

            if(t.first+1 < h and maze[t.first+1][t.second] != 'X' and dist[t.first+1][t.second] == 100000){
                q.push(make_pair(t.first+1, t.second));
                dist[t.first+1][t.second] = dist[t.first][t.second] + 1;
                //printf("aaa\n");
            }
            if(t.first-1 >= 0 and maze[t.first-1][t.second] != 'X' and dist[t.first-1][t.second] == 100000){
                q.push(make_pair(t.first-1, t.second));
                dist[t.first-1][t.second] = dist[t.first][t.second] + 1;
                //printf("bbb\n");
            }
            if(t.second+1 < w and maze[t.first][t.second+1] != 'X' and dist[t.first][t.second+1] == 100000){
                q.push(make_pair(t.first, t.second+1));
                dist[t.first][t.second+1] = dist[t.first][t.second] + 1;
                //printf("ccc\n");
            }
            if(t.second-1 >= 0 and maze[t.first][t.second-1] != 'X' and dist[t.first][t.second-1] == 100000){
                q.push(make_pair(t.first, t.second-1));
                dist[t.first][t.second-1] = dist[t.first][t.second] + 1;
                //printf("ddd\n");
            }
        }

        sy = target_y;
        sx = target_x;

        //printf("dist[target_y][target_x] %d\n", dist[target_y][target_x]);
        //printf("ty tx %d %d\n", target_y, target_x);

        time = time + dist[target_y][target_x];

    }

    printf("%d\n", time);

    return 0;

    
}