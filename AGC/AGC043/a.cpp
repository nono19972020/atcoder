#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;

int main(){
    int h, w;
    cin >> h >> w;

    char maze[h][w];
    int distance[h][w];
    int count[h][w];

    for(int y = 0; y < h; y++){
        for(int x = 0; x < w; x++){
            cin >> maze[y][x];
            distance[y][x] = -1;
        }
    }

    distance[0][0] = 0;
    queue<pair<int, int> > q;

    q.push(make_pair(0,0));


    while(!q.empty()){
        pair<int, int> top = q.front();
        q.pop();

        if(maze[top.first][top.second] == '.'){
            if(top.first-1 >= 0 and top.second-1 >= 0){
                count[top.first][top.second] = min(count[top.first-1][top.second], count[top.first][top.second-1]);
            }
            else if(top.first-1 >= 0 and top.second-1 < 0){
                count[top.first][top.second] = count[top.first-1][top.second];
            }
            else if(top.first-1 < 0 and top.second-1 >= 0){
                count[top.first][top.second] =  count[top.first][top.second-1];
            }
            else if(top.first-1 < 0 and top.second-1 < 0){
                //printf("a\n");
                count[top.first][top.second] = 0;
            }
        }
        else{
            if(top.first-1 >= 0 and top.second-1 >= 0){
                count[top.first][top.second] = min(count[top.first-1][top.second], count[top.first][top.second-1]);
            }
            else if(top.first-1 >= 0 and top.second-1 < 0){
                count[top.first][top.second] = count[top.first-1][top.second];
            }
            else if(top.first-1 < 0 and top.second-1 >= 0){
                count[top.first][top.second] =  count[top.first][top.second-1];
            }
            else if(top.first-1 < 0 and top.second-1 < 0){
                 //printf("b\n");
                count[top.first][top.second] = 1;
            }
        }

        //printf("y %d x %d count %d\n", top.first, top.second, count[top.first][ top.second]);
   
        if(top.first+1 < h and distance[top.first+1][top.second] == -1){
            q.push(make_pair(top.first+1, top.second));
            distance[top.first+1][top.second] = distance[top.first][top.second] + 1;
        }

        if(top.second+1 < w and distance[top.first][top.second+1] == -1){
            q.push(make_pair(top.first, top.second+1));
            distance[top.first][top.second+1] = distance[top.first][top.second] + 1;
        }

    }

    //cout << count[0][0] << endl;
    cout << count[h-1][w-1] << endl;

    return 0;
}