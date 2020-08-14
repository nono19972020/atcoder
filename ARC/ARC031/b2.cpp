#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

char maze[10][10];
vector<vector<bool> > visit(10, vector<bool> (10, false));

long long cnt_visit(){
    long long cnt = 0;
    for(long long i = 0; i < 10; i++){
        for(long long j = 0; j < 10; j++){
            if(maze[i][j] == 'o' and visit[i][j] == true) cnt++;
        }
    }
    return cnt;
}


void dfs(long long y, long long x){
    if(visit[y][x] == true) return;
    
    visit[y][x] = true;

    long long dy[] = {1, -1, 0, 0};
    long long dx[] = {0, 0, 1, -1};

    for(long long i = 0; i < 4; i++){
        if(0 <= y+dy[i] and y+dy[i] < 10 and 0 <= x+dx[i] and x+dx[i] < 10 and maze[y+dy[i]][x+dx[i]] == 'o') dfs(y+dy[i], x+dx[i]);
    }

}

int main(){
    long long cnt_o = 0;
    for(long long i = 0; i < 10; i++){
        for(long long j = 0; j < 10; j++){
            cin >> maze[i][j];
            if(maze[i][j] == 'o') cnt_o++;
        }
    }

    for(long long i = 0; i < 10; i++){
        for(long long j = 0; j < 10; j++){
            if(maze[i][j] == 'o') continue;
            //dfs
            vector<vector<bool> > initv(10, vector<bool>(10, false));
            visit = initv;

            maze[i][j] = 'o';
            dfs(i, j);
            if(cnt_o+1 == cnt_visit()){
                printf("YES\n");
                return 0;
            }
            maze[i][j] = 'x';
        }
    }
    printf("NO\n");
    return 0;
}