#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
using namespace std;

int main(){
    long long w, h;
    cin >> w >> h;

    vector<vector<long long> > maze(h+2, vector<long long>(w+2, 0));

    for(long long y = 1; y <= h; y++){
        for(long long x = 1; x <= w; x++){
            cin >> maze[y][x];
        }
    }

    vector<vector<long long> > dist(h+2, vector<long long>(w+2, -1));

    dist[0][0] = 0;
    queue<pair<long long, long long> > q;
    q.push(make_pair(0, 0));

    long long dy_odd[] = {1, 1, 0, -1, -1, 0};
    long long dx_odd[] = {0, 1, 1, 1, 0, -1};

    long long dy_even[] = {1, 0, -1, -1, 0, 1};
    long long dx_even[] = {0, 1, 0, -1, -1, -1};

    long long ans = 0;

    while(!q.empty()){
        pair<long long, long long> top;
        top = q.front();
        q.pop();
       
        for(long long i = 0; i < 6; i++){
            if(top.first % 2 == 0){
                if(0 > top.first+dy_even[i] || top.first+dy_even[i] >= h+2 || 0 > top.second+dx_even[i] || top.second+dx_even[i] >= w+2) continue;

                if(maze[top.first+dy_even[i]][top.second+dx_even[i]] == 1) ans++;//建物なら +1
                else if(dist[top.first+dy_even[i]][top.second+dx_even[i]] == -1){//それ以外は distをとる
                    dist[top.first+dy_even[i]][top.second+dx_even[i]] = dist[top.first][top.second] + 1;
                    q.push(make_pair(top.first+dy_even[i], top.second+dx_even[i]));
                }
            }
            else{
                if(0 > top.first+dy_odd[i] || top.first+dy_odd[i] >= h+2 || 0 > top.second+dx_odd[i] || top.second+dx_odd[i] >= w+2 ) continue;

                if(maze[top.first+dy_odd[i]][top.second+dx_odd[i]] == 1) ans++;
                else if(dist[top.first+dy_odd[i]][top.second+dx_odd[i]] == -1){
                    dist[top.first+dy_odd[i]][top.second+dx_odd[i]] = dist[top.first][top.second] + 1;
                    q.push(make_pair(top.first+dy_odd[i], top.second+dx_odd[i]));
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}