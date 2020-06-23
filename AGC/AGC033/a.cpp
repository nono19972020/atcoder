#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;


int main(){
    int h, w;
    cin >> h >> w;

    char maze[h][w];
    int dist[h][w];

    vector <pair<int, int> > black;

    for(int y = 0; y < h; y++){
        for(int x = 0; x < w; x++){
            cin >> maze[y][x];
            dist[y][x] = 1e9;
            if(maze[y][x] == '#'){
                black.push_back(make_pair(y, x));
                dist[y][x] = 0;
            }
        }
    }

    queue <pair<int, int> > q;

    for(int i = 0; i < black.size(); i++){
        q.push(black[i]);
    }

    pair<int, int> top;

    while(!q.empty()){
        top = q.front();
        q.pop();

        if(top.first-1 >= 0 and maze[top.first-1][top.second] == '.' and dist[top.first-1][top.second] == 1e9){
            q.push(make_pair(top.first-1, top.second));
            dist[top.first-1][top.second] = dist[top.first][top.second] + 1;
            maze[top.first-1][top.second] = '#';
        }
        if(top.first+1 < h and maze[top.first+1][top.second] == '.' and dist[top.first+1][top.second] == 1e9){
            q.push(make_pair(top.first+1, top.second));
            dist[top.first+1][top.second] = dist[top.first][top.second] + 1;
            maze[top.first+1][top.second] = '#';
        }
        if(top.second-1 >= 0 and maze[top.first][top.second-1] == '.' and dist[top.first][top.second-1] == 1e9){
            q.push(make_pair(top.first, top.second-1));
            dist[top.first][top.second-1] = dist[top.first][top.second] + 1;
            maze[top.first][top.second-1] = '#';
        }
        if(top.second+1 < w and maze[top.first][top.second+1] == '.' and dist[top.first][top.second+1] == 1e9){
            q.push(make_pair(top.first, top.second+1));
            dist[top.first][top.second+1] = dist[top.first][top.second] + 1;
            maze[top.first][top.second+1] = '#';
        }
    }

    int maxv = 0;

    for(int y = 0; y < h; y++){
        for(int x = 0; x < w; x++){
           
            maxv = max(dist[y][x], maxv);
           
        }
    }

    printf("%d\n", maxv);

    return 0;


}