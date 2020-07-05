#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long h, w, k;
    cin >> h >> w >> k;

    char maze[h][w];
    long long ans = 0;

    for(long long i = 0; i < h; i++){
        for(long long j = 0; j < w; j++){
            cin >> maze[i][j];
        }
    }

    char maze_copy[h][w];
    for(long long bity = 0; bity < (1 << h); bity++){
        for(long long bitx = 0; bitx < (1 << w); bitx++){

            for(long long i = 0; i < h; i++){
                for(long long j = 0; j < w; j++){
                maze_copy[i][j] =  maze[i][j];
                }
            }

            for(long long y = 0; y < h; y++){
                for(long long x = 0; x < w; x++){
                    if(bitx & (1 << x) || bity & (1 << y)){
                        maze_copy[y][x] = 'R';
                    }
                }
            }

            long long count = 0;
            for(long long i = 0; i < h; i++){
                for(long long j = 0; j < w; j++){
                    if(maze_copy[i][j] == '#'){
                        count++;
                    }
                }
            }

            if(count == k){
                ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}