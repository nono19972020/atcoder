#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    char maze[4][7];
    
    for(long long i = 0; i < 4; i++){
        for(long long j = 0; j < 7; j++){
            maze[i][j] = ' ';
        }
    }

    maze[3][3] = '1';
    maze[2][2] = '2';
    maze[2][4] = '3';
    maze[1][1] = '4';
    maze[1][3] = '5';
    maze[1][5] = '6';
    maze[0][0] = '7';
    maze[0][2] = '8';
    maze[0][4] = '9';
    maze[0][6] = '0';

    long long a, b;
    cin >> a >> b;

    for(long long i = 0; i < a; i++){
        char p;
        cin >> p;
        for(long long i = 0; i < 4; i++){
            for(long long j = 0; j < 7; j++){
                if(maze[i][j] == p){
                    maze[i][j] = '.';
                }
            }
        }
    }

    for(long long i = 0; i < b; i++){
        char q;
        cin >> q;
        for(long long i = 0; i < 4; i++){
            for(long long j = 0; j < 7; j++){
                if(maze[i][j] == q){
                    maze[i][j] = 'o';
                }
            }
        }
    }

    for(long long i = 0; i < 4; i++){
        for(long long j = 0; j < 7; j++){
            if(maze[i][j] != ' ' and maze[i][j] != '.' and maze[i][j] != 'o'){
                maze[i][j] = 'x';
            }
        }
    }

    for(long long i = 0; i < 4; i++){
        for(long long j = 0; j < 7; j++){
            printf("%c", maze[i][j]);
        }
        printf("\n");
    }

    return 0;
}