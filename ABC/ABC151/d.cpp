#include <iostream>
#include <cstdio>
#include <queue>
#include <vector>
using namespace std;



int main(){
    long long h, w;
    cin >> h >> w;
    char maze[h][w];

    for(long long y = 0; y < h; y++){
        for(long long x = 0; x < w; x++){
            cin >> maze[y][x];
        }
    }

    long long distance_max = 0;
    for(long long ys = 0; ys < h; ys++){
        for(long long xs = 0; xs < w; xs++){
            for(long long yg = 0; yg < h; yg++){
                for(long long xg = 0; xg < w; xg++){
                    if(ys == yg and xs == xg){
                        continue;
                    }
                    if(maze[ys][xs] == '#' || maze[yg][xg] == '#'){
                        continue;
                    }
                    queue<pair<long long, long long> > q;
                    vector<vector<long long> > distance(h, vector<long long>(w, -1));

                    q.push(make_pair(ys, xs));
                    distance[ys][xs] = 0;

                    while(!q.empty()){
                        pair<long long, long long> top;
                        top = q.front();
                        q.pop();

                        if(top.first+1 < h and distance[top.first+1][top.second] == -1 and maze[top.first+1][top.second] == '.'){
                            distance[top.first+1][top.second] = distance[top.first][top.second] +1;
                            q.push(make_pair(top.first+1, top.second));
                        }
                        if(top.first-1 >= 0 and distance[top.first-1][top.second] == -1 and maze[top.first-1][top.second] == '.'){
                            distance[top.first-1][top.second] = distance[top.first][top.second] +1;
                            q.push(make_pair(top.first-1, top.second));
                        }
                        if(top.second+1 < w and distance[top.first][top.second+1] == -1 and maze[top.first][top.second+1] == '.'){
                            distance[top.first][top.second+1] = distance[top.first][top.second] +1;
                            q.push(make_pair(top.first, top.second+1));
                        }
                        if(top.second-1 >= 0 and distance[top.first][top.second-1] == -1 and maze[top.first][top.second-1] == '.'){
                            distance[top.first][top.second-1] = distance[top.first][top.second] +1;
                            q.push(make_pair(top.first, top.second-1));
                        }
                    }
                    distance_max = max(distance_max, distance[yg][xg]);
                    
                }
            }
        }
    }

    cout << distance_max << endl;

    return 0;
}