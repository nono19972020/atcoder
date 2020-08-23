#include <iostream>
#include <cstdio>
#include <queue>
#include <vector>
using namespace std;


int main(){
    long long h, w;
    cin >> h >> w;

    long long sy, sx, gy, gx;
    cin >> sy >> sx >> gy >> gx;
    sy--, sx--, gy--, gx--;

    char maze[h][w];

    for(long long i = 0; i < h; i++){
        for(long long j = 0; j < w; j++){
            cin >> maze[i][j];
        }
    }

    queue<pair<long long, long long> > q;//キューを利用する
    vector<vector<long long> > distance(h, vector<long long>(w, -1));//幅優先探索は始点との距離を利用する

    q.push(make_pair(sy, sx));
    distance[sy][sx] = 0;

    long long dy[] = {1, -1, 0, 0};
    long long dx[] = {0, 0, 1, -1};
    while(!q.empty()){
        pair<long long, long long> top;
        top = q.front();
        q.pop();

        for(long long i = 0; i < 4; i++){
            if(0 <= top.first+dy[i] and top.first+dy[i] < h and 0 <= top.second+dx[i] and top.second+dx[i] < w and distance[top.first+dy[i]][top.second+dx[i]] == -1 and maze[top.first+dy[i]][top.second+dx[i]] == '.'){
                distance[top.first+dy[i]][top.second+dx[i]] = distance[top.first][top.second] + 1;
                q.push(make_pair(top.first+dy[i], top.second+dx[i]));
            }
        }
    }

    cout << distance[gy][gx] << endl;
    return 0;
}

//01-bfs
//ノーコストの手段で移動する
//何らかのコストや回数制限のある手段で移動する
#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
using namespace std;

int main(){
    long long h, w;
    cin >> h >> w;
    long long sh, sw, gh, gw;
    cin >> sh >> sw >> gh >> gw;
    sh--, sw--, gh--, gw--;

    char maze[h][w];

    for(long long i = 0; i < h; i++){
        for(long long j = 0; j < w; j++){
            cin >> maze[i][j];
        }
    }

    vector<vector<long long> > cost(h, vector<long long>(w, 1e12));//今回は距離でなくコストなので,-1ではなく無限

    cost[sh][sw] = 0;
    deque<pair<long long, long long> > q;//01-bfsはdequeを使用 前後からpush, popができる 

    long long dy[] = {1, -1, 0, 0};
    long long dx[] = {0, 0, 1, -1};

    q.push_front(make_pair(sh, sw));

    while(!q.empty()){
        pair<long long, long long> top;
        top = q.front();
        q.pop_front();
        
        //普通の移動 cost 0
        for(long long i = 0; i < 4; i++){
            if(0 <= top.first+dy[i] and top.first+dy[i] < h and 0 <= top.second+dx[i] and top.second+dx[i] < w and maze[top.first+dy[i]][top.second+dx[i]] == '.' and cost[top.first+dy[i]][top.second+dx[i]] > cost[top.first][top.second]){
                //普通の移動ができる点が、もしワープの方に入った点はここで更新する
                cost[top.first+dy[i]][top.second+dx[i]] = cost[top.first][top.second];
                q.push_front(make_pair(top.first+dy[i], top.second+dx[i]));//cost 0は push_front
            }
        }

        //ワープ cost 1
        for(long long i = -2; i <= 2; i++){
            for(long long j = -2; j <= 2; j++){
                if(i == 0 and j == 0) continue;

                if(0 <= top.first+i and top.first+i < h and 0 <= top.second+j and top.second+j < w and maze[top.first+i][top.second+j] == '.' and cost[top.first+i][top.second+j] > cost[top.first][top.second] + 1){
                    cost[top.first+i][top.second+j] = cost[top.first][top.second] + 1;
                    q.push_back(make_pair(top.first+i, top.second+j));//cost 1は push_back
                }
            }
        }
    }

    if(cost[gh][gw] == 1e12) cost[gh][gw] = -1;
    printf("%lld\n", cost[gh][gw]);
    return 0;
}