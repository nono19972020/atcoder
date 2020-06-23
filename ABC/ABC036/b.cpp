#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n;
    cin >> n;

    char maze[n][n];

    for(long long y = 0; y < n; y++){
        for(long long x = 0; x < n; x++){
            cin >> maze[y][x];
        }
    }

    char maze_copy[n][n];

    for(long long x = n-1; x >= 0; x--){
        for(long long y = 0; y < n; y++){
            maze_copy[y][x] = maze[n-1-x][y]; 
        }
    }

    for(long long y = 0; y < n; y++){
        for(long long x = 0; x < n; x++){
            printf("%c", maze_copy[y][x]);
        }
        printf("\n");
    }

    return 0;
}