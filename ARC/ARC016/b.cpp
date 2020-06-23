#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int n;
    cin >> n;

    char maze[n][9];

    int count_x = 0;

    for(int y = 0; y < n; y++){
        for(int x = 0; x < 9; x++){
            cin >> maze[y][x];

            if(maze[y][x] == 'x'){
                count_x++;
            }
        }
    }

    int count_o = 0;
    for(int x = 0; x < 9; x++){
        int y = 0;
        while(y < n){
            if(maze[y][x] == 'o'){
                while(y < n and maze[y][x] == 'o'){
                    y++;
                }
                count_o++;
            }
            else{
                y++;
            }
        }
    }

    printf("%d\n", count_x + count_o);
    return 0;
}