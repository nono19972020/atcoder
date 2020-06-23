#include <iostream>
#include <cstdio>
using namespace std;

int n, l;
char maze[21][19];

int goal_x;

void dfs(int x, int y){
    //printf("x %d y %d\n", x, y);
    if(y == 0){
        goal_x = x;
        return;
    }

    if(x-1 >= 0 and y-1 >= 0 and maze[y-1][x] == '|' and maze[y-1][x-1] == '-'){
        //printf("left\n");
        dfs(x-2, y-1);
    }
    else if(x+1 < 2*n-1 and y-1 >= 0 and maze[y-1][x] == '|' and maze[y-1][x+1] == '-'){
        //printf("right\n");
        dfs(x+2, y-1);
    }
    else if(y-1 >= 0 and maze[y-1][x] == '|'){
        //printf("up\n");
        dfs(x, y-1);
    }
}

int main(){
    cin >> n >> l;
    cin.ignore();

    int start_x;

    for(int i = 0; i <= l; i++){
        string s;
        getline(cin, s);
        for(int j = 0; j < 2*n-1; j++){
            maze[i][j] = s[j];
            if(s[j] == 'o'){
                start_x = j;
            }
        }
    }

    //printf("input finish\n");
    //printf("start_x %d\n", start_x);

    dfs(start_x, l);

    cout << goal_x/2+1 << endl;

    return 0;
}