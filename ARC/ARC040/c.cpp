#include <iostream>
#include <cstdio>
using namespace std;

long long n;
char maze[100][100];

long long draw(){
    long long start_y = -1, start_x = -1;

    for(long long i = 0; i < n; i++){
        bool find = false;
        for(long long j = n-1; j >= 0; j--){
            if(maze[i][j] == '.'){
                start_y = i;
                start_x = j;
                find = true;
                break;
            }
        }
        if(find == true) break;
    }

    if(start_y == -1 || start_x == -1) return -1;

    for(long long j = 0; j <= start_x; j++) maze[start_y][j] = '#';

    if(start_y + 1 < n){
        for(long long j = start_x; j < n; j++) maze[start_y + 1][j] = '#'; 
    }

    return 1;
}

int main(){
    cin >> n;

    for(long long i = 0; i < n; i++){
        for(long long j = 0; j < n; j++){
            cin >> maze[i][j];
        }
    }

    long long cnt = 0;
    while(1){
        long long x = draw();
        if(x == -1) break;

        cnt++;
    }

    cout << cnt << endl;
    return 0;
}