#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    char maze[4][4];

    for(int y = 0; y < 4; y++){
        for(int x = 0; x < 4; x++){
            cin >> maze[y][x];
        }
    }

    char maze_mx[4][4];
    for(int y = 0; y < 4; y++){
        for(int x = 0; x < 4; x++){
            maze_mx[y][x] = maze[y][3-x];
        }
    }
    char maze_mxy[4][4];

    for(int y = 0; y < 4; y++){
        for(int x = 0; x < 4; x++){
            maze_mxy[y][x] = maze_mx[3-y][x];
        }
    }

    for(int y = 0; y < 4; y++){
        for(int x = 0; x < 4; x++){
            if(x == 3){
                printf("%c\n", maze_mxy[y][x]);
            }
            else{
                printf("%c ", maze_mxy[y][x]);
            }
        }
    }

    return 0;
}